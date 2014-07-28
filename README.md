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
>> Basic parameters: "id", "name", "label", "template", "footer", "widgets[]", "events[]". Example:
>>
>

```javascript
    "id": 8016, // id
    "name": "Developer", // name
    "label": "developer", // label
    "showFooter": true, // show footer
    "showHeader": true, // show header
    "footer": "component/footer.html", // footer
    "events": [], // events
    "template": "container/developerStudio.html" // template
    "widgets": [] // widgets
 ```
>>> #### 1.1.2. tabbed.html
>>Basic parameters: "id", "name", "label", "template", "footer", "widgets[]", "events[]". Example:
>>
>

```javascript
    "id": 8016, // id
    "name": "Tabbed", // name
    "label": "tabbed", // label
    "showFooter": true, // show footer
    "showHeader": true, // show header
    "footer": "component/footer.html", // footer
    "events": [], // events
    "menus": [], // menus
    "template": "container/tabbed.html" // template
    "widgets": [] // widgets

```

>>> #### 1.1.3. tabbedContainer.html
>>Basic parameters: "id", "name", "label", "template", "footer", "widgets[]", "events[]". Example:
>>
>

```javascript
    "id": 8016, // id
    "name": "Tcont", // name
    "label": tcont, // label
    "showFooter": true, // show footer
    "showHeader": true, // show header
    "footer": "component/footer.html", // footer
    "events": [], // events
    "template": "container/tabbedContainer.html" // template
    "widgets": [] // widgets

```

>>> #### 1.1.4. window.html
>>Basic parameters: "id", "name", "label", "template", "footer", "widgets[]", "events[]". Example:
>>
>

```javascript
    "id": 8016, // id
    "name": "Window", // name
    "label": "developer", // label
    "showFooter": true, // show footer
    "showHeader": true, // show header
    "footer": "component/footer.html", // footer
    "events": [], // events
    "template": "container/window.html" // template
    "widgets": [] // widgets

```

>>###1.2.Methods

>>###1.3.Events
 Events are actions that are performed when there is interaction with the container.
>>> #### 1.3.1.ContainerAfterClose
>>
>>
>

```javascript

```
>>> #### 1.3.2.ContainerOnBack
>>
>>
>

```javascript

```
>>> #### 1.3.3.ContainerBeforeClose
>>
>>
>

```javascript

```
>>> #### 1.3.4.ContainerAfterinit
>>
>>
>

```javascript

```
>>> #### 1.3.5.ContainerBeforeinit
>>
>>
>

```javascript

```
>>> #### 1.3.6.ContainerAfterOpenreport
>>
>>
>

```javascript

```

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
>>
>>
>

```javascript

```
>>> #### 2.1.2.chart-gauge.html
>>
>>
>

```javascript

```
>>> #### 2.1.3.chart-morris.html
>>
>>
>

```javascript

```
>>> #### 2.1.4.container_row.html
>>
>>
>

```javascript

```
>>> #### 2.1.5.form_center_row.html
>> Basic parameters: "id", "name", "label", "isVisible","events", "template". Exemplo:
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
            "fields": [], // fields
           
```
>>> #### 2.1.6.form-main.html
>>> #### 2.1.7.form-view-edit.html
>> Basic parameters: "id, "name", "label", "template", "isVisible", "events". Exemplo:
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
>>
>>
>

```javascript

```
>>> #### 2.1.9.form-without-scholler.html
>>
>>
>

```javascript

```
>>> #### 2.1.10.form.html
>>
>>
>

```javascript

```
>>> #### 2.1.11.functions-template.html
>>
>>
>

```javascript

```
>>> #### 2.1.12.list-grouped.html
>>
>>
>

```javascript

```
>>> #### 2.1.13.list-popup.html
>>
>>
>

```javascript

```
>>> #### 2.1.14.list.html
>>
>>
>

```javascript

