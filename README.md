AEDS
====

Repositório de práticas de AEDS

 --- Temporário - Documentação ---

##Documentation
==================
>
###Table of Contents
=================
>
> 1 - Containers
>> 1.1 - Templates
>>> 1.1.1 - developerStudio.html

>>> 1.1.2 - tabbed.html

>>> 1.1.3 - tabbedContainer.html

>>> 1.1.4 - window.html

>> 1.2 - Methods

>> 1.3 - Events
>>> 1.3.1 - ContainerAfterClose

>>> 1.3.2 - ContainerOnBack

>>> 1.3.3 - ContainerBeforeClose

>>> 1.3.4 - ContainerAfterinit

>>> 1.3.5 - ContainerBeforeinit

>>> 1.3.6 - ContainerAfterOpenreport

> 2 - Widgets
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

>> 2.2 - Methods

>>2.3 - Events
>>> 2.3.1 - WidgetAfterMoveRow

>>> 2.3.2 - WidgetBeforeMoveRow

>>> 2.3.3 - WidgetNewRow

>>> 2.3.4 - WidgetOnEnter

>>> 2.3.5 - WidgetOnEnterTab

>>> 2.3.6 - WidgetOnSync

>>> 2.3.7 - WidgetOnCancel

>>> 2.3.8 - WidgetOnSave

>>> 2.3.9 - WidgetOnInitDataSource
>>> 

> 3 - Fields
>> 3.1 - Templates
>>> 3.1.1 - big-button.html

>>> 3.1.2 - button.html

>>> 3.1.3 - checkbox.html

>>> 3.1.4 - date.html

>>> 3.1.5 - hidden.html

>>> 3.1.6 - image.html

>>> 3.1.7 - image-static.html

>>> 3.1.8 - label-static

>>> 3.1.9 - label-with-icon.html

>>> 3.1.10 - label.html

>>> 3.1.11 - list.html

>>> 3.1.12 - number-edit.html

>>> 3.1.13 - number.html

>>> 3.1.14 - observations-text.html

>>> 3.1.15 - observations.html

>>> 3.1.16 - password-edit.html

>>> 3.1.17 - password.html

>>> 3.1.18 - raw_text.html

>>> 3.1.19 - select-edit.html

>>> 3.1.20 - select-list.html

>>> 3.1.21 - select-native.html

>>> 3.1.22 - select-simple.html

>>> 3.1.23 - select.html

>>> 3.1.24 - span-field.html

>>> 3.1.25 - switch.html

>>> 3.1.26 - text-edit.html

>>> 3.1.27 - text.html

>>> 3.1.28 - textarea.html

>>> 3.1.29 - waiter-categories.html

>>> 3.1.30 - waiter-products.html

>>> 3.1.31 - waiter-position.html

>> 3.2 - Methods

>> 3.3 - Events
>

>=========================
>1.Containers
>=========================
>=========================
>
> Containers
>
>>###1.1.Templates
>>The templates are the "models" of containers.
>>> #### 1.1.1.developerStudio.html
>>
>>> #### 1.1.2. tabbed.html
>>
>>> #### 1.1.3. tabbedContainer.html
>>
>>> #### 1.1.4. window.html

>>###1.2.Methods

>>###1.3.Events
 Events are actions that are performed when there is interaction with the container.
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
> Widgets.

>>###2.1.Templates
>>The templates are the "models" of widgets.
>>> #### 2.1.1.black-strip.html
>>> #### 2.1.2.chart-gauge.html
>>> #### 2.1.3.chart-morris.html
>>> #### 2.1.4.container_row.html
>>> #### 2.1.5.form_center_row.html
>> Um widget mais centralizado, ideal para telas iniciais ou de login. Basic parameters: "id", "name", "label", "isVisible","events", "template". Exemplo:
>>
>

```javascript
            "id": 1, // id
            "name": "FormCenter", // name
            "label": "FormCenter", // label
            "template": "widget/form-center-top.html", // template
            "isVisible": true, // is visible
            "actions": [], // actions
            "events": [], // events
           
```
>>> #### 2.1.6.form-main.html
>>> #### 2.1.7.form-view-edit.html
>> Um widget ideal para formulários. Parâmetros básicos: "id, "name", "label", "template", "isVisible", "events". Exemplo:
>>
>

