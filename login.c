void requireLogin(){

	char login[8];
	char password[8];

	Player player;
	char ch;
	bool logged = false;
	system("clear");
	while(!logged) {
		system("clear");
		printf("Digite <L> para Login ou <C> para Cadastro: ");
		scanf("%c", &ch);
		fflush(stdout);
		switch(ch) {
			case 'L':
				system("clear");
				printf("Login: ");
				scanf("%s", &login);
				printf("\nPassword: ");
				scanf("%s", &password);
				if(logIn(login, password) == 1) {
					logged = true;
					break;
				}
				system("clear");
				printf("\nLogin ou senha invalidos!\n");
				system("read -p \"Pressione qualquer tecla para continuar...\" ");
				system("clear");
			break;
			case 'C':
				system("clear");
				printf("Login: ");
				scanf("%s", &player.login);
				printf("\nSenha: ");
				scanf("%s", &player.password);
				printf("\nConfirme sua senha: ");
				scanf("%s", &password);
				printf("\nNome: ");
				scanf("%s", &player.name);
				printf("\nIdade: ");
				scanf("%s", &player.age);
				if(strcmp(player.password, password) == 0) {
					if (existsPlayer(player.login) == -1) {
						player.bestScore = 0;
						player.currentScore = 0;
						savePlayerToDatabase(player);
						system("clear");
						printf("Jogador cadastrado com sucesso!\n");
						logged = true;
						system("read -p \"Pressione <enter> para jogar...\" ");
						system("clear");
						break;
					} 
					else {
						system("clear");
						printf("Ja existe um jogador com esse login!\n");
						system("read -p \"Pressione <enter> para continuar1...\" ");
						system("clear");
					}
				}
				else {
					printf("As senhas digitadas sao diferentes!\n");
					
					system("read -p \"Pressione <enter> para continuar2...\" ");
					system("clear");
				}	
			break;
			default:
				printf("Opcao invalida!\n");
				system("read -p \"Pressione <enter> para continuar2...\" ");
				system("clear");
				fflush(stdout);
		}
	
	}
}

int logIn(char* login, char* password) {
  char buf[255];
  char* loginDB;
  char* passwordDB;
  FILE* players_database;
  players_database = fopen("players_database.txt", "r");   
  if (players_database == NULL) {    
      printf("Error! The file could not be opened.\n");    
      exit(1);               
  }
  fgets(buf, 255, players_database);
  while(!feof(players_database)) {
    loginDB = strtok(buf, ", ");
    passwordDB = strtok(NULL, ", ");
    //printf("%s", passwordDB);
    passwordDB = decrypt(passwordDB);
    if(strcmp(login, loginDB) == 0) {
      if(strcmp(password, passwordDB) == 0){
        return 1;
      }
    }
    fgets(buf, 255, players_database);
  }
  return -1;  
} 

int existsPlayer(char* login) {
  char buf[255];
  char* loginDB;
  FILE* players_database;       
  players_database = fopen ("players_database.txt", "r");   
  if (players_database == NULL) {    
      printf("Error! The file could not be opened.\n");    
      exit(1);               
  }
  fgets(buf, 255, players_database);
  while(!feof(players_database)) {
    loginDB = strtok(buf, ", ");
    if(strcmp(login, loginDB) == 0) 
      return 1;
    fgets(buf, 255, players_database);
  }
  return -1;
}