```
>>> #### 2.1.15.list_checkbox.html
>>
>>
>

```javascript

```
>>> #### 2.1.16.list_mobile.html
>>
>>
>

```javascript

```
>>> #### 2.1.17.production-message.html
>>
>>
>

```javascript

```
>>> #### 2.1.18.sub-header.html
>>
>>
>

```javascript

```
>>> #### 2.1.19.tab-widget-parent.html
>>
>>
>

```javascript

```
>>> #### 2.1.20.tabbedWidget.html
>>
>>
>

```javascript

```
>>> #### 2.1.21.table.html
>>
>>
>

```javascript

```
>>> #### 2.1.22.waiter-group.html
>>
>>
>

```javascript

```
>>> #### 2.1.23.waiter-list.html
>>
>>
>

```javascript

```
>>> #### 2.1.24.waiter_orders.html
>>
>>
>

```javascript

```
>>> #### 2.1.25.waiter_position.html
>>
>>
>

```javascript

```
>>> #### 2.1.26.waiter_tables
>>
>>
>

```javascript

```

>>###2.2.Methods

>>###2.3.Events
Events are actions that are performed when there is interaction with the widgets.

>>> #### 2.3.1.WidgetAfterMoveRow
>>
>>
>

```javascript

```
>>> #### 2.3.2.WidgetBeforeMoveRow
>>
>>
>

```javascript

```
>>> #### 2.3.3.WidgetNewRow
>>
>>
>

```javascript

```
>>> #### 2.3.4.WidgetOnEnter
>>
>>
>

```javascript

```
>>> #### 2.3.5.WidgetOnEnterTab
>>
>>
>

```javascript

```
>>> #### 2.3.6.WidgetOnSync
>>
>>
>

```javascript

```
>>> #### 2.3.7.WidgetOnCancel
>>
>>
>

```javascript

```
>>> #### 2.3.8.WidgetOnSave
>>
>>
>

```javascript

```
>>> #### 2.3.9.WidgetOnInitDataSource
>>
>>
>

```javascript

```

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
                    "template": "dyman/field/big-button.html" // template
             
```


>>> #### 3.1.2.button.html
>>A button. Basic parameters: "name", "label","size", "class", "isVisible", "events", "template". Example:
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
A checkbox. Basic parameters: "name", "label",   "isVisible", "class", "template". Example
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
A date field. Basic parameters: "name", "label", "isVisible", "class", "template". Example:
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
>>
>>
>

```javascript

```

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
                    "label": "Static-Label", // label
                    "isVisible": true, // is visible
                    "template": "field/label-static.html", // template
                    "class": 12 //css
```

>>> #### 3.1.9.label-with-icon.html
>>
>>
>

```javascript

```
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
>>
>>
>

```javascript

```

>>> #### 3.1.12.number-edit.html
>>
>>
>

```javascript

```
>>> #### 3.1.13.number.html
>>
>>
>

```javascript

```
>>> #### 3.1.14.observations-text.html
>>
>>
>

```javascript

```
>>> #### 3.1.15.observations.html
>>
>>
>

```javascript

```
>>> #### 3.1.16.password-edit.html
>>
>>
>

```javascript

```
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
>>
>>
>

```javascript

```
>>> #### 3.1.18.raw_text.html
>>
>>
>

```javascript

```
>>> #### 3.1.19.select-edit.html
>>
>>
>

```javascript

```
>>> #### 3.1.20.select-list.html
>>
>>
>

```javascript

```
>>> #### 3.1.21.select-native.html
>>
>>
>

```javascript

```
>>> #### 3.1.22.select-simple.html
>>
>>
>

```javascript

```
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
>>
>>
>

```javascript

```
>>> #### 3.1.25.switch.html
>>
>>
>

```javascript

```
>>> #### 3.1.26.text.html
>>
>>
>

```javascript

```
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
>>
>>
>

```javascript

```
>>> #### 3.1.30.waiter-products.html
>>
>>
>

```javascript