```javascript
            "id": 000, // id
            "name": "Register", // name 
            "label": "Dados de Endereço", // label
            "template": "widget/form-view-edit.html", // template
            "isVisible": true, // is visible
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

>>###2.2.Methods

>>###2.3.Events
Events are actions that are performed when there is interaction with the widgets.

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
>Fields.

>>###3.1.Templates
>>The templates are the "models" of fields.
>>> #### 3.1.1.big-button.html
>> The bigbutton is a extended "button". Basic parameters:"name","label","size","class","isVisible","events", "template". Example:
>>
>
>

```javascript

                    "name": "send", // name
                    "label": "teste big button", // label
                    "size": 10, // size
                    "class": "10 col-xs-offset-1", // css
                    "sameLine": false,
                    "isVisible": true, // is visible
                    "readOnly": false, // read and writing
                    "events": [ // events
                        {
                            "name": "FieldOnClick", // event name
                            "id": "876543", // event id
                            "code": "LoginController.bigButtonTest();"
                            // code that representing the event
                        }
                    ],
                    "template": "dyman/field/big-button.html" //chama o template
             
```


>>> #### 3.1.2.button.html
>>A button. Basic parameters: "name", "label","size", "class", "isVisible", "events", "template". Exemplo:
>>
>

```javascript

                    "name": "botão", // nome
                    "label": "Botão", // label
                    "size": 10, // size 
                    "class": "10 col-xs-offset-1", // css
                    "sameLine": false, 
                    "isVisible": true, // is visible
                    "readOnly": false, // read and writing
                    "events": [ // events
                        {
                            "name": "FieldOnClick",
                            "id": "876543",
                            "code": "LoginController.login(args.owner.field.widget)" // code that representing the event
                        }   
                    ],
                    "template": "field/button.html" // template
```

>>> #### 3.1.3.checkbox.html
A checkbox. Basic parameters: "name", "label",   "isVisible", "class", "template". Exemplo:
>>
>

```javascript
                      "name": "testbox", // name
                      "label": "Click in this checkbox!", // label
                      "isVisible": true, // is visible
                      "class": "12", // css
                      "template": "field/checkbox.html" // template
```
>>> #### 3.1.4.date.html
A date field. Basic parameters: "name", "label", "isVisible", "class", "template". Exemplo:
>>
>

```javascript
                        "name": "Data", // name
                        "label": "Data", // label
                        "isVisible": true, // is visible
                        "class":"12", // css
                        "template": "field/date.html" //template
```

>>> #### 3.1.5.hidden.html



>>> #### 3.1.6.image.html
An image. Basic parameters: "name", "label", "size", "isVisible", "class", "template". Example:
>>
>

```javascript
                    "name": "image", // name
                    "label": "img", // label
                    "size": 10, // size
                    "class": "10 col-xs-offset-1", // css
                    "sameLine": true, // leaves on the same line
                    "isVisible": true, // is visible
                    "readOnly": false, // read and writing
                    "maxlength": 4, // max length
                    "template": "field/image.html", // template
                    "mask": { // mask
                        "type": "zerofill" // filter type
                    }
```

>>> #### 3.1.7.image-static.html
A static image. Basic parameters: "name", "label", "source", "class", "isVisible", "template". Example:
>>
>

```javascript

                    "name": "image", // name
                    "label": "img", // label
                    "source": "images/zeedhi-demo.svg", // image directory
                    "class": "10 col-xs-offset-1", // css
                    "isVisible": true, // is visible
                    "template": "field/image-static.html" //template
```

>>> #### 3.1.8.label-static.html
A static label. Basic parameters: "name", "label", "isVisible", "template", "class". Example:
>>
>

```javascript

                    "name": "static-label", // name
                    "label": "Label-Estático", // label
                    "isVisible": true, // is visible
                    "template": "field/label-static.html", // template
                    "class": 12 //css
