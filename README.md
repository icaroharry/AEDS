AEDS
====

Repositório de práticas de AEDS

 --- Temporário - Documentação ---

##Documentação
==================
>
###Índice
=================
>
> 1 - Container
>> 1.1 - Templates
>>> 1.1.1 - developerStudio.html

>>> 1.1.2 - tabbed.html

>>> 1.1.3 - tabbedContainer.html

>>> 1.1.4 - window.html

>> 1.2 - Métodos

>> 1.3 - Eventos

> 2 - Widget
>> 2.1 - Templates
>>> 2.1.1 - black-strip.html

>>> 2.1.2 - chat-gauge.html

>>> 2.1.3 - chart-morris.html

>>> 2.1.4 - container_row.html

>>> 2.1.5 - form-center-top.html

>>> 2.1.6 - form-main.html

>>> 2.1.7 - form-view-edit.html

>>> 2.1.8 - form-view.html

>>> 2.1.9 - form.html

>>> 2.1.10 - list-grouped.html

>>> 2.1.11 - list.html

>>> 2.1.12 - list_checkbox.html

>>> 2.1.13 - list_mobile.html

>>> 2.1.14 - message.html

>>> 2.1.15 - sub-header.html

>>> 2.1.16 - tabbedWidget.html

>>> 2.1.17 - table.html

>>> 2.1.18 - waiter_tables.html

>> 2.2 - Métodos

>>2.3 - Eventos

> 3 - Field
>> 3.1 - Templates
>>> 3.1.1 - button.html

>>> 3.1.2 - checkbox.html

>>> 3.1.3 - date.html

>>> 3.1.4 - hidden.html

>>> 3.1.5 - image-static.html

>>> 3.1.6 - label-with-icon.html

>>> 3.1.7 - label.html

>>> 3.1.8 - list.html

>>> 3.1.8 - observations-text.html

>>> 3.1.9 - observations.html

>>> 3.1.10 - password-edit.html

>>> 3.1.11 - password.html

>>> 3.1.12 - raw_text.html

>>> 3.1.13 - select-edit.html

>>> 3.1.14 - select-list.html

>>> 3.1.15 - select-native.html

>>> 3.1.16 - select-simple.html

>>> 3.1.17 - select.html

>>> 3.1.18 - span-field.html

>>> 3.1.19 - text-edit.html

>>> 3.1.20 - text.html

>>> 3.1.21 - textarea.html

>> 3.2 - Métodos

>> 3.3 - Eventos
>

>=========================
>1.Containers
>=========================
>=========================
>
> Antes de qualquer coisa, é necessário adicionar um container ao projeto. Os containers são como "quadros",onde os widgets vão ser postos por cima.
>
>>###1.1.Templates
>>Os templates são os "modelos" dos containers.
>>> #### 1.1.1.developerStudio.html
>>
>>> #### 1.1.2. tabbed.html
>>
>>> #### 1.1.3. tabbedContainer.html
>>
>>> #### 1.1.4. window.html

>>###1.2.Métodos

>>###1.3.Eventos
Os eventos são ações que ocorrem quando há interação com o container.

>>> #### 1.3.1.ContainerAfterClose
>>> #### 1.3.2.ContainerOnBack
>>> #### 1.3.3.ContainerBeforeClose
>>> #### 1.3.4.ContainerAfterinit
>>> #### 1.3.5.ContainerBeforeinit
>>> #### 1.3.6.ContainerAfterOpenreport

>

>===========================
>2.Widgets
>===========================
>===========================
>
> Os widgets são como a tela do quadro, o substrato sob o qual vão ser postos os fields.

>>###2.1.Templates
>>Os templates são os "modelos" dos widgets.
>>> #### 2.1.1.black-strip.html
>>> #### 2.1.2.chart-gauge.html
>>> #### 2.1.3.chart-morris.html
>>> #### 2.1.4.container_row.html
>>> #### 2.1.5.form_center_row.html
>> Um widget mais centralizado, ideal para telas iniciais ou de login. Parâmetros básicos: "id", "name", "label", "isVisible","events", "template". Exemplo:
>>
>

```javascript
            "id": 1, //id
            "name": "FormCenter", //nome
            "label": "FormCenter", // label
            "template": "widget/form-center-top.html", // chama o template
            "isVisible": true, // is visible
            "actions": [], // actions
            "events": [], // eventos
           
```
>>> #### 2.1.6.form-main.html
>>> #### 2.1.7.form-view-edit.html
>> Um widget ideal para formulários. Parâmetros básicos: "id, "name", "label", "template", "isVisible", "events". Exemplo:
>>
>