```
>>> #### 3.1.31.waiter-position.html
>>
>>
>

```javascript

```

>>###3.2.Methods

>>###3.3.Events
Events are actions that are performed when there is interaction with the fields.
>>> #### 3.3.1.FieldOnChange
This event occurs when the original state of a field is modified. Basic parameters: "id", "method", "serviceName. Example:
>>
>

```javascript
                    "name": "datasource_id",
                    "label": "Choose a datasource",
                    "size": 120,
                    "class": 12,
                    "sameLine": true,
                    "isVisible": true,
                    "readOnly": false,
                    "template": "field/list.html",
                    "events": [
                        {
                            "id": 1,
                            "name": "FieldOnChange",
                            "code": "developerStudioMethods.loadMetaColumns(args);" // code can only call methods that are in registered controlers in the application context
                        }
                    ],
                    "placeholder": "",
                    "minimumInputLength": 1,
                    "isMultiple": false,
                    "maximumSelectionSize": 2,
                    "descriptionField": "NAME",
                    "valueField": "DATASOURCE_ID",
                    "dataSource": {
                        "localStorage": true,
                        "name": "/dataSourceReference",
                        "data": [
                            
                        ]
                    }

```
    

>>> #### 3.3.2.FieldOnCancel
This event occurs when the value of field is canceled.Basic parameters: "id", "method", "serviceName. Example:
>>
>

```javascript

```

>>> #### 3.3.3.FieldOnClick
This event occurs when the field is clicked. Basic parameters: "id", "method", "serviceName". Example:
>>
>

```javascript
                    // this is a "alert" button
                    "name": "Alert", // name
                    "label": "Alert", // label
                    "size": 40, // size
                    "class": 3, 
                    "sameLine": true, 
                    "isVisible": true, 
                    "readOnly": false,
                    "template": "field/button.html", // template
                    "events": [ // events
                        {
                            "id": 8, // id
                            "name": "FieldOnClick", // serviceName 
                             "code": "alert(' Test ');"  // method
                            // code can only call methods that are in registered controlers in the application context
                        }
                    ]
```

>>> #### 3.3.4.FieldOnBlur
This event occurs when focus is last. Basic parameters: "id", "method", "serviceName". Example:
>>
>

```javascript

```

>>> #### 3.3.5.FieldOnKeypress
This event occurs when something is entered in the field. Basic parameters: "id", "method", "serviceName". Example:
>>
>

```javascript
                        "id" : 234,
                        "name": "Test", 
                        "placeholder": " type something here to enable the   event ", 
                        "size": 80, 
                        "class": 3, 
                        "sameLine": true, 
                        "isVisible": true, 
                        "readOnly": false,
                        "template": "field/text.html", 
                        "events": [ 
                            {
                                "id": 8, 
                                "name": "FieldOnKeypress", // event name
                                "code": "alert(' Test ');" // method
                                // code can only call methods that are in registered controlers  in the application context
                            }
                        ]

```

>>> #### 3.3.6.FieldAfterMoveRow
This event occurs when the widget where the field is changing. This event gets the field in the widget after some change. Basic parameters: "id", "method", "serviceName". Example:
>>
>

```javascript
                   "colorProperty": "color",
                    "events": [
                        {
                            "name": "FieldAfterMoveRow",
                            "code": "ScreenService.filterWidget(args.owner,  args.owner.parent.widgets)"
                        }
                    ],
                    "labelProperty": "label",
                    "fields": [],
                    "name": "categories",
                    "class": "",
                    "lines" : 3,
                    "readOnly": false,
                    "template": "field/waiter-categories.html",
                    "valueField": "category",
                    "dataSource": {
                        "name": "categories",
                        "localStorage": true
                    }

```

>>> #### 3.3.7.FieldBeforeMoveRow
Basic parameters: "id", "method", "serviceName". Example:
>>
>

```javascript

```