```

>>> #### 3.1.9.label-with-icon.html
>>> #### 3.1.10.label.html
A label field. Basic parameters: "name", "label", "isVisible", "size", "class", "template". Example:
>>
>

```javascript 

                    "name":"label", // name
                    "label":" This is a label!", // label
                    "isVisible": true, // is visible
                    "size":20, // size
                    "class":"10 col-xs-offset-1", // css
                    "template":"field/label.html" // template
```


>>> #### 3.1.11.list.html


>>> #### 3.1.12.number-edit.html
>>> #### 3.1.13.number.html
>>> #### 3.1.14.observations-text.html
>>> #### 3.1.15.observations.html
>>> #### 3.1.16.password-edit.html
An editable text field that changes in the screen what is typed for any character. Basic parameters: "id", "name", "label", "isVisible", "isReadOnly", "class", "template". Example:
>>
>

```javascript
                    "id": 000, //id 
                    "name": "PASSWORD", // name
                    "label": "Password", //label
                    "placeholder": null, // placeholder
                    "isReadOnly": false, // read and writing
                    "isVisible": true, // is visible
                    "template": "field/password-edit.html",
                    // template
                    "class": 12 //css
```

>>> #### 3.1.17.password.html
>>> #### 3.1.18.raw_text.html
>>> #### 3.1.19.select-edit.html
>>> #### 3.1.20.select-list.html
>>> #### 3.1.21.select-native.html
>>> #### 3.1.22.select-simple.html
>>> #### 3.1.23.select.html
The select is a search field. Basic parameters: "name", "label", "isVisible", "class", "template". Exemple:
>>
>

```javascript
                    "name": "select", // name
                    "label": "Select", // label
                    "isVisible": true, // is visible
                    "class":"12", // css
                    "template": "field/select.html", // template
                    "descriptionField": "Seleção" // placeholder
```

>>> #### 3.1.24.span-field.html
>>> #### 3.1.25.switch.html
>>> #### 3.1.26.text.html
>>> #### 3.1.27.text-edit.html
An editable text field. Basic parameters: "name", "label", "class", "id", "isReadOnly", "isVisible", "template". Example:
>>
>

```javascript
                    "id": 000, // id 
                    "name": "Text", // name
                    "label": "Texto", // label
                    "placeholder": "Digite aqui", 
                    // Placeholder.É o que aparece no espaço para editar.No caso, vai aparecer "Digite aqui" no espaço editável do campo
                    "isReadOnly": false, // Leitura & escrita
                    "isVisible": true, // is visible
                    "template": "field/text-edit.html", // chama o template
                    "class": 12 // classe
```

>>This field may still have a "mask" that allows custom formatting. Example of a telephone number field:
>>
>

```javascript
                    "id": 000, //id
                    "name": "PHONENUMBER", // name
                    "label": "Phone Number", // label
                    "placeholder": "Telefone", // placeholder
                    "isReadOnly": false, // read and writing
                    "isVisible": true, // is visible
                    "template": "field/text-edit.html", //template
                    "events": [], // events - in that case don´t have
                    "class": 12, // css
                    "mask": { // mask
                        "type": "",
                        "params" : { // defines how parameters are formatted in the field
                            "format" : "(99) 9999-9999" // telephone format
                        }
                    }
```


>>> #### 3.1.28.textarea.html
>> The text area is a "box comment", for example. Basic parameters: "name", "label", "size", "isVisible", "class", "template". Example:
>>
>

```javascript
                        "name": "comment", // name
                        "label": "Leave you comment here:", //label
                        "isVisible": true, // is visible
                        "size": "25", // size
                        "class": "12", // css
                        "template": "field/textarea.html" //template
```


>>> #### 3.1.29.waiter-categories.html
>>> #### 3.1.30.waiter-products.html
>>> #### 3.1.31.waiter-position.html

>>###3.2.Methods

>>###3.3.Events
Events are actions that are performed when there is interaction with the fields.
>>> #### 3.3.1.FieldOnChange
>>> #### 3.3.2.FieldOnCancel
>>> #### 3.3.3.FieldOnClick
>>> #### 3.3.4.FieldOnBlur
>>> #### 3.3.5.FieldOnKeypress
>>> #### 3.3.6.FieldAfterMoveRow
>>> #### 3.3.7.FieldBeforeMoveRow