```javascript
            "id": 000, //id
            "name": "Registro", //nome do widget, que é um form de registro
            "label": "Dados de Endereço", //label
            "template": "widget/form-view-edit.html", //chama o template
            "isVisible": true, //is visible
            "actions": [], // actions
            "events": [], // eventos
                
```
>>> #### 2.1.8.form-view.html
>>> #### 2.1.9.form-without-scholler.html
>>> #### 2.1.10.form.html
>>> #### 2.1.11.functions-template.html
>>> #### 2.1.12.list-grouped.html
>>> #### 2.1.13.list-popup.html
>>> #### 2.1.14.list.html
>>> #### 2.1.15.list_checkbox.html
>>> #### 2.1.16.list_mobile.html
>>> #### 2.1.17.production-message.html
>>> #### 2.1.18.sub-header.html
>>> #### 2.1.19.tab-widget-parent.html
>>> #### 2.1.20.tabbedWidget.html
>>> #### 2.1.21.table.html
>>> #### 2.1.22.waiter-group.html
>>> #### 2.1.23.waiter-list.html
>>> #### 2.1.24.waiter_orders.html
>>> #### 2.1.25.waiter_position.html
>>> #### 2.1.26.waiter_tables

>>###2.2.Métodos

>>###2.3.Eventos
Os eventos são ações que ocorrem quando há interação com o widget.

>>> #### 2.3.1.WidgetAfterMoveRow
>>> #### 2.3.2.WidgetBeforeMoveRow
>>> #### 2.3.3.WidgetNewRow
>>> #### 2.3.4.WidgetOnEnter
>>> #### 2.3.5.WidgetOnEnterTab
>>> #### 2.3.6.WidgetOnSync
>>> #### 2.3.7.WidgetOnCancel
>>> #### 2.3.8.WidgetOnSave
>>> #### 2.3.9.WidgetOnInitDataSource

>========================
>3.Fields
>========================
>========================
>
>Os fields são os campos,a parte interativa da tela. São os formulários, os botões, caixas de seleção, etc, toda essa parte "clicável". Eles são atachados a um widget.

>>###3.1.Templates
>>Os templates são os "modelos" dos fields.
>>> #### 3.1.1.big-button.html
>> O bigbutton nada mais é do que um "button" extendido com uma label e um icone.Parâmetros básicos:"name","label","size","class","isVisible","events", "template". Exemplo:
>>
>
>

```javascript

                    "name": "send", // nome
                    "label": "teste big button", // label
                    "size": 10, // tamanho
                    "class": "10 col-xs-offset-1", // class
                    "sameLine": false, // separador de linha
                    "isVisible": true, // is visible
                    "readOnly": false, // leitura & escrita
                    "events": [ // eventos
                        {
                            "name": "FieldOnClick", //nome do evento
                            "id": "876543", // id evento
                            "code": "LoginController.bigButtonTest();"
                            // código que representa o evento
                        }
                    ],
                    "template": "dyman/field/big-button.html" //chama o template
             
```


>>> #### 3.1.2.button.html
>> O button nada mais é do que um botão. Parâmetros básicos: "name", "label","size", "class", "isVisible", "events", "template". Exemplo:
>>
>

```javascript

                    "name": "botão", // nome
                    "label": "Botão", // label
                    "size": 10, // tamanho
                    "class": "10 col-xs-offset-1", //class
                    "sameLine": false, // separador de linha
                    "isVisible": true, //is visible
                    "readOnly": false, //leitura & escrita
                    "events": [ // eventos
                        {
                            "name": "FieldOnClick",
                            "id": "876543",
                            "code": "LoginController.login(args.owner.field.widget)" // código que representa o evento
                        }   
                    ],
                    "template": "field/button.html" // chama o template
```

>>> #### 3.1.3.checkbox.html
Uma checkbox é uma caixa de seleção. Parâmetros básicos: "name", "label",   "isVisible", "class", "template". Exemplo:
>>
>

```javascript
                      "name": "caixa de teste", // nome
                      "label": "Clique nesse checkbox!", // label
                      "isVisible": true, // is visible
                      "class": "12", // css
                      "template": "field/checkbox.html" // chama o template
```
>>> #### 3.1.4.date.html
Um campo de data no formato dd/mm/yyyy. Parâmetros básicos: "name", "label", "isVisible", "class", "template". Exemplo:
>>
>

```javascript
                        "name": "Data",
                        "label": "Data",
                        "isVisible": true,
                        "class":"12",
                        "template": "field/date.html"
```

>>> #### 3.1.5.hidden.html



>>> #### 3.1.6.image.html
Imagem. Parâmetros básicos: "name", "label", "size", "isVisible", "class", "template". Exemplo:
>>
>

```javascript
                    "name": "image", // nome
                    "label": "img", // label
                    "size": 10, // tamanho
                    "class": "10 col-xs-offset-1", // css
                    "sameLine": true, // deixa na mesma linha
                    "isVisible": true, // is visible
                    "readOnly": false, // leitura e escrita
                    "maxlength": 4, // tamanho máximo
                    "template": "field/image.html", // template
                    "mask": { // máscara 
                        "type": "zerofill" // tipo de filtro
                    }
```

>>> #### 3.1.7.image-static.html
Imagem estática. Parâmetros básicos: "name", "label", "source", "class", "isVisible", "template". Exemplo:
>>
>

```javascript

                    "name": "image", // nome
                    "label": "img", // label
                    "source": "images/zeedhi-demo.svg", //caminho da imagem
                    "class": "10 col-xs-offset-1", // css
                    "isVisible": true, // is visible
                    "template": "field/image-static.html" //chama o template
```

>>> #### 3.1.8.label-static.html
Um label estático. Parâmetros básicos: "name", "label", "isVisible", "template", "class". Exemplo:
>>
>

```javascript

                    "name": "static-label", // nome
                    "label": "Label-Estático", // label
                    "isVisible": true, // is visible
                    "template": "field/label-static.html", // chama o template
                    "class": 12 //class
```

>>> #### 3.1.9.label-with-icon.html
>>> #### 3.1.10.label.html
Um label é um rótulo. Parâmetros básicos: "name", "label", "isVisible", "size", "class", "template". Exemplo:
>>
>

```javascript 

                    "name":"label", // nome
                    "label":" Isso é um rótulo!", // label
                    "isVisible": true, // is visible
                    "size":20, // tamanho
                    "class":"10 col-xs-offset-1", // class
                    "template":"field/label.html" // chama o template
```


>>> #### 3.1.11.list.html


>>> #### 3.1.12.number-edit.html
>>> #### 3.1.13.number.html
>>> #### 3.1.14.observations-text.html
>>> #### 3.1.15.observations.html
>>> #### 3.1.16.password-edit.html
um campo de texto editável que substitui na tela o que é digitado por algum caractere. Parâmetros básicos: "id", "name", "label", "isVisible", "isReadOnly", "class", "template". Exemplo:
>>
>

```javascript
                    "id": 000, //id campo
                    "name": "PASSWORD", // nome campo
                    "label": "Password", //label
                    "placeholder": null, // placeholder
                    "isReadOnly": false, // leitura & escrita
                    "isVisible": true, // is visible
                    "template": "field/password-edit.html",
                    // chama o template
                    "class": 12 //class
```


>>> #### 3.1.17.raw_text.html
>>> #### 3.1.18.select-edit.html
>>> #### 3.1.19.select-list.html
>>> #### 3.1.20.select-native.html
>>> #### 3.1.21.select-simple.html
>>> #### 3.1.22.select.html
O select é um campo de pesquisa. Parâmetros básicos: "name", "label", "isVisible", "class", "template". Exemplo:
>>
>

```javascript
                    "name": "select", // nome
                    "label": "Selecione", // label
                    "isVisible": true, // is visible
                    "class":"12", // css
                    "template": "field/select.html", // chama o template
                    "descriptionField": "Seleção" // Como um placeholder
```

>>> #### 3.1.23.span-field.html
>>> #### 3.1.24.switch.html
>>> #### 3.1.25.text.html
>>> #### 3.1.26.text-edit.html
Um campo de texto editável. Parâmetros básicos: "name", "label", "class", "id", "isReadOnly", "isVisible", "template". Exemplo:
>>
>

```javascript
                    "id": 000, // id do campo
                    "name": "Texto", // nome
                    "label": "Texto", // label
                    "placeholder": "Digite aqui", 
                    // Placeholder.É o que aparece no espaço para editar.No caso, vai aparecer "Digite aqui" no espaço editável do campo
                    "isReadOnly": false, // Leitura & escrita
                    "isVisible": true, // is visible
                    "template": "field/text-edit.html", // chama o template
                    "class": 12 // classe
```

>>O campo de texto ainda pode conter uma "máscara", um tipo de formatação personalizada. Exemplo de um campo de número de telefone:
>>
>

```javascript
                    "id": 000,
                    "name": "PHONENUMBER",
                    "label": "Phone Number",
                    "placeholder": "Telefone",
                    "isReadOnly": false,
                    "isVisible": true,
                    "template": "field/text-edit.html",
                    "events": [],
                    "class": 12,
                    "mask": { // máscara de formatação
                        "type": "",
                        "params" : { //define como os parametros serão formatados no campo
                            "format" : "(99) 9999-9999" // formato do telefone
                        }
                    }
```


>>> #### 3.1.27.textarea.html
>> Caixa de texto. É uma caixa de comentário, por exemplo. Parâmetros básicos: "name", "label", "size", "isVisible", "class", "template". Exemplo:
>>
>

```javascript
                        "name": "comentário", // nome
                        "label": "Deixe aqui seu comentário", //label
                        "isVisible": true, // is visible
                        "size": "25", // tamanho
                        "class": "12", // class
                        "template": "field/textarea.html" //template
```


>>> #### 3.1.28.waiter-categories.html
>>> #### 3.1.29.waiter-products.html
>>> #### 3.1.30.waiter-position.html

>>###3.2.Métodos

>>###3.3.Eventos
Os eventos são ações que ocorrem quando há interação com os fields.
>>> #### 3.3.1.FieldOnChange
>>> #### 3.3.2.FieldOnCancel
>>> #### 3.3.3.FieldOnClick
>>> #### 3.3.4.FieldOnBlur
>>> #### 3.3.5.FieldOnKeypress
>>> #### 3.3.6.FieldAfterMoveRow
>>> #### 3.3.7.FieldBeforeMoveRow



