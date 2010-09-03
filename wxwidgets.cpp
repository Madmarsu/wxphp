
#include "php_wxwidgets.h"
#include "app.h"

// entries --->
#include "frame.h"
zend_class_entry *php_wxFrame_entry;
int le_wxFrame;
zend_class_entry *php_wxEvent_entry;
int le_wxEvent;
zend_class_entry *php_wxWindow_entry;
int le_wxWindow;
zend_class_entry *php_wxPoint_entry;
int le_wxPoint;
zend_class_entry *php_wxSize_entry;
int le_wxSize;
zend_class_entry *php_wxToolBar_entry;
int le_wxToolBar;
zend_class_entry *php_wxStatusBar_entry;
int le_wxStatusBar;
zend_class_entry *php_wxBoxSizer_entry;
int le_wxBoxSizer;
zend_class_entry *php_wxSizer_entry;
int le_wxSizer;
zend_class_entry *php_wxColour_entry;
int le_wxColour;
zend_class_entry *php_wxCursor_entry;
int le_wxCursor;
zend_class_entry *php_wxFont_entry;
int le_wxFont;
zend_class_entry *php_wxWindowBase_entry;
int le_wxWindowBase;
zend_class_entry *php_wxSizerFlags_entry;
int le_wxSizerFlags;
zend_class_entry *php_wxSizerItem_entry;
int le_wxSizerItem;
zend_class_entry *php_wxClassInfo_entry;
int le_wxClassInfo;
zend_class_entry *php_wxObject_entry;
int le_wxObject;
zend_class_entry *php_wxImage_entry;
int le_wxImage;
zend_class_entry *php_wxMenuItem_entry;
int le_wxMenuItem;
zend_class_entry *php_wxMenuItemBase_entry;
int le_wxMenuItemBase;
zend_class_entry *php_wxMenu_entry;
int le_wxMenu;
zend_class_entry *php_wxBitmap_entry;
int le_wxBitmap;
zend_class_entry *php_wxMenuBase_entry;
int le_wxMenuBase;
zend_class_entry *php_wxMenuBar_entry;
int le_wxMenuBar;
zend_class_entry *php_wxToolBarBase_entry;
int le_wxToolBarBase;
zend_class_entry *php_wxToolBarToolBase_entry;
int le_wxToolBarToolBase;
zend_class_entry *php_wxControl_entry;
int le_wxControl;
zend_class_entry *php_wxCommandEvent_entry;
int le_wxCommandEvent;
zend_class_entry *php_wxPanel_entry;
int le_wxPanel;
zend_class_entry *php_wxTopLevelWindowBase_entry;
int le_wxTopLevelWindowBase;
zend_class_entry *php_wxSplitterWindow_entry;
int le_wxSplitterWindow;
zend_class_entry *php_wxTreeCtrl_entry;
int le_wxTreeCtrl;
zend_class_entry *php_wxValidator_entry;
int le_wxValidator;
zend_class_entry *php_wxCheckListBox_entry;
int le_wxCheckListBox;
zend_class_entry *php_wxTreeItemData_entry;
int le_wxTreeItemData;
zend_class_entry *php_wxTreeItemId_entry;
int le_wxTreeItemId;
zend_class_entry *php_wxFrameBase_entry;
int le_wxFrameBase;
zend_class_entry *php_wxTreeEvent_entry;
int le_wxTreeEvent;
zend_class_entry *php_wxArrayString_entry;
int le_wxArrayString;
zend_class_entry *php_wxCheckListBoxBase_entry;
int le_wxCheckListBoxBase;
zend_class_entry *php_wxListBoxBase_entry;
int le_wxListBoxBase;
zend_class_entry *php_wxIcon_entry;
int le_wxIcon;
zend_class_entry *php_wxTextCtrl_entry;
int le_wxTextCtrl;
zend_class_entry *php_wxNotebook_entry;
int le_wxNotebook;
zend_class_entry *php_wxBookCtrlBase_entry;
int le_wxBookCtrlBase;
zend_class_entry *php_wxFlexGridSizer_entry;
int le_wxFlexGridSizer;
zend_class_entry *php_wxStaticText_entry;
int le_wxStaticText;
zend_class_entry *php_wxButton_entry;
int le_wxButton;
zend_class_entry *php_wxStaticBox_entry;
int le_wxStaticBox;
zend_class_entry *php_wxStaticBoxSizer_entry;
int le_wxStaticBoxSizer;
zend_class_entry *php_wxListBox_entry;
int le_wxListBox;
zend_class_entry *php_wxFileDialog_entry;
int le_wxFileDialog;
zend_class_entry *php_wxDialog_entry;
int le_wxDialog;
zend_class_entry *php_wxMessageDialog_entry;
int le_wxMessageDialog;
zend_class_entry *php_wxStatusBarBase_entry;
int le_wxStatusBarBase;
zend_class_entry *php_wxListCtrl_entry;
int le_wxListCtrl;
zend_class_entry *php_wxStaticBitmap_entry;
int le_wxStaticBitmap;
zend_class_entry *php_wxGauge_entry;
int le_wxGauge;
zend_class_entry *php_wxListEvent_entry;
int le_wxListEvent;
zend_class_entry *php_wxComboBox_entry;
int le_wxComboBox;
zend_class_entry *php_wxPrintout_entry;
int le_wxPrintout;
zend_class_entry *php_wxDC_entry;
int le_wxDC;
zend_class_entry *php_wxDCBase_entry;
int le_wxDCBase;
zend_class_entry *php_wxPrintDialogData_entry;
int le_wxPrintDialogData;
zend_class_entry *php_wxRect_entry;
int le_wxRect;
zend_class_entry *php_wxPen_entry;
int le_wxPen;
zend_class_entry *php_wxBrush_entry;
int le_wxBrush;
zend_class_entry *php_wxSplashScreen_entry;
int le_wxSplashScreen;
zend_class_entry *php_wxCalendarCtrl_entry;
int le_wxCalendarCtrl;
zend_class_entry *php_wxCalendarEvent_entry;
int le_wxCalendarEvent;
zend_class_entry *php_wxDateEvent_entry;
int le_wxDateEvent;
zend_class_entry *php_wxDateTime_entry;
int le_wxDateTime;
zend_class_entry *php_wxCalendarDateAttr_entry;
int le_wxCalendarDateAttr;
zend_class_entry *php_wxTimer_entry;
int le_wxTimer;
zend_class_entry *php_wxEvtHandler_entry;
int le_wxEvtHandler;
zend_class_entry *php_wxTimerEvent_entry;
int le_wxTimerEvent;
zend_class_entry *php_wxIPV4address_entry;
int le_wxIPV4address;
zend_class_entry *php_wxSockAddress_entry;
int le_wxSockAddress;
zend_class_entry *php_wxSocketClient_entry;
int le_wxSocketClient;
zend_class_entry *php_wxSocketBase_entry;
int le_wxSocketBase;
zend_class_entry *php_wxCheckBox_entry;
int le_wxCheckBox;
zend_class_entry *php_wxDirDialog_entry;
int le_wxDirDialog;
zend_class_entry *php_wxBitmapButton_entry;
int le_wxBitmapButton;
zend_class_entry *php_wxToggleButton_entry;
int le_wxToggleButton;
zend_class_entry *php_wxChoice_entry;
int le_wxChoice;
zend_class_entry *php_wxImageList_entry;
int le_wxImageList;
zend_class_entry *php_wxXmlResource_entry;
int le_wxXmlResource;
zend_class_entry *php_wxLocale_entry;
int le_wxLocale;
zend_class_entry *php_wxTreeCtrlBase_entry;
int le_wxTreeCtrlBase;
zend_class_entry *php_wxRadioBox_entry;
int le_wxRadioBox;
zend_class_entry *php_wxRadioButton_entry;
int le_wxRadioButton;
zend_class_entry *php_wxListItem_entry;
int le_wxListItem;
zend_class_entry *php_wxHtmlHelpController_entry;
int le_wxHtmlHelpController;
zend_class_entry *php_wxTaskBarIcon_entry;
int le_wxTaskBarIcon;
zend_class_entry *php_wxScrolledWindow_entry;
int le_wxScrolledWindow;
zend_class_entry *php_wxIdleEvent_entry;
int le_wxIdleEvent;
zend_class_entry *php_wxSpinEvent_entry;
int le_wxSpinEvent;
zend_class_entry *php_wxScrollEvent_entry;
int le_wxScrollEvent;
zend_class_entry *php_wxSpinButton_entry;
int le_wxSpinButton;

// <--- entries

zend_class_entry *php_wxApp_entry;
int le_wxApp;


PHP_FUNCTION(php_wxInitialize)
{
	wxInitAllImageHandlers();
	RETVAL_BOOL(wxInitialize());
}

PHP_FUNCTION(php_wxInitAllImageHandlers)
{
        wxInitAllImageHandlers();
	RETVAL_TRUE;
}

PHP_FUNCTION(php_wxExecute)
{
        char* _argStr0;
	int _argStr0_len;
        if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s", &_argStr0 , &_argStr0_len ) == SUCCESS)
        {
		long ret0;
	        ret0 = wxExecute(wxString(_argStr0, wxConvUTF8));
		RETURN_LONG((long)ret0)
	}
}

PHP_FUNCTION(php_wxEntry)
{
	int argc = 1;
	char *argv[2] = { "embed4", NULL };
	RETVAL_LONG(wxEntry(argc,argv));
}


// cast --->
PHP_FUNCTION(php_wxDynamicCast){
        zval **tmp;
        int rsrc_type;
        char _wxResource[] = "wxResource";
        int valid = 1;

        char* _argStr0;
        int _argStr0_len;
        void *_ptrObj0 = 0;
        zval *_argObj0 = 0;
        int id_to_find0;


        if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!s!",  &_argObj0 , &_argStr0 , &_argStr0_len ) == SUCCESS){

                if(_argObj0)
                {
                        if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
                        {
                                id_to_find0 = Z_RESVAL_P(*tmp);
                                _ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
                                //if (!_ptrObj0 || rsrc_type != le_wxTextCtrl)
                                //      valid = 0;
                        }
                }

                if(valid){
			if(0){
			}
                        else if(!strcmp(_argStr0,"wxFrame")){
                                object_init_ex(return_value,php_wxFrame_entry);
                                wxFrame* ret = wxDynamicCast(_ptrObj0,wxFrame_php);
                                long id_to_find = zend_list_insert(ret, le_wxFrame);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxEvent")){
                                object_init_ex(return_value,php_wxEvent_entry);
                                wxEvent* ret = wxDynamicCast(_ptrObj0,wxEvent_php);
                                long id_to_find = zend_list_insert(ret, le_wxEvent);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxWindow")){
                                object_init_ex(return_value,php_wxWindow_entry);
                                wxWindow* ret = wxDynamicCast(_ptrObj0,wxWindow_php);
                                long id_to_find = zend_list_insert(ret, le_wxWindow);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxToolBar")){
                                object_init_ex(return_value,php_wxToolBar_entry);
                                wxToolBar* ret = wxDynamicCast(_ptrObj0,wxToolBar_php);
                                long id_to_find = zend_list_insert(ret, le_wxToolBar);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxStatusBar")){
                                object_init_ex(return_value,php_wxStatusBar_entry);
                                wxStatusBar* ret = wxDynamicCast(_ptrObj0,wxStatusBar_php);
                                long id_to_find = zend_list_insert(ret, le_wxStatusBar);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxBoxSizer")){
                                object_init_ex(return_value,php_wxBoxSizer_entry);
                                wxBoxSizer* ret = wxDynamicCast(_ptrObj0,wxBoxSizer_php);
                                long id_to_find = zend_list_insert(ret, le_wxBoxSizer);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxSizer")){
                                object_init_ex(return_value,php_wxSizer_entry);
                                wxSizer* ret = wxDynamicCast(_ptrObj0,wxSizer_php);
                                long id_to_find = zend_list_insert(ret, le_wxSizer);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxColour")){
                                object_init_ex(return_value,php_wxColour_entry);
                                wxColour* ret = wxDynamicCast(_ptrObj0,wxColour_php);
                                long id_to_find = zend_list_insert(ret, le_wxColour);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxCursor")){
                                object_init_ex(return_value,php_wxCursor_entry);
                                wxCursor* ret = wxDynamicCast(_ptrObj0,wxCursor_php);
                                long id_to_find = zend_list_insert(ret, le_wxCursor);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxFont")){
                                object_init_ex(return_value,php_wxFont_entry);
                                wxFont* ret = wxDynamicCast(_ptrObj0,wxFont_php);
                                long id_to_find = zend_list_insert(ret, le_wxFont);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxWindowBase")){
                                object_init_ex(return_value,php_wxWindowBase_entry);
                                wxWindowBase* ret = wxDynamicCast(_ptrObj0,wxWindowBase_php);
                                long id_to_find = zend_list_insert(ret, le_wxWindowBase);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxSizerItem")){
                                object_init_ex(return_value,php_wxSizerItem_entry);
                                wxSizerItem* ret = wxDynamicCast(_ptrObj0,wxSizerItem_php);
                                long id_to_find = zend_list_insert(ret, le_wxSizerItem);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxObject")){
                                object_init_ex(return_value,php_wxObject_entry);
                                wxObject* ret = wxDynamicCast(_ptrObj0,wxObject_php);
                                long id_to_find = zend_list_insert(ret, le_wxObject);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxImage")){
                                object_init_ex(return_value,php_wxImage_entry);
                                wxImage* ret = wxDynamicCast(_ptrObj0,wxImage_php);
                                long id_to_find = zend_list_insert(ret, le_wxImage);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxMenuItem")){
                                object_init_ex(return_value,php_wxMenuItem_entry);
                                wxMenuItem* ret = wxDynamicCast(_ptrObj0,wxMenuItem_php);
                                long id_to_find = zend_list_insert(ret, le_wxMenuItem);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxMenuItemBase")){
                                object_init_ex(return_value,php_wxMenuItemBase_entry);
                                wxMenuItemBase* ret = wxDynamicCast(_ptrObj0,wxMenuItemBase_php);
                                long id_to_find = zend_list_insert(ret, le_wxMenuItemBase);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxMenu")){
                                object_init_ex(return_value,php_wxMenu_entry);
                                wxMenu* ret = wxDynamicCast(_ptrObj0,wxMenu_php);
                                long id_to_find = zend_list_insert(ret, le_wxMenu);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxBitmap")){
                                object_init_ex(return_value,php_wxBitmap_entry);
                                wxBitmap* ret = wxDynamicCast(_ptrObj0,wxBitmap_php);
                                long id_to_find = zend_list_insert(ret, le_wxBitmap);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxMenuBase")){
                                object_init_ex(return_value,php_wxMenuBase_entry);
                                wxMenuBase* ret = wxDynamicCast(_ptrObj0,wxMenuBase_php);
                                long id_to_find = zend_list_insert(ret, le_wxMenuBase);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxMenuBar")){
                                object_init_ex(return_value,php_wxMenuBar_entry);
                                wxMenuBar* ret = wxDynamicCast(_ptrObj0,wxMenuBar_php);
                                long id_to_find = zend_list_insert(ret, le_wxMenuBar);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxToolBarBase")){
                                object_init_ex(return_value,php_wxToolBarBase_entry);
                                wxToolBarBase* ret = wxDynamicCast(_ptrObj0,wxToolBarBase_php);
                                long id_to_find = zend_list_insert(ret, le_wxToolBarBase);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxToolBarToolBase")){
                                object_init_ex(return_value,php_wxToolBarToolBase_entry);
                                wxToolBarToolBase* ret = wxDynamicCast(_ptrObj0,wxToolBarToolBase_php);
                                long id_to_find = zend_list_insert(ret, le_wxToolBarToolBase);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxControl")){
                                object_init_ex(return_value,php_wxControl_entry);
                                wxControl* ret = wxDynamicCast(_ptrObj0,wxControl_php);
                                long id_to_find = zend_list_insert(ret, le_wxControl);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxCommandEvent")){
                                object_init_ex(return_value,php_wxCommandEvent_entry);
                                wxCommandEvent* ret = wxDynamicCast(_ptrObj0,wxCommandEvent_php);
                                long id_to_find = zend_list_insert(ret, le_wxCommandEvent);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxPanel")){
                                object_init_ex(return_value,php_wxPanel_entry);
                                wxPanel* ret = wxDynamicCast(_ptrObj0,wxPanel_php);
                                long id_to_find = zend_list_insert(ret, le_wxPanel);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxTopLevelWindowBase")){
                                object_init_ex(return_value,php_wxTopLevelWindowBase_entry);
                                wxTopLevelWindowBase* ret = wxDynamicCast(_ptrObj0,wxTopLevelWindowBase_php);
                                long id_to_find = zend_list_insert(ret, le_wxTopLevelWindowBase);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxSplitterWindow")){
                                object_init_ex(return_value,php_wxSplitterWindow_entry);
                                wxSplitterWindow* ret = wxDynamicCast(_ptrObj0,wxSplitterWindow_php);
                                long id_to_find = zend_list_insert(ret, le_wxSplitterWindow);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxTreeCtrl")){
                                object_init_ex(return_value,php_wxTreeCtrl_entry);
                                wxTreeCtrl* ret = wxDynamicCast(_ptrObj0,wxTreeCtrl_php);
                                long id_to_find = zend_list_insert(ret, le_wxTreeCtrl);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxValidator")){
                                object_init_ex(return_value,php_wxValidator_entry);
                                wxValidator* ret = wxDynamicCast(_ptrObj0,wxValidator_php);
                                long id_to_find = zend_list_insert(ret, le_wxValidator);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxCheckListBox")){
                                object_init_ex(return_value,php_wxCheckListBox_entry);
                                wxCheckListBox* ret = wxDynamicCast(_ptrObj0,wxCheckListBox_php);
                                long id_to_find = zend_list_insert(ret, le_wxCheckListBox);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxFrameBase")){
                                object_init_ex(return_value,php_wxFrameBase_entry);
                                wxFrameBase* ret = wxDynamicCast(_ptrObj0,wxFrameBase_php);
                                long id_to_find = zend_list_insert(ret, le_wxFrameBase);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxTreeEvent")){
                                object_init_ex(return_value,php_wxTreeEvent_entry);
                                wxTreeEvent* ret = wxDynamicCast(_ptrObj0,wxTreeEvent_php);
                                long id_to_find = zend_list_insert(ret, le_wxTreeEvent);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxCheckListBoxBase")){
                                object_init_ex(return_value,php_wxCheckListBoxBase_entry);
                                wxCheckListBoxBase* ret = wxDynamicCast(_ptrObj0,wxCheckListBoxBase_php);
                                long id_to_find = zend_list_insert(ret, le_wxCheckListBoxBase);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxListBoxBase")){
                                object_init_ex(return_value,php_wxListBoxBase_entry);
                                wxListBoxBase* ret = wxDynamicCast(_ptrObj0,wxListBoxBase_php);
                                long id_to_find = zend_list_insert(ret, le_wxListBoxBase);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxIcon")){
                                object_init_ex(return_value,php_wxIcon_entry);
                                wxIcon* ret = wxDynamicCast(_ptrObj0,wxIcon_php);
                                long id_to_find = zend_list_insert(ret, le_wxIcon);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxTextCtrl")){
                                object_init_ex(return_value,php_wxTextCtrl_entry);
                                wxTextCtrl* ret = wxDynamicCast(_ptrObj0,wxTextCtrl_php);
                                long id_to_find = zend_list_insert(ret, le_wxTextCtrl);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxNotebook")){
                                object_init_ex(return_value,php_wxNotebook_entry);
                                wxNotebook* ret = wxDynamicCast(_ptrObj0,wxNotebook_php);
                                long id_to_find = zend_list_insert(ret, le_wxNotebook);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxBookCtrlBase")){
                                object_init_ex(return_value,php_wxBookCtrlBase_entry);
                                wxBookCtrlBase* ret = wxDynamicCast(_ptrObj0,wxBookCtrlBase_php);
                                long id_to_find = zend_list_insert(ret, le_wxBookCtrlBase);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxFlexGridSizer")){
                                object_init_ex(return_value,php_wxFlexGridSizer_entry);
                                wxFlexGridSizer* ret = wxDynamicCast(_ptrObj0,wxFlexGridSizer_php);
                                long id_to_find = zend_list_insert(ret, le_wxFlexGridSizer);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxStaticText")){
                                object_init_ex(return_value,php_wxStaticText_entry);
                                wxStaticText* ret = wxDynamicCast(_ptrObj0,wxStaticText_php);
                                long id_to_find = zend_list_insert(ret, le_wxStaticText);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxButton")){
                                object_init_ex(return_value,php_wxButton_entry);
                                wxButton* ret = wxDynamicCast(_ptrObj0,wxButton_php);
                                long id_to_find = zend_list_insert(ret, le_wxButton);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxStaticBox")){
                                object_init_ex(return_value,php_wxStaticBox_entry);
                                wxStaticBox* ret = wxDynamicCast(_ptrObj0,wxStaticBox_php);
                                long id_to_find = zend_list_insert(ret, le_wxStaticBox);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxStaticBoxSizer")){
                                object_init_ex(return_value,php_wxStaticBoxSizer_entry);
                                wxStaticBoxSizer* ret = wxDynamicCast(_ptrObj0,wxStaticBoxSizer_php);
                                long id_to_find = zend_list_insert(ret, le_wxStaticBoxSizer);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxListBox")){
                                object_init_ex(return_value,php_wxListBox_entry);
                                wxListBox* ret = wxDynamicCast(_ptrObj0,wxListBox_php);
                                long id_to_find = zend_list_insert(ret, le_wxListBox);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxFileDialog")){
                                object_init_ex(return_value,php_wxFileDialog_entry);
                                wxFileDialog* ret = wxDynamicCast(_ptrObj0,wxFileDialog_php);
                                long id_to_find = zend_list_insert(ret, le_wxFileDialog);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxDialog")){
                                object_init_ex(return_value,php_wxDialog_entry);
                                wxDialog* ret = wxDynamicCast(_ptrObj0,wxDialog_php);
                                long id_to_find = zend_list_insert(ret, le_wxDialog);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxMessageDialog")){
                                object_init_ex(return_value,php_wxMessageDialog_entry);
                                wxMessageDialog* ret = wxDynamicCast(_ptrObj0,wxMessageDialog_php);
                                long id_to_find = zend_list_insert(ret, le_wxMessageDialog);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxStatusBarBase")){
                                object_init_ex(return_value,php_wxStatusBarBase_entry);
                                wxStatusBarBase* ret = wxDynamicCast(_ptrObj0,wxStatusBarBase_php);
                                long id_to_find = zend_list_insert(ret, le_wxStatusBarBase);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxListCtrl")){
                                object_init_ex(return_value,php_wxListCtrl_entry);
                                wxListCtrl* ret = wxDynamicCast(_ptrObj0,wxListCtrl_php);
                                long id_to_find = zend_list_insert(ret, le_wxListCtrl);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxStaticBitmap")){
                                object_init_ex(return_value,php_wxStaticBitmap_entry);
                                wxStaticBitmap* ret = wxDynamicCast(_ptrObj0,wxStaticBitmap_php);
                                long id_to_find = zend_list_insert(ret, le_wxStaticBitmap);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxGauge")){
                                object_init_ex(return_value,php_wxGauge_entry);
                                wxGauge* ret = wxDynamicCast(_ptrObj0,wxGauge_php);
                                long id_to_find = zend_list_insert(ret, le_wxGauge);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxListEvent")){
                                object_init_ex(return_value,php_wxListEvent_entry);
                                wxListEvent* ret = wxDynamicCast(_ptrObj0,wxListEvent_php);
                                long id_to_find = zend_list_insert(ret, le_wxListEvent);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxComboBox")){
                                object_init_ex(return_value,php_wxComboBox_entry);
                                wxComboBox* ret = wxDynamicCast(_ptrObj0,wxComboBox_php);
                                long id_to_find = zend_list_insert(ret, le_wxComboBox);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxPrintout")){
                                object_init_ex(return_value,php_wxPrintout_entry);
                                wxPrintout* ret = wxDynamicCast(_ptrObj0,wxPrintout_php);
                                long id_to_find = zend_list_insert(ret, le_wxPrintout);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxDC")){
                                object_init_ex(return_value,php_wxDC_entry);
                                wxDC* ret = wxDynamicCast(_ptrObj0,wxDC_php);
                                long id_to_find = zend_list_insert(ret, le_wxDC);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxDCBase")){
                                object_init_ex(return_value,php_wxDCBase_entry);
                                wxDCBase* ret = wxDynamicCast(_ptrObj0,wxDCBase_php);
                                long id_to_find = zend_list_insert(ret, le_wxDCBase);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxPrintDialogData")){
                                object_init_ex(return_value,php_wxPrintDialogData_entry);
                                wxPrintDialogData* ret = wxDynamicCast(_ptrObj0,wxPrintDialogData_php);
                                long id_to_find = zend_list_insert(ret, le_wxPrintDialogData);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxPen")){
                                object_init_ex(return_value,php_wxPen_entry);
                                wxPen* ret = wxDynamicCast(_ptrObj0,wxPen_php);
                                long id_to_find = zend_list_insert(ret, le_wxPen);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxBrush")){
                                object_init_ex(return_value,php_wxBrush_entry);
                                wxBrush* ret = wxDynamicCast(_ptrObj0,wxBrush_php);
                                long id_to_find = zend_list_insert(ret, le_wxBrush);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxSplashScreen")){
                                object_init_ex(return_value,php_wxSplashScreen_entry);
                                wxSplashScreen* ret = wxDynamicCast(_ptrObj0,wxSplashScreen_php);
                                long id_to_find = zend_list_insert(ret, le_wxSplashScreen);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxCalendarCtrl")){
                                object_init_ex(return_value,php_wxCalendarCtrl_entry);
                                wxCalendarCtrl* ret = wxDynamicCast(_ptrObj0,wxCalendarCtrl_php);
                                long id_to_find = zend_list_insert(ret, le_wxCalendarCtrl);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxCalendarEvent")){
                                object_init_ex(return_value,php_wxCalendarEvent_entry);
                                wxCalendarEvent* ret = wxDynamicCast(_ptrObj0,wxCalendarEvent_php);
                                long id_to_find = zend_list_insert(ret, le_wxCalendarEvent);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxDateEvent")){
                                object_init_ex(return_value,php_wxDateEvent_entry);
                                wxDateEvent* ret = wxDynamicCast(_ptrObj0,wxDateEvent_php);
                                long id_to_find = zend_list_insert(ret, le_wxDateEvent);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxTimer")){
                                object_init_ex(return_value,php_wxTimer_entry);
                                wxTimer* ret = wxDynamicCast(_ptrObj0,wxTimer_php);
                                long id_to_find = zend_list_insert(ret, le_wxTimer);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxEvtHandler")){
                                object_init_ex(return_value,php_wxEvtHandler_entry);
                                wxEvtHandler* ret = wxDynamicCast(_ptrObj0,wxEvtHandler_php);
                                long id_to_find = zend_list_insert(ret, le_wxEvtHandler);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxTimerEvent")){
                                object_init_ex(return_value,php_wxTimerEvent_entry);
                                wxTimerEvent* ret = wxDynamicCast(_ptrObj0,wxTimerEvent_php);
                                long id_to_find = zend_list_insert(ret, le_wxTimerEvent);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxIPV4address")){
                                object_init_ex(return_value,php_wxIPV4address_entry);
                                wxIPV4address* ret = wxDynamicCast(_ptrObj0,wxIPV4address_php);
                                long id_to_find = zend_list_insert(ret, le_wxIPV4address);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxSockAddress")){
                                object_init_ex(return_value,php_wxSockAddress_entry);
                                wxSockAddress* ret = wxDynamicCast(_ptrObj0,wxSockAddress_php);
                                long id_to_find = zend_list_insert(ret, le_wxSockAddress);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxSocketClient")){
                                object_init_ex(return_value,php_wxSocketClient_entry);
                                wxSocketClient* ret = wxDynamicCast(_ptrObj0,wxSocketClient_php);
                                long id_to_find = zend_list_insert(ret, le_wxSocketClient);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxSocketBase")){
                                object_init_ex(return_value,php_wxSocketBase_entry);
                                wxSocketBase* ret = wxDynamicCast(_ptrObj0,wxSocketBase_php);
                                long id_to_find = zend_list_insert(ret, le_wxSocketBase);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxCheckBox")){
                                object_init_ex(return_value,php_wxCheckBox_entry);
                                wxCheckBox* ret = wxDynamicCast(_ptrObj0,wxCheckBox_php);
                                long id_to_find = zend_list_insert(ret, le_wxCheckBox);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxDirDialog")){
                                object_init_ex(return_value,php_wxDirDialog_entry);
                                wxDirDialog* ret = wxDynamicCast(_ptrObj0,wxDirDialog_php);
                                long id_to_find = zend_list_insert(ret, le_wxDirDialog);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxBitmapButton")){
                                object_init_ex(return_value,php_wxBitmapButton_entry);
                                wxBitmapButton* ret = wxDynamicCast(_ptrObj0,wxBitmapButton_php);
                                long id_to_find = zend_list_insert(ret, le_wxBitmapButton);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxToggleButton")){
                                object_init_ex(return_value,php_wxToggleButton_entry);
                                wxToggleButton* ret = wxDynamicCast(_ptrObj0,wxToggleButton_php);
                                long id_to_find = zend_list_insert(ret, le_wxToggleButton);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxChoice")){
                                object_init_ex(return_value,php_wxChoice_entry);
                                wxChoice* ret = wxDynamicCast(_ptrObj0,wxChoice_php);
                                long id_to_find = zend_list_insert(ret, le_wxChoice);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxImageList")){
                                object_init_ex(return_value,php_wxImageList_entry);
                                wxImageList* ret = wxDynamicCast(_ptrObj0,wxImageList_php);
                                long id_to_find = zend_list_insert(ret, le_wxImageList);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxXmlResource")){
                                object_init_ex(return_value,php_wxXmlResource_entry);
                                wxXmlResource* ret = wxDynamicCast(_ptrObj0,wxXmlResource_php);
                                long id_to_find = zend_list_insert(ret, le_wxXmlResource);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxTreeCtrlBase")){
                                object_init_ex(return_value,php_wxTreeCtrlBase_entry);
                                wxTreeCtrlBase* ret = wxDynamicCast(_ptrObj0,wxTreeCtrlBase_php);
                                long id_to_find = zend_list_insert(ret, le_wxTreeCtrlBase);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxRadioBox")){
                                object_init_ex(return_value,php_wxRadioBox_entry);
                                wxRadioBox* ret = wxDynamicCast(_ptrObj0,wxRadioBox_php);
                                long id_to_find = zend_list_insert(ret, le_wxRadioBox);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxRadioButton")){
                                object_init_ex(return_value,php_wxRadioButton_entry);
                                wxRadioButton* ret = wxDynamicCast(_ptrObj0,wxRadioButton_php);
                                long id_to_find = zend_list_insert(ret, le_wxRadioButton);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxListItem")){
                                object_init_ex(return_value,php_wxListItem_entry);
                                wxListItem* ret = wxDynamicCast(_ptrObj0,wxListItem_php);
                                long id_to_find = zend_list_insert(ret, le_wxListItem);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxHtmlHelpController")){
                                object_init_ex(return_value,php_wxHtmlHelpController_entry);
                                wxHtmlHelpController* ret = wxDynamicCast(_ptrObj0,wxHtmlHelpController_php);
                                long id_to_find = zend_list_insert(ret, le_wxHtmlHelpController);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxTaskBarIcon")){
                                object_init_ex(return_value,php_wxTaskBarIcon_entry);
                                wxTaskBarIcon* ret = wxDynamicCast(_ptrObj0,wxTaskBarIcon_php);
                                long id_to_find = zend_list_insert(ret, le_wxTaskBarIcon);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxScrolledWindow")){
                                object_init_ex(return_value,php_wxScrolledWindow_entry);
                                wxScrolledWindow* ret = wxDynamicCast(_ptrObj0,wxScrolledWindow_php);
                                long id_to_find = zend_list_insert(ret, le_wxScrolledWindow);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxIdleEvent")){
                                object_init_ex(return_value,php_wxIdleEvent_entry);
                                wxIdleEvent* ret = wxDynamicCast(_ptrObj0,wxIdleEvent_php);
                                long id_to_find = zend_list_insert(ret, le_wxIdleEvent);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxSpinEvent")){
                                object_init_ex(return_value,php_wxSpinEvent_entry);
                                wxSpinEvent* ret = wxDynamicCast(_ptrObj0,wxSpinEvent_php);
                                long id_to_find = zend_list_insert(ret, le_wxSpinEvent);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxScrollEvent")){
                                object_init_ex(return_value,php_wxScrollEvent_entry);
                                wxScrollEvent* ret = wxDynamicCast(_ptrObj0,wxScrollEvent_php);
                                long id_to_find = zend_list_insert(ret, le_wxScrollEvent);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                        else if(!strcmp(_argStr0,"wxSpinButton")){
                                object_init_ex(return_value,php_wxSpinButton_entry);
                                wxSpinButton* ret = wxDynamicCast(_ptrObj0,wxSpinButton_php);
                                long id_to_find = zend_list_insert(ret, le_wxSpinButton);
                                add_property_resource(return_value, _wxResource, id_to_find);
                                return;
                        }
                }

        }

}

// <--- cast

static function_entry php_wxWidgets_functions[] = {
	PHP_FALIAS(wxInitAllImageHandlers, php_wxInitAllImageHandlers, NULL)
	PHP_FALIAS(wxExecute, php_wxExecute, NULL)
	PHP_FALIAS(wxInitialize, php_wxInitialize, NULL)
	PHP_FALIAS(wxEntry, php_wxEntry, NULL)
	PHP_FALIAS(wxDynamicCast, php_wxDynamicCast, NULL)
	{ NULL, NULL, NULL }
};


PHP_MINIT_FUNCTION(php_wxWidgets)
{
    zend_class_entry ce; /* Temporary Variable */
    zend_class_entry cf; /* Temporary Variable */

	INIT_CLASS_ENTRY(ce, PHP_wxApp_NAME , php_wxApp_functions);
	php_wxApp_entry = zend_register_internal_class(&ce TSRMLS_CC);
	le_wxApp = zend_register_list_destructors_ex(NULL,NULL, le_wxApp_name ,module_number);	
	
	
// classes --->
	INIT_CLASS_ENTRY(cf, PHP_wxFrame_NAME , php_wxFrame_functions);
	php_wxFrame_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxFrame = zend_register_list_destructors_ex(php_wxFrame_destruction_handler,NULL, le_wxFrame_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxEvent_NAME , php_wxEvent_functions);
	php_wxEvent_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxEvent = zend_register_list_destructors_ex(php_wxEvent_destruction_handler,NULL, le_wxEvent_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxWindow_NAME , php_wxWindow_functions);
	php_wxWindow_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxWindow = zend_register_list_destructors_ex(php_wxWindow_destruction_handler,NULL, le_wxWindow_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxPoint_NAME , php_wxPoint_functions);
	php_wxPoint_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxPoint = zend_register_list_destructors_ex(php_wxPoint_destruction_handler,NULL, le_wxPoint_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxSize_NAME , php_wxSize_functions);
	php_wxSize_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxSize = zend_register_list_destructors_ex(php_wxSize_destruction_handler,NULL, le_wxSize_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxToolBar_NAME , php_wxToolBar_functions);
	php_wxToolBar_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxToolBar = zend_register_list_destructors_ex(php_wxToolBar_destruction_handler,NULL, le_wxToolBar_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxStatusBar_NAME , php_wxStatusBar_functions);
	php_wxStatusBar_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxStatusBar = zend_register_list_destructors_ex(php_wxStatusBar_destruction_handler,NULL, le_wxStatusBar_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxBoxSizer_NAME , php_wxBoxSizer_functions);
	php_wxBoxSizer_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxBoxSizer = zend_register_list_destructors_ex(php_wxBoxSizer_destruction_handler,NULL, le_wxBoxSizer_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxSizer_NAME , php_wxSizer_functions);
	php_wxSizer_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxSizer = zend_register_list_destructors_ex(php_wxSizer_destruction_handler,NULL, le_wxSizer_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxColour_NAME , php_wxColour_functions);
	php_wxColour_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxColour = zend_register_list_destructors_ex(php_wxColour_destruction_handler,NULL, le_wxColour_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxCursor_NAME , php_wxCursor_functions);
	php_wxCursor_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxCursor = zend_register_list_destructors_ex(php_wxCursor_destruction_handler,NULL, le_wxCursor_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxFont_NAME , php_wxFont_functions);
	php_wxFont_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxFont = zend_register_list_destructors_ex(php_wxFont_destruction_handler,NULL, le_wxFont_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxWindowBase_NAME , php_wxWindowBase_functions);
	php_wxWindowBase_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxWindowBase = zend_register_list_destructors_ex(php_wxWindowBase_destruction_handler,NULL, le_wxWindowBase_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxSizerFlags_NAME , php_wxSizerFlags_functions);
	php_wxSizerFlags_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxSizerFlags = zend_register_list_destructors_ex(php_wxSizerFlags_destruction_handler,NULL, le_wxSizerFlags_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxSizerItem_NAME , php_wxSizerItem_functions);
	php_wxSizerItem_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxSizerItem = zend_register_list_destructors_ex(php_wxSizerItem_destruction_handler,NULL, le_wxSizerItem_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxClassInfo_NAME , php_wxClassInfo_functions);
	php_wxClassInfo_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxClassInfo = zend_register_list_destructors_ex(php_wxClassInfo_destruction_handler,NULL, le_wxClassInfo_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxObject_NAME , php_wxObject_functions);
	php_wxObject_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxObject = zend_register_list_destructors_ex(php_wxObject_destruction_handler,NULL, le_wxObject_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxImage_NAME , php_wxImage_functions);
	php_wxImage_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxImage = zend_register_list_destructors_ex(php_wxImage_destruction_handler,NULL, le_wxImage_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxMenuItem_NAME , php_wxMenuItem_functions);
	php_wxMenuItem_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxMenuItem = zend_register_list_destructors_ex(php_wxMenuItem_destruction_handler,NULL, le_wxMenuItem_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxMenuItemBase_NAME , php_wxMenuItemBase_functions);
	php_wxMenuItemBase_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxMenuItemBase = zend_register_list_destructors_ex(php_wxMenuItemBase_destruction_handler,NULL, le_wxMenuItemBase_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxMenu_NAME , php_wxMenu_functions);
	php_wxMenu_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxMenu = zend_register_list_destructors_ex(php_wxMenu_destruction_handler,NULL, le_wxMenu_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxBitmap_NAME , php_wxBitmap_functions);
	php_wxBitmap_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxBitmap = zend_register_list_destructors_ex(php_wxBitmap_destruction_handler,NULL, le_wxBitmap_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxMenuBase_NAME , php_wxMenuBase_functions);
	php_wxMenuBase_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxMenuBase = zend_register_list_destructors_ex(php_wxMenuBase_destruction_handler,NULL, le_wxMenuBase_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxMenuBar_NAME , php_wxMenuBar_functions);
	php_wxMenuBar_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxMenuBar = zend_register_list_destructors_ex(php_wxMenuBar_destruction_handler,NULL, le_wxMenuBar_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxToolBarBase_NAME , php_wxToolBarBase_functions);
	php_wxToolBarBase_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxToolBarBase = zend_register_list_destructors_ex(php_wxToolBarBase_destruction_handler,NULL, le_wxToolBarBase_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxToolBarToolBase_NAME , php_wxToolBarToolBase_functions);
	php_wxToolBarToolBase_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxToolBarToolBase = zend_register_list_destructors_ex(php_wxToolBarToolBase_destruction_handler,NULL, le_wxToolBarToolBase_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxControl_NAME , php_wxControl_functions);
	php_wxControl_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxControl = zend_register_list_destructors_ex(php_wxControl_destruction_handler,NULL, le_wxControl_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxCommandEvent_NAME , php_wxCommandEvent_functions);
	php_wxCommandEvent_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxCommandEvent = zend_register_list_destructors_ex(php_wxCommandEvent_destruction_handler,NULL, le_wxCommandEvent_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxPanel_NAME , php_wxPanel_functions);
	php_wxPanel_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxPanel = zend_register_list_destructors_ex(php_wxPanel_destruction_handler,NULL, le_wxPanel_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxTopLevelWindowBase_NAME , php_wxTopLevelWindowBase_functions);
	php_wxTopLevelWindowBase_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxTopLevelWindowBase = zend_register_list_destructors_ex(php_wxTopLevelWindowBase_destruction_handler,NULL, le_wxTopLevelWindowBase_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxSplitterWindow_NAME , php_wxSplitterWindow_functions);
	php_wxSplitterWindow_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxSplitterWindow = zend_register_list_destructors_ex(php_wxSplitterWindow_destruction_handler,NULL, le_wxSplitterWindow_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxTreeCtrl_NAME , php_wxTreeCtrl_functions);
	php_wxTreeCtrl_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxTreeCtrl = zend_register_list_destructors_ex(php_wxTreeCtrl_destruction_handler,NULL, le_wxTreeCtrl_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxValidator_NAME , php_wxValidator_functions);
	php_wxValidator_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxValidator = zend_register_list_destructors_ex(php_wxValidator_destruction_handler,NULL, le_wxValidator_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxCheckListBox_NAME , php_wxCheckListBox_functions);
	php_wxCheckListBox_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxCheckListBox = zend_register_list_destructors_ex(php_wxCheckListBox_destruction_handler,NULL, le_wxCheckListBox_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxTreeItemData_NAME , php_wxTreeItemData_functions);
	php_wxTreeItemData_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxTreeItemData = zend_register_list_destructors_ex(php_wxTreeItemData_destruction_handler,NULL, le_wxTreeItemData_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxTreeItemId_NAME , php_wxTreeItemId_functions);
	php_wxTreeItemId_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxTreeItemId = zend_register_list_destructors_ex(php_wxTreeItemId_destruction_handler,NULL, le_wxTreeItemId_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxFrameBase_NAME , php_wxFrameBase_functions);
	php_wxFrameBase_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxFrameBase = zend_register_list_destructors_ex(php_wxFrameBase_destruction_handler,NULL, le_wxFrameBase_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxTreeEvent_NAME , php_wxTreeEvent_functions);
	php_wxTreeEvent_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxTreeEvent = zend_register_list_destructors_ex(php_wxTreeEvent_destruction_handler,NULL, le_wxTreeEvent_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxArrayString_NAME , php_wxArrayString_functions);
	php_wxArrayString_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxArrayString = zend_register_list_destructors_ex(php_wxArrayString_destruction_handler,NULL, le_wxArrayString_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxCheckListBoxBase_NAME , php_wxCheckListBoxBase_functions);
	php_wxCheckListBoxBase_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxCheckListBoxBase = zend_register_list_destructors_ex(php_wxCheckListBoxBase_destruction_handler,NULL, le_wxCheckListBoxBase_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxListBoxBase_NAME , php_wxListBoxBase_functions);
	php_wxListBoxBase_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxListBoxBase = zend_register_list_destructors_ex(php_wxListBoxBase_destruction_handler,NULL, le_wxListBoxBase_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxIcon_NAME , php_wxIcon_functions);
	php_wxIcon_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxIcon = zend_register_list_destructors_ex(php_wxIcon_destruction_handler,NULL, le_wxIcon_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxTextCtrl_NAME , php_wxTextCtrl_functions);
	php_wxTextCtrl_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxTextCtrl = zend_register_list_destructors_ex(php_wxTextCtrl_destruction_handler,NULL, le_wxTextCtrl_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxNotebook_NAME , php_wxNotebook_functions);
	php_wxNotebook_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxNotebook = zend_register_list_destructors_ex(php_wxNotebook_destruction_handler,NULL, le_wxNotebook_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxBookCtrlBase_NAME , php_wxBookCtrlBase_functions);
	php_wxBookCtrlBase_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxBookCtrlBase = zend_register_list_destructors_ex(php_wxBookCtrlBase_destruction_handler,NULL, le_wxBookCtrlBase_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxFlexGridSizer_NAME , php_wxFlexGridSizer_functions);
	php_wxFlexGridSizer_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxFlexGridSizer = zend_register_list_destructors_ex(php_wxFlexGridSizer_destruction_handler,NULL, le_wxFlexGridSizer_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxStaticText_NAME , php_wxStaticText_functions);
	php_wxStaticText_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxStaticText = zend_register_list_destructors_ex(php_wxStaticText_destruction_handler,NULL, le_wxStaticText_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxButton_NAME , php_wxButton_functions);
	php_wxButton_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxButton = zend_register_list_destructors_ex(php_wxButton_destruction_handler,NULL, le_wxButton_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxStaticBox_NAME , php_wxStaticBox_functions);
	php_wxStaticBox_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxStaticBox = zend_register_list_destructors_ex(php_wxStaticBox_destruction_handler,NULL, le_wxStaticBox_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxStaticBoxSizer_NAME , php_wxStaticBoxSizer_functions);
	php_wxStaticBoxSizer_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxStaticBoxSizer = zend_register_list_destructors_ex(php_wxStaticBoxSizer_destruction_handler,NULL, le_wxStaticBoxSizer_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxListBox_NAME , php_wxListBox_functions);
	php_wxListBox_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxListBox = zend_register_list_destructors_ex(php_wxListBox_destruction_handler,NULL, le_wxListBox_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxFileDialog_NAME , php_wxFileDialog_functions);
	php_wxFileDialog_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxFileDialog = zend_register_list_destructors_ex(php_wxFileDialog_destruction_handler,NULL, le_wxFileDialog_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxDialog_NAME , php_wxDialog_functions);
	php_wxDialog_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxDialog = zend_register_list_destructors_ex(php_wxDialog_destruction_handler,NULL, le_wxDialog_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxMessageDialog_NAME , php_wxMessageDialog_functions);
	php_wxMessageDialog_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxMessageDialog = zend_register_list_destructors_ex(php_wxMessageDialog_destruction_handler,NULL, le_wxMessageDialog_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxStatusBarBase_NAME , php_wxStatusBarBase_functions);
	php_wxStatusBarBase_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxStatusBarBase = zend_register_list_destructors_ex(php_wxStatusBarBase_destruction_handler,NULL, le_wxStatusBarBase_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxListCtrl_NAME , php_wxListCtrl_functions);
	php_wxListCtrl_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxListCtrl = zend_register_list_destructors_ex(php_wxListCtrl_destruction_handler,NULL, le_wxListCtrl_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxStaticBitmap_NAME , php_wxStaticBitmap_functions);
	php_wxStaticBitmap_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxStaticBitmap = zend_register_list_destructors_ex(php_wxStaticBitmap_destruction_handler,NULL, le_wxStaticBitmap_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxGauge_NAME , php_wxGauge_functions);
	php_wxGauge_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxGauge = zend_register_list_destructors_ex(php_wxGauge_destruction_handler,NULL, le_wxGauge_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxListEvent_NAME , php_wxListEvent_functions);
	php_wxListEvent_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxListEvent = zend_register_list_destructors_ex(php_wxListEvent_destruction_handler,NULL, le_wxListEvent_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxComboBox_NAME , php_wxComboBox_functions);
	php_wxComboBox_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxComboBox = zend_register_list_destructors_ex(php_wxComboBox_destruction_handler,NULL, le_wxComboBox_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxPrintout_NAME , php_wxPrintout_functions);
	php_wxPrintout_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxPrintout = zend_register_list_destructors_ex(php_wxPrintout_destruction_handler,NULL, le_wxPrintout_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxDC_NAME , php_wxDC_functions);
	php_wxDC_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxDC = zend_register_list_destructors_ex(php_wxDC_destruction_handler,NULL, le_wxDC_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxDCBase_NAME , php_wxDCBase_functions);
	php_wxDCBase_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxDCBase = zend_register_list_destructors_ex(php_wxDCBase_destruction_handler,NULL, le_wxDCBase_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxPrintDialogData_NAME , php_wxPrintDialogData_functions);
	php_wxPrintDialogData_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxPrintDialogData = zend_register_list_destructors_ex(php_wxPrintDialogData_destruction_handler,NULL, le_wxPrintDialogData_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxRect_NAME , php_wxRect_functions);
	php_wxRect_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxRect = zend_register_list_destructors_ex(php_wxRect_destruction_handler,NULL, le_wxRect_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxPen_NAME , php_wxPen_functions);
	php_wxPen_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxPen = zend_register_list_destructors_ex(php_wxPen_destruction_handler,NULL, le_wxPen_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxBrush_NAME , php_wxBrush_functions);
	php_wxBrush_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxBrush = zend_register_list_destructors_ex(php_wxBrush_destruction_handler,NULL, le_wxBrush_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxSplashScreen_NAME , php_wxSplashScreen_functions);
	php_wxSplashScreen_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxSplashScreen = zend_register_list_destructors_ex(php_wxSplashScreen_destruction_handler,NULL, le_wxSplashScreen_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxCalendarCtrl_NAME , php_wxCalendarCtrl_functions);
	php_wxCalendarCtrl_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxCalendarCtrl = zend_register_list_destructors_ex(php_wxCalendarCtrl_destruction_handler,NULL, le_wxCalendarCtrl_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxCalendarEvent_NAME , php_wxCalendarEvent_functions);
	php_wxCalendarEvent_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxCalendarEvent = zend_register_list_destructors_ex(php_wxCalendarEvent_destruction_handler,NULL, le_wxCalendarEvent_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxDateEvent_NAME , php_wxDateEvent_functions);
	php_wxDateEvent_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxDateEvent = zend_register_list_destructors_ex(php_wxDateEvent_destruction_handler,NULL, le_wxDateEvent_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxDateTime_NAME , php_wxDateTime_functions);
	php_wxDateTime_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxDateTime = zend_register_list_destructors_ex(php_wxDateTime_destruction_handler,NULL, le_wxDateTime_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxCalendarDateAttr_NAME , php_wxCalendarDateAttr_functions);
	php_wxCalendarDateAttr_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxCalendarDateAttr = zend_register_list_destructors_ex(php_wxCalendarDateAttr_destruction_handler,NULL, le_wxCalendarDateAttr_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxTimer_NAME , php_wxTimer_functions);
	php_wxTimer_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxTimer = zend_register_list_destructors_ex(php_wxTimer_destruction_handler,NULL, le_wxTimer_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxEvtHandler_NAME , php_wxEvtHandler_functions);
	php_wxEvtHandler_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxEvtHandler = zend_register_list_destructors_ex(php_wxEvtHandler_destruction_handler,NULL, le_wxEvtHandler_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxTimerEvent_NAME , php_wxTimerEvent_functions);
	php_wxTimerEvent_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxTimerEvent = zend_register_list_destructors_ex(php_wxTimerEvent_destruction_handler,NULL, le_wxTimerEvent_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxIPV4address_NAME , php_wxIPV4address_functions);
	php_wxIPV4address_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxIPV4address = zend_register_list_destructors_ex(php_wxIPV4address_destruction_handler,NULL, le_wxIPV4address_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxSockAddress_NAME , php_wxSockAddress_functions);
	php_wxSockAddress_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxSockAddress = zend_register_list_destructors_ex(php_wxSockAddress_destruction_handler,NULL, le_wxSockAddress_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxSocketClient_NAME , php_wxSocketClient_functions);
	php_wxSocketClient_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxSocketClient = zend_register_list_destructors_ex(php_wxSocketClient_destruction_handler,NULL, le_wxSocketClient_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxSocketBase_NAME , php_wxSocketBase_functions);
	php_wxSocketBase_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxSocketBase = zend_register_list_destructors_ex(php_wxSocketBase_destruction_handler,NULL, le_wxSocketBase_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxCheckBox_NAME , php_wxCheckBox_functions);
	php_wxCheckBox_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxCheckBox = zend_register_list_destructors_ex(php_wxCheckBox_destruction_handler,NULL, le_wxCheckBox_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxDirDialog_NAME , php_wxDirDialog_functions);
	php_wxDirDialog_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxDirDialog = zend_register_list_destructors_ex(php_wxDirDialog_destruction_handler,NULL, le_wxDirDialog_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxBitmapButton_NAME , php_wxBitmapButton_functions);
	php_wxBitmapButton_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxBitmapButton = zend_register_list_destructors_ex(php_wxBitmapButton_destruction_handler,NULL, le_wxBitmapButton_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxToggleButton_NAME , php_wxToggleButton_functions);
	php_wxToggleButton_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxToggleButton = zend_register_list_destructors_ex(php_wxToggleButton_destruction_handler,NULL, le_wxToggleButton_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxChoice_NAME , php_wxChoice_functions);
	php_wxChoice_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxChoice = zend_register_list_destructors_ex(php_wxChoice_destruction_handler,NULL, le_wxChoice_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxImageList_NAME , php_wxImageList_functions);
	php_wxImageList_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxImageList = zend_register_list_destructors_ex(php_wxImageList_destruction_handler,NULL, le_wxImageList_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxXmlResource_NAME , php_wxXmlResource_functions);
	php_wxXmlResource_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxXmlResource = zend_register_list_destructors_ex(php_wxXmlResource_destruction_handler,NULL, le_wxXmlResource_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxLocale_NAME , php_wxLocale_functions);
	php_wxLocale_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxLocale = zend_register_list_destructors_ex(php_wxLocale_destruction_handler,NULL, le_wxLocale_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxTreeCtrlBase_NAME , php_wxTreeCtrlBase_functions);
	php_wxTreeCtrlBase_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxTreeCtrlBase = zend_register_list_destructors_ex(php_wxTreeCtrlBase_destruction_handler,NULL, le_wxTreeCtrlBase_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxRadioBox_NAME , php_wxRadioBox_functions);
	php_wxRadioBox_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxRadioBox = zend_register_list_destructors_ex(php_wxRadioBox_destruction_handler,NULL, le_wxRadioBox_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxRadioButton_NAME , php_wxRadioButton_functions);
	php_wxRadioButton_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxRadioButton = zend_register_list_destructors_ex(php_wxRadioButton_destruction_handler,NULL, le_wxRadioButton_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxListItem_NAME , php_wxListItem_functions);
	php_wxListItem_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxListItem = zend_register_list_destructors_ex(php_wxListItem_destruction_handler,NULL, le_wxListItem_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxHtmlHelpController_NAME , php_wxHtmlHelpController_functions);
	php_wxHtmlHelpController_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxHtmlHelpController = zend_register_list_destructors_ex(php_wxHtmlHelpController_destruction_handler,NULL, le_wxHtmlHelpController_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxTaskBarIcon_NAME , php_wxTaskBarIcon_functions);
	php_wxTaskBarIcon_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxTaskBarIcon = zend_register_list_destructors_ex(php_wxTaskBarIcon_destruction_handler,NULL, le_wxTaskBarIcon_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxScrolledWindow_NAME , php_wxScrolledWindow_functions);
	php_wxScrolledWindow_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxScrolledWindow = zend_register_list_destructors_ex(php_wxScrolledWindow_destruction_handler,NULL, le_wxScrolledWindow_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxIdleEvent_NAME , php_wxIdleEvent_functions);
	php_wxIdleEvent_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxIdleEvent = zend_register_list_destructors_ex(php_wxIdleEvent_destruction_handler,NULL, le_wxIdleEvent_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxSpinEvent_NAME , php_wxSpinEvent_functions);
	php_wxSpinEvent_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxSpinEvent = zend_register_list_destructors_ex(php_wxSpinEvent_destruction_handler,NULL, le_wxSpinEvent_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxScrollEvent_NAME , php_wxScrollEvent_functions);
	php_wxScrollEvent_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxScrollEvent = zend_register_list_destructors_ex(php_wxScrollEvent_destruction_handler,NULL, le_wxScrollEvent_name ,module_number);

	INIT_CLASS_ENTRY(cf, PHP_wxSpinButton_NAME , php_wxSpinButton_functions);
	php_wxSpinButton_entry = zend_register_internal_class(&cf TSRMLS_CC);
	le_wxSpinButton = zend_register_list_destructors_ex(php_wxSpinButton_destruction_handler,NULL, le_wxSpinButton_name ,module_number);

	REGISTER_LONG_CONSTANT("wxBG_STYLE_SYSTEM",	wxBG_STYLE_SYSTEM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBG_STYLE_COLOUR",	wxBG_STYLE_COLOUR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBG_STYLE_CUSTOM",	wxBG_STYLE_CUSTOM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_NOERROR",	wxSOCKET_NOERROR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_INVOP",	wxSOCKET_INVOP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_IOERR",	wxSOCKET_IOERR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_INVADDR",	wxSOCKET_INVADDR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_INVSOCK",	wxSOCKET_INVSOCK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_NOHOST",	wxSOCKET_NOHOST	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_INVPORT",	wxSOCKET_INVPORT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_WOULDBLOCK",	wxSOCKET_WOULDBLOCK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_TIMEDOUT",	wxSOCKET_TIMEDOUT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_MEMERR",	wxSOCKET_MEMERR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_DUMMY",	wxSOCKET_DUMMY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxJOYSTICK1",	wxJOYSTICK1	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxJOYSTICK2",	wxJOYSTICK2	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOutRegion",	wxOutRegion	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPartRegion",	wxPartRegion	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxInRegion",	wxInRegion	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_CAN_DRAW_FRAME_DECORATIONS",	wxSYS_CAN_DRAW_FRAME_DECORATIONS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_CAN_ICONIZE_FRAME",	wxSYS_CAN_ICONIZE_FRAME	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_TABLET_PRESENT",	wxSYS_TABLET_PRESENT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCENTRE",	wxCENTRE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCENTER",	wxCENTER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_NONE",	wxPAPER_NONE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_LETTER",	wxPAPER_LETTER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_LEGAL",	wxPAPER_LEGAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_A4",	wxPAPER_A4	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_CSHEET",	wxPAPER_CSHEET	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_DSHEET",	wxPAPER_DSHEET	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_ESHEET",	wxPAPER_ESHEET	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_LETTERSMALL",	wxPAPER_LETTERSMALL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_TABLOID",	wxPAPER_TABLOID	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_LEDGER",	wxPAPER_LEDGER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_STATEMENT",	wxPAPER_STATEMENT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_EXECUTIVE",	wxPAPER_EXECUTIVE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_A3",	wxPAPER_A3	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_A4SMALL",	wxPAPER_A4SMALL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_A5",	wxPAPER_A5	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_B4",	wxPAPER_B4	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_B5",	wxPAPER_B5	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_FOLIO",	wxPAPER_FOLIO	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_QUARTO",	wxPAPER_QUARTO	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_10X14",	wxPAPER_10X14	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_11X17",	wxPAPER_11X17	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_NOTE",	wxPAPER_NOTE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_ENV_9",	wxPAPER_ENV_9	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_ENV_10",	wxPAPER_ENV_10	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_ENV_11",	wxPAPER_ENV_11	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_ENV_12",	wxPAPER_ENV_12	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_ENV_14",	wxPAPER_ENV_14	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_ENV_DL",	wxPAPER_ENV_DL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_ENV_C5",	wxPAPER_ENV_C5	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_ENV_C3",	wxPAPER_ENV_C3	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_ENV_C4",	wxPAPER_ENV_C4	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_ENV_C6",	wxPAPER_ENV_C6	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_ENV_C65",	wxPAPER_ENV_C65	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_ENV_B4",	wxPAPER_ENV_B4	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_ENV_B5",	wxPAPER_ENV_B5	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_ENV_B6",	wxPAPER_ENV_B6	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_ENV_ITALY",	wxPAPER_ENV_ITALY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_ENV_MONARCH",	wxPAPER_ENV_MONARCH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_ENV_PERSONAL",	wxPAPER_ENV_PERSONAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_FANFOLD_US",	wxPAPER_FANFOLD_US	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_FANFOLD_STD_GERMAN",	wxPAPER_FANFOLD_STD_GERMAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_FANFOLD_LGL_GERMAN",	wxPAPER_FANFOLD_LGL_GERMAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_ISO_B4",	wxPAPER_ISO_B4	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_JAPANESE_POSTCARD",	wxPAPER_JAPANESE_POSTCARD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_9X11",	wxPAPER_9X11	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_10X11",	wxPAPER_10X11	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_15X11",	wxPAPER_15X11	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_ENV_INVITE",	wxPAPER_ENV_INVITE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_LETTER_EXTRA",	wxPAPER_LETTER_EXTRA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_LEGAL_EXTRA",	wxPAPER_LEGAL_EXTRA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_TABLOID_EXTRA",	wxPAPER_TABLOID_EXTRA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_A4_EXTRA",	wxPAPER_A4_EXTRA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_LETTER_TRANSVERSE",	wxPAPER_LETTER_TRANSVERSE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_A4_TRANSVERSE",	wxPAPER_A4_TRANSVERSE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_LETTER_EXTRA_TRANSVERSE",	wxPAPER_LETTER_EXTRA_TRANSVERSE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_A_PLUS",	wxPAPER_A_PLUS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_B_PLUS",	wxPAPER_B_PLUS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_LETTER_PLUS",	wxPAPER_LETTER_PLUS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_A4_PLUS",	wxPAPER_A4_PLUS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_A5_TRANSVERSE",	wxPAPER_A5_TRANSVERSE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_B5_TRANSVERSE",	wxPAPER_B5_TRANSVERSE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_A3_EXTRA",	wxPAPER_A3_EXTRA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_A5_EXTRA",	wxPAPER_A5_EXTRA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_B5_EXTRA",	wxPAPER_B5_EXTRA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_A2",	wxPAPER_A2	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_A3_TRANSVERSE",	wxPAPER_A3_TRANSVERSE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_A3_EXTRA_TRANSVERSE",	wxPAPER_A3_EXTRA_TRANSVERSE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_DBL_JAPANESE_POSTCARD",	wxPAPER_DBL_JAPANESE_POSTCARD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_A6",	wxPAPER_A6	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_JENV_KAKU2",	wxPAPER_JENV_KAKU2	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_JENV_KAKU3",	wxPAPER_JENV_KAKU3	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_JENV_CHOU3",	wxPAPER_JENV_CHOU3	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_JENV_CHOU4",	wxPAPER_JENV_CHOU4	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_LETTER_ROTATED",	wxPAPER_LETTER_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_A3_ROTATED",	wxPAPER_A3_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_A4_ROTATED",	wxPAPER_A4_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_A5_ROTATED",	wxPAPER_A5_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_B4_JIS_ROTATED",	wxPAPER_B4_JIS_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_B5_JIS_ROTATED",	wxPAPER_B5_JIS_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_JAPANESE_POSTCARD_ROTATED",	wxPAPER_JAPANESE_POSTCARD_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_DBL_JAPANESE_POSTCARD_ROTATED",	wxPAPER_DBL_JAPANESE_POSTCARD_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_A6_ROTATED",	wxPAPER_A6_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_JENV_KAKU2_ROTATED",	wxPAPER_JENV_KAKU2_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_JENV_KAKU3_ROTATED",	wxPAPER_JENV_KAKU3_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_JENV_CHOU3_ROTATED",	wxPAPER_JENV_CHOU3_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_JENV_CHOU4_ROTATED",	wxPAPER_JENV_CHOU4_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_B6_JIS",	wxPAPER_B6_JIS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_B6_JIS_ROTATED",	wxPAPER_B6_JIS_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_12X11",	wxPAPER_12X11	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_JENV_YOU4",	wxPAPER_JENV_YOU4	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_JENV_YOU4_ROTATED",	wxPAPER_JENV_YOU4_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_P16K",	wxPAPER_P16K	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_P32K",	wxPAPER_P32K	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_P32KBIG",	wxPAPER_P32KBIG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_PENV_1",	wxPAPER_PENV_1	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_PENV_2",	wxPAPER_PENV_2	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_PENV_3",	wxPAPER_PENV_3	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_PENV_4",	wxPAPER_PENV_4	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_PENV_5",	wxPAPER_PENV_5	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_PENV_6",	wxPAPER_PENV_6	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_PENV_7",	wxPAPER_PENV_7	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_PENV_8",	wxPAPER_PENV_8	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_PENV_9",	wxPAPER_PENV_9	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_PENV_10",	wxPAPER_PENV_10	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_P16K_ROTATED",	wxPAPER_P16K_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_P32K_ROTATED",	wxPAPER_P32K_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_P32KBIG_ROTATED",	wxPAPER_P32KBIG_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_PENV_1_ROTATED",	wxPAPER_PENV_1_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_PENV_2_ROTATED",	wxPAPER_PENV_2_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_PENV_3_ROTATED",	wxPAPER_PENV_3_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_PENV_4_ROTATED",	wxPAPER_PENV_4_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_PENV_5_ROTATED",	wxPAPER_PENV_5_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_PENV_6_ROTATED",	wxPAPER_PENV_6_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_PENV_7_ROTATED",	wxPAPER_PENV_7_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_PENV_8_ROTATED",	wxPAPER_PENV_8_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_PENV_9_ROTATED",	wxPAPER_PENV_9_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAPER_PENV_10_ROTATED",	wxPAPER_PENV_10_ROTATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTFLAG_DEFAULT",	wxFONTFLAG_DEFAULT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTFLAG_ITALIC",	wxFONTFLAG_ITALIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTFLAG_SLANT",	wxFONTFLAG_SLANT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTFLAG_LIGHT",	wxFONTFLAG_LIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTFLAG_BOLD",	wxFONTFLAG_BOLD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTFLAG_ANTIALIASED",	wxFONTFLAG_ANTIALIASED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTFLAG_NOT_ANTIALIASED",	wxFONTFLAG_NOT_ANTIALIASED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTFLAG_UNDERLINED",	wxFONTFLAG_UNDERLINED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTFLAG_STRIKETHROUGH",	wxFONTFLAG_STRIKETHROUGH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTFLAG_MASK",	wxFONTFLAG_MASK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDefaultCoord",	wxDefaultCoord	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_AUTOSIZE",	wxLIST_AUTOSIZE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_AUTOSIZE_USEHEADER",	wxLIST_AUTOSIZE_USEHEADER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPORT_UNKNOWN",	wxPORT_UNKNOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPORT_BASE",	wxPORT_BASE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPORT_MSW",	wxPORT_MSW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPORT_MOTIF",	wxPORT_MOTIF	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPORT_GTK",	wxPORT_GTK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPORT_MGL",	wxPORT_MGL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPORT_X11",	wxPORT_X11	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPORT_PM",	wxPORT_PM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPORT_OS2",	wxPORT_OS2	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPORT_MAC",	wxPORT_MAC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPORT_COCOA",	wxPORT_COCOA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPORT_WINCE",	wxPORT_WINCE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPORT_PALMOS",	wxPORT_PALMOS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPORT_DFB",	wxPORT_DFB	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPATH_NORM_ENV_VARS",	wxPATH_NORM_ENV_VARS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPATH_NORM_DOTS",	wxPATH_NORM_DOTS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPATH_NORM_TILDE",	wxPATH_NORM_TILDE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPATH_NORM_CASE",	wxPATH_NORM_CASE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPATH_NORM_ABSOLUTE",	wxPATH_NORM_ABSOLUTE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPATH_NORM_LONG",	wxPATH_NORM_LONG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPATH_NORM_SHORTCUT",	wxPATH_NORM_SHORTCUT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPATH_NORM_ALL",	wxPATH_NORM_ALL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_NONE",	wxSOCKET_NONE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_NOWAIT",	wxSOCKET_NOWAIT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_WAITALL",	wxSOCKET_WAITALL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_BLOCK",	wxSOCKET_BLOCK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_REUSEADDR",	wxSOCKET_REUSEADDR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDrag_CopyOnly",	wxDrag_CopyOnly	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDrag_AllowMove",	wxDrag_AllowMove	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDrag_DefaultMove",	wxDrag_DefaultMove	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAGE_ODD",	wxPAGE_ODD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAGE_EVEN",	wxPAGE_EVEN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPAGE_ALL",	wxPAGE_ALL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxARCH_INVALID",	wxARCH_INVALID	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxARCH_32",	wxARCH_32	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxARCH_64",	wxARCH_64	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxARCH_MAX",	wxARCH_MAX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSIGNONE",	wxSIGNONE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSIGHUP",	wxSIGHUP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSIGINT",	wxSIGINT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSIGQUIT",	wxSIGQUIT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSIGILL",	wxSIGILL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSIGTRAP",	wxSIGTRAP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSIGABRT",	wxSIGABRT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSIGIOT",	wxSIGIOT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSIGEMT",	wxSIGEMT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSIGFPE",	wxSIGFPE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSIGKILL",	wxSIGKILL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSIGBUS",	wxSIGBUS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSIGSEGV",	wxSIGSEGV	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSIGSYS",	wxSIGSYS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSIGPIPE",	wxSIGPIPE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSIGALRM",	wxSIGALRM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSIGTERM",	wxSIGTERM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSTRETCH_NOT",	wxSTRETCH_NOT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSHRINK",	wxSHRINK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxGROW",	wxGROW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEXPAND",	wxEXPAND	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSHAPED",	wxSHAPED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFIXED_MINSIZE",	wxFIXED_MINSIZE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTILE",	wxTILE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxADJUST_MINSIZE",	wxADJUST_MINSIZE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHTML_URL_PAGE",	wxHTML_URL_PAGE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHTML_URL_IMAGE",	wxHTML_URL_IMAGE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHTML_URL_OTHER",	wxHTML_URL_OTHER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxKEY_NONE",	wxKEY_NONE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxKEY_INTEGER",	wxKEY_INTEGER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxKEY_STRING",	wxKEY_STRING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBORDER_DEFAULT",	wxBORDER_DEFAULT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBORDER_NONE",	wxBORDER_NONE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBORDER_STATIC",	wxBORDER_STATIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBORDER_SIMPLE",	wxBORDER_SIMPLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBORDER_RAISED",	wxBORDER_RAISED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBORDER_SUNKEN",	wxBORDER_SUNKEN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBORDER_DOUBLE",	wxBORDER_DOUBLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBORDER_THEME",	wxBORDER_THEME	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBORDER_MASK",	wxBORDER_MASK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_NONE",	wxCURSOR_NONE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_ARROW",	wxCURSOR_ARROW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_RIGHT_ARROW",	wxCURSOR_RIGHT_ARROW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_BULLSEYE",	wxCURSOR_BULLSEYE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_CHAR",	wxCURSOR_CHAR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_CROSS",	wxCURSOR_CROSS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_HAND",	wxCURSOR_HAND	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_IBEAM",	wxCURSOR_IBEAM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_LEFT_BUTTON",	wxCURSOR_LEFT_BUTTON	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_MAGNIFIER",	wxCURSOR_MAGNIFIER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_MIDDLE_BUTTON",	wxCURSOR_MIDDLE_BUTTON	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_NO_ENTRY",	wxCURSOR_NO_ENTRY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_PAINT_BRUSH",	wxCURSOR_PAINT_BRUSH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_PENCIL",	wxCURSOR_PENCIL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_POINT_LEFT",	wxCURSOR_POINT_LEFT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_POINT_RIGHT",	wxCURSOR_POINT_RIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_QUESTION_ARROW",	wxCURSOR_QUESTION_ARROW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_RIGHT_BUTTON",	wxCURSOR_RIGHT_BUTTON	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_SIZENESW",	wxCURSOR_SIZENESW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_SIZENS",	wxCURSOR_SIZENS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_SIZENWSE",	wxCURSOR_SIZENWSE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_SIZEWE",	wxCURSOR_SIZEWE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_SIZING",	wxCURSOR_SIZING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_SPRAYCAN",	wxCURSOR_SPRAYCAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_WAIT",	wxCURSOR_WAIT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_WATCH",	wxCURSOR_WATCH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_BLANK",	wxCURSOR_BLANK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_DEFAULT",	wxCURSOR_DEFAULT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_ARROWWAIT",	wxCURSOR_ARROWWAIT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCURSOR_MAX",	wxCURSOR_MAX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_UNINIT",	wxSOCKET_UNINIT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_CLIENT",	wxSOCKET_CLIENT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_SERVER",	wxSOCKET_SERVER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_BASE",	wxSOCKET_BASE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_DATAGRAM",	wxSOCKET_DATAGRAM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_DEFAULT",	wxLANGUAGE_DEFAULT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_UNKNOWN",	wxLANGUAGE_UNKNOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ABKHAZIAN",	wxLANGUAGE_ABKHAZIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_AFAR",	wxLANGUAGE_AFAR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_AFRIKAANS",	wxLANGUAGE_AFRIKAANS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ALBANIAN",	wxLANGUAGE_ALBANIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_AMHARIC",	wxLANGUAGE_AMHARIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ARABIC",	wxLANGUAGE_ARABIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ARABIC_ALGERIA",	wxLANGUAGE_ARABIC_ALGERIA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ARABIC_BAHRAIN",	wxLANGUAGE_ARABIC_BAHRAIN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ARABIC_EGYPT",	wxLANGUAGE_ARABIC_EGYPT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ARABIC_IRAQ",	wxLANGUAGE_ARABIC_IRAQ	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ARABIC_JORDAN",	wxLANGUAGE_ARABIC_JORDAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ARABIC_KUWAIT",	wxLANGUAGE_ARABIC_KUWAIT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ARABIC_LEBANON",	wxLANGUAGE_ARABIC_LEBANON	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ARABIC_LIBYA",	wxLANGUAGE_ARABIC_LIBYA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ARABIC_MOROCCO",	wxLANGUAGE_ARABIC_MOROCCO	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ARABIC_OMAN",	wxLANGUAGE_ARABIC_OMAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ARABIC_QATAR",	wxLANGUAGE_ARABIC_QATAR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ARABIC_SAUDI_ARABIA",	wxLANGUAGE_ARABIC_SAUDI_ARABIA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ARABIC_SUDAN",	wxLANGUAGE_ARABIC_SUDAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ARABIC_SYRIA",	wxLANGUAGE_ARABIC_SYRIA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ARABIC_TUNISIA",	wxLANGUAGE_ARABIC_TUNISIA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ARABIC_UAE",	wxLANGUAGE_ARABIC_UAE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ARABIC_YEMEN",	wxLANGUAGE_ARABIC_YEMEN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ARMENIAN",	wxLANGUAGE_ARMENIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ASSAMESE",	wxLANGUAGE_ASSAMESE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_AYMARA",	wxLANGUAGE_AYMARA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_AZERI",	wxLANGUAGE_AZERI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_AZERI_CYRILLIC",	wxLANGUAGE_AZERI_CYRILLIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_AZERI_LATIN",	wxLANGUAGE_AZERI_LATIN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_BASHKIR",	wxLANGUAGE_BASHKIR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_BASQUE",	wxLANGUAGE_BASQUE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_BELARUSIAN",	wxLANGUAGE_BELARUSIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_BENGALI",	wxLANGUAGE_BENGALI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_BHUTANI",	wxLANGUAGE_BHUTANI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_BIHARI",	wxLANGUAGE_BIHARI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_BISLAMA",	wxLANGUAGE_BISLAMA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_BRETON",	wxLANGUAGE_BRETON	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_BULGARIAN",	wxLANGUAGE_BULGARIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_BURMESE",	wxLANGUAGE_BURMESE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_CAMBODIAN",	wxLANGUAGE_CAMBODIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_CATALAN",	wxLANGUAGE_CATALAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_CHINESE",	wxLANGUAGE_CHINESE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_CHINESE_SIMPLIFIED",	wxLANGUAGE_CHINESE_SIMPLIFIED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_CHINESE_TRADITIONAL",	wxLANGUAGE_CHINESE_TRADITIONAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_CHINESE_HONGKONG",	wxLANGUAGE_CHINESE_HONGKONG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_CHINESE_MACAU",	wxLANGUAGE_CHINESE_MACAU	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_CHINESE_SINGAPORE",	wxLANGUAGE_CHINESE_SINGAPORE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_CHINESE_TAIWAN",	wxLANGUAGE_CHINESE_TAIWAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_CORSICAN",	wxLANGUAGE_CORSICAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_CROATIAN",	wxLANGUAGE_CROATIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_CZECH",	wxLANGUAGE_CZECH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_DANISH",	wxLANGUAGE_DANISH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_DUTCH",	wxLANGUAGE_DUTCH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_DUTCH_BELGIAN",	wxLANGUAGE_DUTCH_BELGIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ENGLISH",	wxLANGUAGE_ENGLISH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ENGLISH_UK",	wxLANGUAGE_ENGLISH_UK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ENGLISH_US",	wxLANGUAGE_ENGLISH_US	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ENGLISH_AUSTRALIA",	wxLANGUAGE_ENGLISH_AUSTRALIA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ENGLISH_BELIZE",	wxLANGUAGE_ENGLISH_BELIZE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ENGLISH_BOTSWANA",	wxLANGUAGE_ENGLISH_BOTSWANA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ENGLISH_CANADA",	wxLANGUAGE_ENGLISH_CANADA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ENGLISH_CARIBBEAN",	wxLANGUAGE_ENGLISH_CARIBBEAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ENGLISH_DENMARK",	wxLANGUAGE_ENGLISH_DENMARK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ENGLISH_EIRE",	wxLANGUAGE_ENGLISH_EIRE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ENGLISH_JAMAICA",	wxLANGUAGE_ENGLISH_JAMAICA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ENGLISH_NEW_ZEALAND",	wxLANGUAGE_ENGLISH_NEW_ZEALAND	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ENGLISH_PHILIPPINES",	wxLANGUAGE_ENGLISH_PHILIPPINES	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ENGLISH_SOUTH_AFRICA",	wxLANGUAGE_ENGLISH_SOUTH_AFRICA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ENGLISH_TRINIDAD",	wxLANGUAGE_ENGLISH_TRINIDAD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ENGLISH_ZIMBABWE",	wxLANGUAGE_ENGLISH_ZIMBABWE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ESPERANTO",	wxLANGUAGE_ESPERANTO	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ESTONIAN",	wxLANGUAGE_ESTONIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_FAEROESE",	wxLANGUAGE_FAEROESE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_FARSI",	wxLANGUAGE_FARSI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_FIJI",	wxLANGUAGE_FIJI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_FINNISH",	wxLANGUAGE_FINNISH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_FRENCH",	wxLANGUAGE_FRENCH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_FRENCH_BELGIAN",	wxLANGUAGE_FRENCH_BELGIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_FRENCH_CANADIAN",	wxLANGUAGE_FRENCH_CANADIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_FRENCH_LUXEMBOURG",	wxLANGUAGE_FRENCH_LUXEMBOURG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_FRENCH_MONACO",	wxLANGUAGE_FRENCH_MONACO	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_FRENCH_SWISS",	wxLANGUAGE_FRENCH_SWISS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_FRISIAN",	wxLANGUAGE_FRISIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_GALICIAN",	wxLANGUAGE_GALICIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_GEORGIAN",	wxLANGUAGE_GEORGIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_GERMAN",	wxLANGUAGE_GERMAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_GERMAN_AUSTRIAN",	wxLANGUAGE_GERMAN_AUSTRIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_GERMAN_BELGIUM",	wxLANGUAGE_GERMAN_BELGIUM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_GERMAN_LIECHTENSTEIN",	wxLANGUAGE_GERMAN_LIECHTENSTEIN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_GERMAN_LUXEMBOURG",	wxLANGUAGE_GERMAN_LUXEMBOURG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_GERMAN_SWISS",	wxLANGUAGE_GERMAN_SWISS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_GREEK",	wxLANGUAGE_GREEK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_GREENLANDIC",	wxLANGUAGE_GREENLANDIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_GUARANI",	wxLANGUAGE_GUARANI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_GUJARATI",	wxLANGUAGE_GUJARATI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_HAUSA",	wxLANGUAGE_HAUSA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_HEBREW",	wxLANGUAGE_HEBREW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_HINDI",	wxLANGUAGE_HINDI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_HUNGARIAN",	wxLANGUAGE_HUNGARIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ICELANDIC",	wxLANGUAGE_ICELANDIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_INDONESIAN",	wxLANGUAGE_INDONESIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_INTERLINGUA",	wxLANGUAGE_INTERLINGUA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_INTERLINGUE",	wxLANGUAGE_INTERLINGUE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_INUKTITUT",	wxLANGUAGE_INUKTITUT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_INUPIAK",	wxLANGUAGE_INUPIAK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_IRISH",	wxLANGUAGE_IRISH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ITALIAN",	wxLANGUAGE_ITALIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ITALIAN_SWISS",	wxLANGUAGE_ITALIAN_SWISS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_JAPANESE",	wxLANGUAGE_JAPANESE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_JAVANESE",	wxLANGUAGE_JAVANESE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_KANNADA",	wxLANGUAGE_KANNADA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_KASHMIRI",	wxLANGUAGE_KASHMIRI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_KASHMIRI_INDIA",	wxLANGUAGE_KASHMIRI_INDIA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_KAZAKH",	wxLANGUAGE_KAZAKH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_KERNEWEK",	wxLANGUAGE_KERNEWEK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_KINYARWANDA",	wxLANGUAGE_KINYARWANDA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_KIRGHIZ",	wxLANGUAGE_KIRGHIZ	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_KIRUNDI",	wxLANGUAGE_KIRUNDI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_KONKANI",	wxLANGUAGE_KONKANI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_KOREAN",	wxLANGUAGE_KOREAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_KURDISH",	wxLANGUAGE_KURDISH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_LAOTHIAN",	wxLANGUAGE_LAOTHIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_LATIN",	wxLANGUAGE_LATIN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_LATVIAN",	wxLANGUAGE_LATVIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_LINGALA",	wxLANGUAGE_LINGALA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_LITHUANIAN",	wxLANGUAGE_LITHUANIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_MACEDONIAN",	wxLANGUAGE_MACEDONIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_MALAGASY",	wxLANGUAGE_MALAGASY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_MALAY",	wxLANGUAGE_MALAY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_MALAYALAM",	wxLANGUAGE_MALAYALAM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_MALAY_BRUNEI_DARUSSALAM",	wxLANGUAGE_MALAY_BRUNEI_DARUSSALAM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_MALAY_MALAYSIA",	wxLANGUAGE_MALAY_MALAYSIA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_MALTESE",	wxLANGUAGE_MALTESE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_MANIPURI",	wxLANGUAGE_MANIPURI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_MAORI",	wxLANGUAGE_MAORI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_MARATHI",	wxLANGUAGE_MARATHI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_MOLDAVIAN",	wxLANGUAGE_MOLDAVIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_MONGOLIAN",	wxLANGUAGE_MONGOLIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_NAURU",	wxLANGUAGE_NAURU	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_NEPALI",	wxLANGUAGE_NEPALI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_NEPALI_INDIA",	wxLANGUAGE_NEPALI_INDIA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_NORWEGIAN_BOKMAL",	wxLANGUAGE_NORWEGIAN_BOKMAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_NORWEGIAN_NYNORSK",	wxLANGUAGE_NORWEGIAN_NYNORSK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_OCCITAN",	wxLANGUAGE_OCCITAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ORIYA",	wxLANGUAGE_ORIYA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_OROMO",	wxLANGUAGE_OROMO	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_PASHTO",	wxLANGUAGE_PASHTO	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_POLISH",	wxLANGUAGE_POLISH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_PORTUGUESE",	wxLANGUAGE_PORTUGUESE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_PORTUGUESE_BRAZILIAN",	wxLANGUAGE_PORTUGUESE_BRAZILIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_PUNJABI",	wxLANGUAGE_PUNJABI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_QUECHUA",	wxLANGUAGE_QUECHUA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_RHAETO_ROMANCE",	wxLANGUAGE_RHAETO_ROMANCE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ROMANIAN",	wxLANGUAGE_ROMANIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_RUSSIAN",	wxLANGUAGE_RUSSIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_RUSSIAN_UKRAINE",	wxLANGUAGE_RUSSIAN_UKRAINE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SAMOAN",	wxLANGUAGE_SAMOAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SANGHO",	wxLANGUAGE_SANGHO	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SANSKRIT",	wxLANGUAGE_SANSKRIT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SCOTS_GAELIC",	wxLANGUAGE_SCOTS_GAELIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SERBIAN",	wxLANGUAGE_SERBIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SERBIAN_CYRILLIC",	wxLANGUAGE_SERBIAN_CYRILLIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SERBIAN_LATIN",	wxLANGUAGE_SERBIAN_LATIN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SERBO_CROATIAN",	wxLANGUAGE_SERBO_CROATIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SESOTHO",	wxLANGUAGE_SESOTHO	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SETSWANA",	wxLANGUAGE_SETSWANA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SHONA",	wxLANGUAGE_SHONA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SINDHI",	wxLANGUAGE_SINDHI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SINHALESE",	wxLANGUAGE_SINHALESE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SISWATI",	wxLANGUAGE_SISWATI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SLOVAK",	wxLANGUAGE_SLOVAK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SLOVENIAN",	wxLANGUAGE_SLOVENIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SOMALI",	wxLANGUAGE_SOMALI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SPANISH",	wxLANGUAGE_SPANISH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SPANISH_ARGENTINA",	wxLANGUAGE_SPANISH_ARGENTINA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SPANISH_BOLIVIA",	wxLANGUAGE_SPANISH_BOLIVIA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SPANISH_CHILE",	wxLANGUAGE_SPANISH_CHILE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SPANISH_COLOMBIA",	wxLANGUAGE_SPANISH_COLOMBIA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SPANISH_COSTA_RICA",	wxLANGUAGE_SPANISH_COSTA_RICA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SPANISH_DOMINICAN_REPUBLIC",	wxLANGUAGE_SPANISH_DOMINICAN_REPUBLIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SPANISH_ECUADOR",	wxLANGUAGE_SPANISH_ECUADOR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SPANISH_EL_SALVADOR",	wxLANGUAGE_SPANISH_EL_SALVADOR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SPANISH_GUATEMALA",	wxLANGUAGE_SPANISH_GUATEMALA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SPANISH_HONDURAS",	wxLANGUAGE_SPANISH_HONDURAS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SPANISH_MEXICAN",	wxLANGUAGE_SPANISH_MEXICAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SPANISH_MODERN",	wxLANGUAGE_SPANISH_MODERN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SPANISH_NICARAGUA",	wxLANGUAGE_SPANISH_NICARAGUA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SPANISH_PANAMA",	wxLANGUAGE_SPANISH_PANAMA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SPANISH_PARAGUAY",	wxLANGUAGE_SPANISH_PARAGUAY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SPANISH_PERU",	wxLANGUAGE_SPANISH_PERU	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SPANISH_PUERTO_RICO",	wxLANGUAGE_SPANISH_PUERTO_RICO	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SPANISH_URUGUAY",	wxLANGUAGE_SPANISH_URUGUAY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SPANISH_US",	wxLANGUAGE_SPANISH_US	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SPANISH_VENEZUELA",	wxLANGUAGE_SPANISH_VENEZUELA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SUNDANESE",	wxLANGUAGE_SUNDANESE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SWAHILI",	wxLANGUAGE_SWAHILI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SWEDISH",	wxLANGUAGE_SWEDISH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_SWEDISH_FINLAND",	wxLANGUAGE_SWEDISH_FINLAND	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_TAGALOG",	wxLANGUAGE_TAGALOG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_TAJIK",	wxLANGUAGE_TAJIK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_TAMIL",	wxLANGUAGE_TAMIL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_TATAR",	wxLANGUAGE_TATAR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_TELUGU",	wxLANGUAGE_TELUGU	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_THAI",	wxLANGUAGE_THAI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_TIBETAN",	wxLANGUAGE_TIBETAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_TIGRINYA",	wxLANGUAGE_TIGRINYA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_TONGA",	wxLANGUAGE_TONGA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_TSONGA",	wxLANGUAGE_TSONGA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_TURKISH",	wxLANGUAGE_TURKISH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_TURKMEN",	wxLANGUAGE_TURKMEN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_TWI",	wxLANGUAGE_TWI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_UIGHUR",	wxLANGUAGE_UIGHUR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_UKRAINIAN",	wxLANGUAGE_UKRAINIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_URDU",	wxLANGUAGE_URDU	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_URDU_INDIA",	wxLANGUAGE_URDU_INDIA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_URDU_PAKISTAN",	wxLANGUAGE_URDU_PAKISTAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_UZBEK",	wxLANGUAGE_UZBEK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_UZBEK_CYRILLIC",	wxLANGUAGE_UZBEK_CYRILLIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_UZBEK_LATIN",	wxLANGUAGE_UZBEK_LATIN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_VIETNAMESE",	wxLANGUAGE_VIETNAMESE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_VOLAPUK",	wxLANGUAGE_VOLAPUK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_WELSH",	wxLANGUAGE_WELSH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_WOLOF",	wxLANGUAGE_WOLOF	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_XHOSA",	wxLANGUAGE_XHOSA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_YIDDISH",	wxLANGUAGE_YIDDISH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_YORUBA",	wxLANGUAGE_YORUBA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ZHUANG",	wxLANGUAGE_ZHUANG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_ZULU",	wxLANGUAGE_ZULU	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLANGUAGE_USER_DEFINED",	wxLANGUAGE_USER_DEFINED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxXRC_USE_LOCALE",	wxXRC_USE_LOCALE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxXRC_NO_SUBCLASSING",	wxXRC_NO_SUBCLASSING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxXRC_NO_RELOADING",	wxXRC_NO_RELOADING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_FORMAT_LEFT",	wxLIST_FORMAT_LEFT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_FORMAT_RIGHT",	wxLIST_FORMAT_RIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_FORMAT_CENTRE",	wxLIST_FORMAT_CENTRE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_FORMAT_CENTER",	wxLIST_FORMAT_CENTER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFromStart",	wxFromStart	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFromCurrent",	wxFromCurrent	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFromEnd",	wxFromEnd	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCLEAR",	wxCLEAR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxROP_BLACK",	wxROP_BLACK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBLIT_BLACKNESS",	wxBLIT_BLACKNESS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxXOR",	wxXOR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxROP_XORPEN",	wxROP_XORPEN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBLIT_SRCINVERT",	wxBLIT_SRCINVERT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxINVERT",	wxINVERT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxROP_NOT",	wxROP_NOT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBLIT_DSTINVERT",	wxBLIT_DSTINVERT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOR_REVERSE",	wxOR_REVERSE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxROP_MERGEPENNOT",	wxROP_MERGEPENNOT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBLIT_00DD0228",	wxBLIT_00DD0228	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxAND_REVERSE",	wxAND_REVERSE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxROP_MASKPENNOT",	wxROP_MASKPENNOT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBLIT_SRCERASE",	wxBLIT_SRCERASE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCOPY",	wxCOPY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxROP_COPYPEN",	wxROP_COPYPEN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBLIT_SRCCOPY",	wxBLIT_SRCCOPY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxAND",	wxAND	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxROP_MASKPEN",	wxROP_MASKPEN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBLIT_SRCAND",	wxBLIT_SRCAND	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxAND_INVERT",	wxAND_INVERT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxROP_MASKNOTPEN",	wxROP_MASKNOTPEN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBLIT_00220326",	wxBLIT_00220326	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNO_OP",	wxNO_OP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxROP_NOP",	wxROP_NOP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBLIT_00AA0029",	wxBLIT_00AA0029	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNOR",	wxNOR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxROP_NOTMERGEPEN",	wxROP_NOTMERGEPEN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBLIT_NOTSRCERASE",	wxBLIT_NOTSRCERASE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEQUIV",	wxEQUIV	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxROP_NOTXORPEN",	wxROP_NOTXORPEN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBLIT_00990066",	wxBLIT_00990066	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSRC_INVERT",	wxSRC_INVERT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxROP_NOTCOPYPEN",	wxROP_NOTCOPYPEN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBLIT_NOTSCRCOPY",	wxBLIT_NOTSCRCOPY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOR_INVERT",	wxOR_INVERT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxROP_MERGENOTPEN",	wxROP_MERGENOTPEN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBLIT_MERGEPAINT",	wxBLIT_MERGEPAINT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNAND",	wxNAND	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxROP_NOTMASKPEN",	wxROP_NOTMASKPEN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBLIT_007700E6",	wxBLIT_007700E6	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOR",	wxOR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxROP_MERGEPEN",	wxROP_MERGEPEN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBLIT_SRCPAINT",	wxBLIT_SRCPAINT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSET",	wxSET	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxROP_WHITE",	wxROP_WHITE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBLIT_WHITENESS",	wxBLIT_WHITENESS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFLOOD_SURFACE",	wxFLOOD_SURFACE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFLOOD_BORDER",	wxFLOOD_BORDER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxODDEVEN_RULE",	wxODDEVEN_RULE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxWINDING_RULE",	wxWINDING_RULE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTHREAD_DETACHED",	wxTHREAD_DETACHED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTHREAD_JOINABLE",	wxTHREAD_JOINABLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLOG_FatalError",	wxLOG_FatalError	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLOG_Error",	wxLOG_Error	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLOG_Warning",	wxLOG_Warning	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLOG_Message",	wxLOG_Message	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLOG_Status",	wxLOG_Status	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLOG_Info",	wxLOG_Info	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLOG_Debug",	wxLOG_Debug	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLOG_Trace",	wxLOG_Trace	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLOG_Progress",	wxLOG_Progress	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLOG_User",	wxLOG_User	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLOG_Max",	wxLOG_Max	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_HT_UNKNOWN",	wxTE_HT_UNKNOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_HT_BEFORE",	wxTE_HT_BEFORE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_HT_ON_TEXT",	wxTE_HT_ON_TEXT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_HT_BELOW",	wxTE_HT_BELOW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_HT_BEYOND",	wxTE_HT_BEYOND	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_SYSTEM",	wxFONTENCODING_SYSTEM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_DEFAULT",	wxFONTENCODING_DEFAULT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_ISO8859_1",	wxFONTENCODING_ISO8859_1	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_ISO8859_2",	wxFONTENCODING_ISO8859_2	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_ISO8859_3",	wxFONTENCODING_ISO8859_3	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_ISO8859_4",	wxFONTENCODING_ISO8859_4	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_ISO8859_5",	wxFONTENCODING_ISO8859_5	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_ISO8859_6",	wxFONTENCODING_ISO8859_6	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_ISO8859_7",	wxFONTENCODING_ISO8859_7	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_ISO8859_8",	wxFONTENCODING_ISO8859_8	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_ISO8859_9",	wxFONTENCODING_ISO8859_9	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_ISO8859_10",	wxFONTENCODING_ISO8859_10	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_ISO8859_11",	wxFONTENCODING_ISO8859_11	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_ISO8859_12",	wxFONTENCODING_ISO8859_12	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_ISO8859_13",	wxFONTENCODING_ISO8859_13	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_ISO8859_14",	wxFONTENCODING_ISO8859_14	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_ISO8859_15",	wxFONTENCODING_ISO8859_15	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_ISO8859_MAX",	wxFONTENCODING_ISO8859_MAX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_KOI8",	wxFONTENCODING_KOI8	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_KOI8_U",	wxFONTENCODING_KOI8_U	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_ALTERNATIVE",	wxFONTENCODING_ALTERNATIVE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_BULGARIAN",	wxFONTENCODING_BULGARIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_CP437",	wxFONTENCODING_CP437	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_CP850",	wxFONTENCODING_CP850	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_CP852",	wxFONTENCODING_CP852	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_CP855",	wxFONTENCODING_CP855	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_CP866",	wxFONTENCODING_CP866	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_CP874",	wxFONTENCODING_CP874	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_CP932",	wxFONTENCODING_CP932	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_CP936",	wxFONTENCODING_CP936	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_CP949",	wxFONTENCODING_CP949	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_CP950",	wxFONTENCODING_CP950	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_CP1250",	wxFONTENCODING_CP1250	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_CP1251",	wxFONTENCODING_CP1251	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_CP1252",	wxFONTENCODING_CP1252	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_CP1253",	wxFONTENCODING_CP1253	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_CP1254",	wxFONTENCODING_CP1254	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_CP1255",	wxFONTENCODING_CP1255	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_CP1256",	wxFONTENCODING_CP1256	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_CP1257",	wxFONTENCODING_CP1257	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_CP12_MAX",	wxFONTENCODING_CP12_MAX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_UTF7",	wxFONTENCODING_UTF7	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_UTF8",	wxFONTENCODING_UTF8	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_EUC_JP",	wxFONTENCODING_EUC_JP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_UTF16BE",	wxFONTENCODING_UTF16BE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_UTF16LE",	wxFONTENCODING_UTF16LE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_UTF32BE",	wxFONTENCODING_UTF32BE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_UTF32LE",	wxFONTENCODING_UTF32LE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACROMAN",	wxFONTENCODING_MACROMAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACJAPANESE",	wxFONTENCODING_MACJAPANESE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACCHINESETRAD",	wxFONTENCODING_MACCHINESETRAD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACKOREAN",	wxFONTENCODING_MACKOREAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACARABIC",	wxFONTENCODING_MACARABIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACHEBREW",	wxFONTENCODING_MACHEBREW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACGREEK",	wxFONTENCODING_MACGREEK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACCYRILLIC",	wxFONTENCODING_MACCYRILLIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACDEVANAGARI",	wxFONTENCODING_MACDEVANAGARI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACGURMUKHI",	wxFONTENCODING_MACGURMUKHI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACGUJARATI",	wxFONTENCODING_MACGUJARATI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACORIYA",	wxFONTENCODING_MACORIYA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACBENGALI",	wxFONTENCODING_MACBENGALI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACTAMIL",	wxFONTENCODING_MACTAMIL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACTELUGU",	wxFONTENCODING_MACTELUGU	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACKANNADA",	wxFONTENCODING_MACKANNADA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACMALAJALAM",	wxFONTENCODING_MACMALAJALAM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACSINHALESE",	wxFONTENCODING_MACSINHALESE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACBURMESE",	wxFONTENCODING_MACBURMESE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACKHMER",	wxFONTENCODING_MACKHMER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACTHAI",	wxFONTENCODING_MACTHAI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACLAOTIAN",	wxFONTENCODING_MACLAOTIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACGEORGIAN",	wxFONTENCODING_MACGEORGIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACARMENIAN",	wxFONTENCODING_MACARMENIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACCHINESESIMP",	wxFONTENCODING_MACCHINESESIMP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACTIBETAN",	wxFONTENCODING_MACTIBETAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACMONGOLIAN",	wxFONTENCODING_MACMONGOLIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACETHIOPIC",	wxFONTENCODING_MACETHIOPIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACCENTRALEUR",	wxFONTENCODING_MACCENTRALEUR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACVIATNAMESE",	wxFONTENCODING_MACVIATNAMESE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACARABICEXT",	wxFONTENCODING_MACARABICEXT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACSYMBOL",	wxFONTENCODING_MACSYMBOL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACDINGBATS",	wxFONTENCODING_MACDINGBATS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACTURKISH",	wxFONTENCODING_MACTURKISH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACCROATIAN",	wxFONTENCODING_MACCROATIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACICELANDIC",	wxFONTENCODING_MACICELANDIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACROMANIAN",	wxFONTENCODING_MACROMANIAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACCELTIC",	wxFONTENCODING_MACCELTIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACGAELIC",	wxFONTENCODING_MACGAELIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACKEYBOARD",	wxFONTENCODING_MACKEYBOARD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MAX",	wxFONTENCODING_MAX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACMIN",	wxFONTENCODING_MACMIN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_MACMAX",	wxFONTENCODING_MACMAX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_UTF16",	wxFONTENCODING_UTF16	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_UTF32",	wxFONTENCODING_UTF32	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_UNICODE",	wxFONTENCODING_UNICODE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_GB2312",	wxFONTENCODING_GB2312	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_BIG5",	wxFONTENCODING_BIG5	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTENCODING_SHIFT_JIS",	wxFONTENCODING_SHIFT_JIS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFLEX_GROWMODE_NONE",	wxFLEX_GROWMODE_NONE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFLEX_GROWMODE_SPECIFIED",	wxFLEX_GROWMODE_SPECIFIED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFLEX_GROWMODE_ALL",	wxFLEX_GROWMODE_ALL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHELP_SEARCH_INDEX",	wxHELP_SEARCH_INDEX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHELP_SEARCH_ALL",	wxHELP_SEARCH_ALL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMUTEX_NO_ERROR",	wxMUTEX_NO_ERROR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMUTEX_INVALID",	wxMUTEX_INVALID	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMUTEX_DEAD_LOCK",	wxMUTEX_DEAD_LOCK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMUTEX_BUSY",	wxMUTEX_BUSY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMUTEX_UNLOCKED",	wxMUTEX_UNLOCKED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMUTEX_MISC_ERROR",	wxMUTEX_MISC_ERROR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxUnconstrained",	wxUnconstrained	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxAsIs",	wxAsIs	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPercentOf",	wxPercentOf	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxAbove",	wxAbove	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBelow",	wxBelow	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLeftOf",	wxLeftOf	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxRightOf",	wxRightOf	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSameAs",	wxSameAs	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxAbsolute",	wxAbsolute	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxANIMATION_TYPE_INVALID",	wxANIMATION_TYPE_INVALID	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxANIMATION_TYPE_GIF",	wxANIMATION_TYPE_GIF	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxANIMATION_TYPE_ANI",	wxANIMATION_TYPE_ANI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxANIMATION_TYPE_ANY",	wxANIMATION_TYPE_ANY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxIDLE_PROCESS_ALL",	wxIDLE_PROCESS_ALL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxIDLE_PROCESS_SPECIFIED",	wxIDLE_PROCESS_SPECIFIED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_INVALID",	wxBITMAP_TYPE_INVALID	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_BMP",	wxBITMAP_TYPE_BMP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_BMP_RESOURCE",	wxBITMAP_TYPE_BMP_RESOURCE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_RESOURCE",	wxBITMAP_TYPE_RESOURCE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_ICO",	wxBITMAP_TYPE_ICO	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_ICO_RESOURCE",	wxBITMAP_TYPE_ICO_RESOURCE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_CUR",	wxBITMAP_TYPE_CUR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_CUR_RESOURCE",	wxBITMAP_TYPE_CUR_RESOURCE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_XBM",	wxBITMAP_TYPE_XBM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_XBM_DATA",	wxBITMAP_TYPE_XBM_DATA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_XPM",	wxBITMAP_TYPE_XPM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_XPM_DATA",	wxBITMAP_TYPE_XPM_DATA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_TIF",	wxBITMAP_TYPE_TIF	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_TIF_RESOURCE",	wxBITMAP_TYPE_TIF_RESOURCE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_GIF",	wxBITMAP_TYPE_GIF	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_GIF_RESOURCE",	wxBITMAP_TYPE_GIF_RESOURCE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_PNG",	wxBITMAP_TYPE_PNG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_PNG_RESOURCE",	wxBITMAP_TYPE_PNG_RESOURCE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_JPEG",	wxBITMAP_TYPE_JPEG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_JPEG_RESOURCE",	wxBITMAP_TYPE_JPEG_RESOURCE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_PNM",	wxBITMAP_TYPE_PNM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_PNM_RESOURCE",	wxBITMAP_TYPE_PNM_RESOURCE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_PCX",	wxBITMAP_TYPE_PCX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_PCX_RESOURCE",	wxBITMAP_TYPE_PCX_RESOURCE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_PICT",	wxBITMAP_TYPE_PICT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_PICT_RESOURCE",	wxBITMAP_TYPE_PICT_RESOURCE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_ICON",	wxBITMAP_TYPE_ICON	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_ICON_RESOURCE",	wxBITMAP_TYPE_ICON_RESOURCE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_ANI",	wxBITMAP_TYPE_ANI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_IFF",	wxBITMAP_TYPE_IFF	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_TGA",	wxBITMAP_TYPE_TGA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_MACCURSOR",	wxBITMAP_TYPE_MACCURSOR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_MACCURSOR_RESOURCE",	wxBITMAP_TYPE_MACCURSOR_RESOURCE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_ANY",	wxBITMAP_TYPE_ANY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCHK_UNCHECKED",	wxCHK_UNCHECKED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCHK_CHECKED",	wxCHK_CHECKED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCHK_UNDETERMINED",	wxCHK_UNDETERMINED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMUTEX_DEFAULT",	wxMUTEX_DEFAULT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMUTEX_RECURSIVE",	wxMUTEX_RECURSIVE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHT_NOWHERE",	wxHT_NOWHERE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHT_SCROLLBAR_FIRST",	wxHT_SCROLLBAR_FIRST	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHT_SCROLLBAR_ARROW_LINE_1",	wxHT_SCROLLBAR_ARROW_LINE_1	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHT_SCROLLBAR_ARROW_LINE_2",	wxHT_SCROLLBAR_ARROW_LINE_2	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHT_SCROLLBAR_ARROW_PAGE_1",	wxHT_SCROLLBAR_ARROW_PAGE_1	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHT_SCROLLBAR_ARROW_PAGE_2",	wxHT_SCROLLBAR_ARROW_PAGE_2	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHT_SCROLLBAR_THUMB",	wxHT_SCROLLBAR_THUMB	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHT_SCROLLBAR_BAR_1",	wxHT_SCROLLBAR_BAR_1	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHT_SCROLLBAR_BAR_2",	wxHT_SCROLLBAR_BAR_2	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHT_SCROLLBAR_LAST",	wxHT_SCROLLBAR_LAST	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHT_WINDOW_OUTSIDE",	wxHT_WINDOW_OUTSIDE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHT_WINDOW_INSIDE",	wxHT_WINDOW_INSIDE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHT_WINDOW_VERT_SCROLLBAR",	wxHT_WINDOW_VERT_SCROLLBAR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHT_WINDOW_HORZ_SCROLLBAR",	wxHT_WINDOW_HORZ_SCROLLBAR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHT_WINDOW_CORNER",	wxHT_WINDOW_CORNER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHT_MAX",	wxHT_MAX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxUPDATE_UI_PROCESS_ALL",	wxUPDATE_UI_PROCESS_ALL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxUPDATE_UI_PROCESS_SPECIFIED",	wxUPDATE_UI_PROCESS_SPECIFIED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINT_WINDOWS",	wxPRINT_WINDOWS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINT_POSTSCRIPT",	wxPRINT_POSTSCRIPT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTHREAD_NO_ERROR",	wxTHREAD_NO_ERROR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTHREAD_NO_RESOURCE",	wxTHREAD_NO_RESOURCE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTHREAD_RUNNING",	wxTHREAD_RUNNING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTHREAD_NOT_RUNNING",	wxTHREAD_NOT_RUNNING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTHREAD_KILLED",	wxTHREAD_KILLED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTHREAD_MISC_ERROR",	wxTHREAD_MISC_ERROR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLEFT",	wxLEFT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxRIGHT",	wxRIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxUP",	wxUP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDOWN",	wxDOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTOP",	wxTOP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBOTTOM",	wxBOTTOM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNORTH",	wxNORTH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOUTH",	wxSOUTH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxWEST",	wxWEST	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEAST",	wxEAST	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxALL",	wxALL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_NONE",	wxID_NONE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_SEPARATOR",	wxID_SEPARATOR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_ANY",	wxID_ANY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_LOWEST",	wxID_LOWEST	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_OPEN",	wxID_OPEN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_CLOSE",	wxID_CLOSE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_NEW",	wxID_NEW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_SAVE",	wxID_SAVE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_SAVEAS",	wxID_SAVEAS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_REVERT",	wxID_REVERT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_EXIT",	wxID_EXIT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_UNDO",	wxID_UNDO	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_REDO",	wxID_REDO	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HELP",	wxID_HELP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_PRINT",	wxID_PRINT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_PRINT_SETUP",	wxID_PRINT_SETUP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_PAGE_SETUP",	wxID_PAGE_SETUP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_PREVIEW",	wxID_PREVIEW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_ABOUT",	wxID_ABOUT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HELP_CONTENTS",	wxID_HELP_CONTENTS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HELP_INDEX",	wxID_HELP_INDEX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HELP_SEARCH",	wxID_HELP_SEARCH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HELP_COMMANDS",	wxID_HELP_COMMANDS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HELP_PROCEDURES",	wxID_HELP_PROCEDURES	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HELP_CONTEXT",	wxID_HELP_CONTEXT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_CLOSE_ALL",	wxID_CLOSE_ALL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_PREFERENCES",	wxID_PREFERENCES	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_EDIT",	wxID_EDIT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_CUT",	wxID_CUT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_COPY",	wxID_COPY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_PASTE",	wxID_PASTE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_CLEAR",	wxID_CLEAR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_FIND",	wxID_FIND	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_DUPLICATE",	wxID_DUPLICATE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_SELECTALL",	wxID_SELECTALL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_DELETE",	wxID_DELETE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_REPLACE",	wxID_REPLACE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_REPLACE_ALL",	wxID_REPLACE_ALL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_PROPERTIES",	wxID_PROPERTIES	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_VIEW_DETAILS",	wxID_VIEW_DETAILS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_VIEW_LARGEICONS",	wxID_VIEW_LARGEICONS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_VIEW_SMALLICONS",	wxID_VIEW_SMALLICONS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_VIEW_LIST",	wxID_VIEW_LIST	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_VIEW_SORTDATE",	wxID_VIEW_SORTDATE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_VIEW_SORTNAME",	wxID_VIEW_SORTNAME	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_VIEW_SORTSIZE",	wxID_VIEW_SORTSIZE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_VIEW_SORTTYPE",	wxID_VIEW_SORTTYPE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_FILE",	wxID_FILE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_FILE1",	wxID_FILE1	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_FILE2",	wxID_FILE2	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_FILE3",	wxID_FILE3	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_FILE4",	wxID_FILE4	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_FILE5",	wxID_FILE5	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_FILE6",	wxID_FILE6	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_FILE7",	wxID_FILE7	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_FILE8",	wxID_FILE8	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_FILE9",	wxID_FILE9	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_OK",	wxID_OK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_CANCEL",	wxID_CANCEL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_APPLY",	wxID_APPLY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_YES",	wxID_YES	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_NO",	wxID_NO	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_STATIC",	wxID_STATIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_FORWARD",	wxID_FORWARD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_BACKWARD",	wxID_BACKWARD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_DEFAULT",	wxID_DEFAULT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_MORE",	wxID_MORE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_SETUP",	wxID_SETUP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_RESET",	wxID_RESET	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_CONTEXT_HELP",	wxID_CONTEXT_HELP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_YESTOALL",	wxID_YESTOALL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_NOTOALL",	wxID_NOTOALL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_ABORT",	wxID_ABORT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_RETRY",	wxID_RETRY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_IGNORE",	wxID_IGNORE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_ADD",	wxID_ADD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_REMOVE",	wxID_REMOVE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_UP",	wxID_UP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_DOWN",	wxID_DOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HOME",	wxID_HOME	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_REFRESH",	wxID_REFRESH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_STOP",	wxID_STOP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_INDEX",	wxID_INDEX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_BOLD",	wxID_BOLD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_ITALIC",	wxID_ITALIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_JUSTIFY_CENTER",	wxID_JUSTIFY_CENTER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_JUSTIFY_FILL",	wxID_JUSTIFY_FILL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_JUSTIFY_RIGHT",	wxID_JUSTIFY_RIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_JUSTIFY_LEFT",	wxID_JUSTIFY_LEFT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_UNDERLINE",	wxID_UNDERLINE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_INDENT",	wxID_INDENT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_UNINDENT",	wxID_UNINDENT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_ZOOM_100",	wxID_ZOOM_100	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_ZOOM_FIT",	wxID_ZOOM_FIT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_ZOOM_IN",	wxID_ZOOM_IN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_ZOOM_OUT",	wxID_ZOOM_OUT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_UNDELETE",	wxID_UNDELETE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_REVERT_TO_SAVED",	wxID_REVERT_TO_SAVED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_SYSTEM_MENU",	wxID_SYSTEM_MENU	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_CLOSE_FRAME",	wxID_CLOSE_FRAME	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_MOVE_FRAME",	wxID_MOVE_FRAME	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_RESIZE_FRAME",	wxID_RESIZE_FRAME	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_MAXIMIZE_FRAME",	wxID_MAXIMIZE_FRAME	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_ICONIZE_FRAME",	wxID_ICONIZE_FRAME	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_RESTORE_FRAME",	wxID_RESTORE_FRAME	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_FILEDLGG",	wxID_FILEDLGG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HIGHEST",	wxID_HIGHEST	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDEFAULT",	wxDEFAULT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDECORATIVE",	wxDECORATIVE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxROMAN",	wxROMAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSCRIPT",	wxSCRIPT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSWISS",	wxSWISS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMODERN",	wxMODERN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTELETYPE",	wxTELETYPE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxVARIABLE",	wxVARIABLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFIXED",	wxFIXED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNORMAL",	wxNORMAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIGHT",	wxLIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBOLD",	wxBOLD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxITALIC",	wxITALIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSLANT",	wxSLANT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOLID",	wxSOLID	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDOT",	wxDOT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLONG_DASH",	wxLONG_DASH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSHORT_DASH",	wxSHORT_DASH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDOT_DASH",	wxDOT_DASH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxUSER_DASH",	wxUSER_DASH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTRANSPARENT",	wxTRANSPARENT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSTIPPLE_MASK_OPAQUE",	wxSTIPPLE_MASK_OPAQUE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSTIPPLE_MASK",	wxSTIPPLE_MASK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSTIPPLE",	wxSTIPPLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBDIAGONAL_HATCH",	wxBDIAGONAL_HATCH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCROSSDIAG_HATCH",	wxCROSSDIAG_HATCH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFDIAGONAL_HATCH",	wxFDIAGONAL_HATCH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCROSS_HATCH",	wxCROSS_HATCH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHORIZONTAL_HATCH",	wxHORIZONTAL_HATCH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxVERTICAL_HATCH",	wxVERTICAL_HATCH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFIRST_HATCH",	wxFIRST_HATCH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLAST_HATCH",	wxLAST_HATCH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxJOIN_BEVEL",	wxJOIN_BEVEL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxJOIN_MITER",	wxJOIN_MITER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxJOIN_ROUND",	wxJOIN_ROUND	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCAP_ROUND",	wxCAP_ROUND	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCAP_PROJECTING",	wxCAP_PROJECTING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCAP_BUTT",	wxCAP_BUTT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxUPDATE_UI_NONE",	wxUPDATE_UI_NONE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxUPDATE_UI_RECURSE",	wxUPDATE_UI_RECURSE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxUPDATE_UI_FROMIDLE",	wxUPDATE_UI_FROMIDLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCOND_NO_ERROR",	wxCOND_NO_ERROR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCOND_INVALID",	wxCOND_INVALID	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCOND_TIMEOUT",	wxCOND_TIMEOUT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCOND_MISC_ERROR",	wxCOND_MISC_ERROR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFULLSCREEN_NOMENUBAR",	wxFULLSCREEN_NOMENUBAR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFULLSCREEN_NOTOOLBAR",	wxFULLSCREEN_NOTOOLBAR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFULLSCREEN_NOSTATUSBAR",	wxFULLSCREEN_NOSTATUSBAR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFULLSCREEN_NOBORDER",	wxFULLSCREEN_NOBORDER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFULLSCREEN_NOCAPTION",	wxFULLSCREEN_NOCAPTION	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFULLSCREEN_ALL",	wxFULLSCREEN_ALL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxIMAGE_RESOLUTION_INCHES",	wxIMAGE_RESOLUTION_INCHES	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxIMAGE_RESOLUTION_CM",	wxIMAGE_RESOLUTION_CM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINTER_NO_ERROR",	wxPRINTER_NO_ERROR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINTER_CANCELLED",	wxPRINTER_CANCELLED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINTER_ERROR",	wxPRINTER_ERROR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxENDIAN_INVALID",	wxENDIAN_INVALID	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxENDIAN_BIG",	wxENDIAN_BIG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxENDIAN_LITTLE",	wxENDIAN_LITTLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxENDIAN_PDP",	wxENDIAN_PDP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxENDIAN_MAX",	wxENDIAN_MAX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSPLIT_HORIZONTAL",	wxSPLIT_HORIZONTAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSPLIT_VERTICAL",	wxSPLIT_VERTICAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDragError",	wxDragError	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDragNone",	wxDragNone	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDragCopy",	wxDragCopy	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDragMove",	wxDragMove	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDragLink",	wxDragLink	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDragCancel",	wxDragCancel	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCAL_BORDER_NONE",	wxCAL_BORDER_NONE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCAL_BORDER_SQUARE",	wxCAL_BORDER_SQUARE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCAL_BORDER_ROUND",	wxCAL_BORDER_ROUND	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDUPLEX_SIMPLEX",	wxDUPLEX_SIMPLEX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDUPLEX_HORIZONTAL",	wxDUPLEX_HORIZONTAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDUPLEX_VERTICAL",	wxDUPLEX_VERTICAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTB_HORIZONTAL",	wxTB_HORIZONTAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTB_TOP",	wxTB_TOP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTB_VERTICAL",	wxTB_VERTICAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTB_LEFT",	wxTB_LEFT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTB_3DBUTTONS",	wxTB_3DBUTTONS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTB_FLAT",	wxTB_FLAT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTB_DOCKABLE",	wxTB_DOCKABLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTB_NOICONS",	wxTB_NOICONS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTB_TEXT",	wxTB_TEXT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTB_NODIVIDER",	wxTB_NODIVIDER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTB_NOALIGN",	wxTB_NOALIGN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTB_HORZ_LAYOUT",	wxTB_HORZ_LAYOUT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTB_HORZ_TEXT",	wxTB_HORZ_TEXT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTB_NO_TOOLTIPS",	wxTB_NO_TOOLTIPS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTB_BOTTOM",	wxTB_BOTTOM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTB_RIGHT",	wxTB_RIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPATH_NATIVE",	wxPATH_NATIVE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPATH_UNIX",	wxPATH_UNIX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPATH_BEOS",	wxPATH_BEOS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPATH_MAC",	wxPATH_MAC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPATH_DOS",	wxPATH_DOS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPATH_WIN",	wxPATH_WIN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPATH_OS2",	wxPATH_OS2	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPATH_VMS",	wxPATH_VMS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPATH_MAX",	wxPATH_MAX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxClientData_None",	wxClientData_None	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxClientData_Object",	wxClientData_Object	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxClientData_Void",	wxClientData_Void	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDF_INVALID",	wxDF_INVALID	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDF_TEXT",	wxDF_TEXT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDF_BITMAP",	wxDF_BITMAP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDF_METAFILE",	wxDF_METAFILE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDF_SYLK",	wxDF_SYLK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDF_DIF",	wxDF_DIF	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDF_TIFF",	wxDF_TIFF	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDF_OEMTEXT",	wxDF_OEMTEXT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDF_DIB",	wxDF_DIB	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDF_PALETTE",	wxDF_PALETTE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDF_PENDATA",	wxDF_PENDATA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDF_RIFF",	wxDF_RIFF	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDF_WAVE",	wxDF_WAVE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDF_UNICODETEXT",	wxDF_UNICODETEXT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDF_ENHMETAFILE",	wxDF_ENHMETAFILE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDF_FILENAME",	wxDF_FILENAME	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDF_LOCALE",	wxDF_LOCALE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDF_PRIVATE",	wxDF_PRIVATE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDF_HTML",	wxDF_HTML	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDF_MAX",	wxDF_MAX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTreeItemIcon_Normal",	wxTreeItemIcon_Normal	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTreeItemIcon_Selected",	wxTreeItemIcon_Selected	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTreeItemIcon_Expanded",	wxTreeItemIcon_Expanded	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTreeItemIcon_SelectedExpanded",	wxTreeItemIcon_SelectedExpanded	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTreeItemIcon_Max",	wxTreeItemIcon_Max	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOS_UNKNOWN",	wxOS_UNKNOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOS_MAC_OS",	wxOS_MAC_OS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOS_MAC_OSX_DARWIN",	wxOS_MAC_OSX_DARWIN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOS_MAC",	wxOS_MAC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOS_WINDOWS_9X",	wxOS_WINDOWS_9X	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOS_WINDOWS_NT",	wxOS_WINDOWS_NT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOS_WINDOWS_MICRO",	wxOS_WINDOWS_MICRO	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOS_WINDOWS_CE",	wxOS_WINDOWS_CE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOS_WINDOWS",	wxOS_WINDOWS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOS_UNIX_LINUX",	wxOS_UNIX_LINUX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOS_UNIX_FREEBSD",	wxOS_UNIX_FREEBSD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOS_UNIX_OPENBSD",	wxOS_UNIX_OPENBSD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOS_UNIX_NETBSD",	wxOS_UNIX_NETBSD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOS_UNIX_SOLARIS",	wxOS_UNIX_SOLARIS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOS_UNIX_AIX",	wxOS_UNIX_AIX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOS_UNIX_HPUX",	wxOS_UNIX_HPUX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOS_UNIX",	wxOS_UNIX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOS_DOS",	wxOS_DOS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOS_OS2",	wxOS_OS2	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMOD_NONE",	wxMOD_NONE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMOD_ALT",	wxMOD_ALT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMOD_CONTROL",	wxMOD_CONTROL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMOD_ALTGR",	wxMOD_ALTGR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMOD_SHIFT",	wxMOD_SHIFT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMOD_META",	wxMOD_META	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMOD_WIN",	wxMOD_WIN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMOD_CMD",	wxMOD_CMD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMOD_ALL",	wxMOD_ALL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxXML_ELEMENT_NODE",	wxXML_ELEMENT_NODE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxXML_ATTRIBUTE_NODE",	wxXML_ATTRIBUTE_NODE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxXML_TEXT_NODE",	wxXML_TEXT_NODE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxXML_CDATA_SECTION_NODE",	wxXML_CDATA_SECTION_NODE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxXML_ENTITY_REF_NODE",	wxXML_ENTITY_REF_NODE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxXML_ENTITY_NODE",	wxXML_ENTITY_NODE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxXML_PI_NODE",	wxXML_PI_NODE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxXML_COMMENT_NODE",	wxXML_COMMENT_NODE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxXML_DOCUMENT_NODE",	wxXML_DOCUMENT_NODE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxXML_DOCUMENT_TYPE_NODE",	wxXML_DOCUMENT_TYPE_NODE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxXML_DOCUMENT_FRAG_NODE",	wxXML_DOCUMENT_FRAG_NODE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxXML_NOTATION_NODE",	wxXML_NOTATION_NODE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxXML_HTML_DOCUMENT_NODE",	wxXML_HTML_DOCUMENT_NODE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxALIGN_NOT",	wxALIGN_NOT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxALIGN_CENTER_HORIZONTAL",	wxALIGN_CENTER_HORIZONTAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxALIGN_CENTRE_HORIZONTAL",	wxALIGN_CENTRE_HORIZONTAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxALIGN_LEFT",	wxALIGN_LEFT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxALIGN_TOP",	wxALIGN_TOP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxALIGN_RIGHT",	wxALIGN_RIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxALIGN_BOTTOM",	wxALIGN_BOTTOM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxALIGN_CENTER_VERTICAL",	wxALIGN_CENTER_VERTICAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxALIGN_CENTRE_VERTICAL",	wxALIGN_CENTRE_VERTICAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxALIGN_CENTER",	wxALIGN_CENTER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxALIGN_CENTRE",	wxALIGN_CENTRE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxALIGN_MASK",	wxALIGN_MASK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCAL_HITTEST_NOWHERE",	wxCAL_HITTEST_NOWHERE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCAL_HITTEST_HEADER",	wxCAL_HITTEST_HEADER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCAL_HITTEST_DAY",	wxCAL_HITTEST_DAY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCAL_HITTEST_INCMONTH",	wxCAL_HITTEST_INCMONTH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCAL_HITTEST_DECMONTH",	wxCAL_HITTEST_DECMONTH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCAL_HITTEST_SURROUNDING_WEEK",	wxCAL_HITTEST_SURROUNDING_WEEK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPROCESS_DEFAULT",	wxPROCESS_DEFAULT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPROCESS_REDIRECT",	wxPROCESS_REDIRECT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPATH_MKDIR_FULL",	wxPATH_MKDIR_FULL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHTML_FIND_EXACT",	wxHTML_FIND_EXACT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHTML_FIND_NEAREST_BEFORE",	wxHTML_FIND_NEAREST_BEFORE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHTML_FIND_NEAREST_AFTER",	wxHTML_FIND_NEAREST_AFTER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLeft",	wxLeft	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTop",	wxTop	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxRight",	wxRight	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBottom",	wxBottom	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxWidth",	wxWidth	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHeight",	wxHeight	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCentre",	wxCentre	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCenter",	wxCenter	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCentreX",	wxCentreX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCentreY",	wxCentreY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPROTO_NOERR",	wxPROTO_NOERR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPROTO_NETERR",	wxPROTO_NETERR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPROTO_PROTERR",	wxPROTO_PROTERR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPROTO_CONNERR",	wxPROTO_CONNERR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPROTO_INVVAL",	wxPROTO_INVVAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPROTO_NOHNDLR",	wxPROTO_NOHNDLR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPROTO_NOFILE",	wxPROTO_NOFILE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPROTO_ABRT",	wxPROTO_ABRT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPROTO_RCNCT",	wxPROTO_RCNCT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPROTO_STREAMING",	wxPROTO_STREAMING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLOCALE_CAT_NUMBER",	wxLOCALE_CAT_NUMBER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLOCALE_CAT_DATE",	wxLOCALE_CAT_DATE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLOCALE_CAT_MONEY",	wxLOCALE_CAT_MONEY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLOCALE_CAT_MAX",	wxLOCALE_CAT_MAX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxKILL_OK",	wxKILL_OK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxKILL_BAD_SIGNAL",	wxKILL_BAD_SIGNAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxKILL_ACCESS_DENIED",	wxKILL_ACCESS_DENIED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxKILL_NO_PROCESS",	wxKILL_NO_PROCESS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxKILL_ERROR",	wxKILL_ERROR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_PANEL",	wxID_HTML_PANEL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_BACK",	wxID_HTML_BACK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_FORWARD",	wxID_HTML_FORWARD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_UPNODE",	wxID_HTML_UPNODE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_UP",	wxID_HTML_UP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_DOWN",	wxID_HTML_DOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_PRINT",	wxID_HTML_PRINT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_OPENFILE",	wxID_HTML_OPENFILE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_OPTIONS",	wxID_HTML_OPTIONS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_BOOKMARKSLIST",	wxID_HTML_BOOKMARKSLIST	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_BOOKMARKSADD",	wxID_HTML_BOOKMARKSADD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_BOOKMARKSREMOVE",	wxID_HTML_BOOKMARKSREMOVE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_TREECTRL",	wxID_HTML_TREECTRL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_INDEXPAGE",	wxID_HTML_INDEXPAGE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_INDEXLIST",	wxID_HTML_INDEXLIST	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_INDEXTEXT",	wxID_HTML_INDEXTEXT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_INDEXBUTTON",	wxID_HTML_INDEXBUTTON	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_INDEXBUTTONALL",	wxID_HTML_INDEXBUTTONALL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_NOTEBOOK",	wxID_HTML_NOTEBOOK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_SEARCHPAGE",	wxID_HTML_SEARCHPAGE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_SEARCHTEXT",	wxID_HTML_SEARCHTEXT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_SEARCHLIST",	wxID_HTML_SEARCHLIST	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_SEARCHBUTTON",	wxID_HTML_SEARCHBUTTON	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_SEARCHCHOICE",	wxID_HTML_SEARCHCHOICE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxID_HTML_COUNTINFO",	wxID_HTML_COUNTINFO	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINTBIN_DEFAULT",	wxPRINTBIN_DEFAULT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINTBIN_ONLYONE",	wxPRINTBIN_ONLYONE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINTBIN_LOWER",	wxPRINTBIN_LOWER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINTBIN_MIDDLE",	wxPRINTBIN_MIDDLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINTBIN_MANUAL",	wxPRINTBIN_MANUAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINTBIN_ENVELOPE",	wxPRINTBIN_ENVELOPE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINTBIN_ENVMANUAL",	wxPRINTBIN_ENVMANUAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINTBIN_AUTO",	wxPRINTBIN_AUTO	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINTBIN_TRACTOR",	wxPRINTBIN_TRACTOR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINTBIN_SMALLFMT",	wxPRINTBIN_SMALLFMT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINTBIN_LARGEFMT",	wxPRINTBIN_LARGEFMT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINTBIN_LARGECAPACITY",	wxPRINTBIN_LARGECAPACITY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINTBIN_CASSETTE",	wxPRINTBIN_CASSETTE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINTBIN_FORMSOURCE",	wxPRINTBIN_FORMSOURCE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINTBIN_USER",	wxPRINTBIN_USER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxITEM_SEPARATOR",	wxITEM_SEPARATOR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxITEM_NORMAL",	wxITEM_NORMAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxITEM_CHECK",	wxITEM_CHECK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxITEM_RADIO",	wxITEM_RADIO	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxITEM_MAX",	wxITEM_MAX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSEMA_NO_ERROR",	wxSEMA_NO_ERROR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSEMA_INVALID",	wxSEMA_INVALID	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSEMA_BUSY",	wxSEMA_BUSY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSEMA_TIMEOUT",	wxSEMA_TIMEOUT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSEMA_OVERFLOW",	wxSEMA_OVERFLOW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSEMA_MISC_ERROR",	wxSEMA_MISC_ERROR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMM_TEXT",	wxMM_TEXT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMM_LOMETRIC",	wxMM_LOMETRIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMM_HIMETRIC",	wxMM_HIMETRIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMM_LOENGLISH",	wxMM_LOENGLISH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMM_HIENGLISH",	wxMM_HIENGLISH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMM_TWIPS",	wxMM_TWIPS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMM_ISOTROPIC",	wxMM_ISOTROPIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMM_ANISOTROPIC",	wxMM_ANISOTROPIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMM_POINTS",	wxMM_POINTS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMM_METRIC",	wxMM_METRIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEXEC_ASYNC",	wxEXEC_ASYNC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEXEC_SYNC",	wxEXEC_SYNC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEXEC_NOHIDE",	wxEXEC_NOHIDE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEXEC_MAKE_GROUP_LEADER",	wxEXEC_MAKE_GROUP_LEADER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEXEC_NODISABLE",	wxEXEC_NODISABLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBROWSER_NEW_WINDOW",	wxBROWSER_NEW_WINDOW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxStrip_Mnemonics",	wxStrip_Mnemonics	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxStrip_Accel",	wxStrip_Accel	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxStrip_All",	wxStrip_All	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMOUSE_BTN_ANY",	wxMOUSE_BTN_ANY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMOUSE_BTN_NONE",	wxMOUSE_BTN_NONE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMOUSE_BTN_LEFT",	wxMOUSE_BTN_LEFT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMOUSE_BTN_MIDDLE",	wxMOUSE_BTN_MIDDLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMOUSE_BTN_RIGHT",	wxMOUSE_BTN_RIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxJOY_BUTTON_ANY",	wxJOY_BUTTON_ANY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxJOY_BUTTON1",	wxJOY_BUTTON1	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxJOY_BUTTON2",	wxJOY_BUTTON2	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxJOY_BUTTON3",	wxJOY_BUTTON3	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxJOY_BUTTON4",	wxJOY_BUTTON4	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxACCEL_NORMAL",	wxACCEL_NORMAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxACCEL_ALT",	wxACCEL_ALT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxACCEL_CTRL",	wxACCEL_CTRL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxACCEL_SHIFT",	wxACCEL_SHIFT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxACCEL_CMD",	wxACCEL_CMD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxUSER_ATTENTION_INFO",	wxUSER_ATTENTION_INFO	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxUSER_ATTENTION_ERROR",	wxUSER_ATTENTION_ERROR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxIMAGE_QUALITY_NORMAL",	wxIMAGE_QUALITY_NORMAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxIMAGE_QUALITY_HIGH",	wxIMAGE_QUALITY_HIGH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPNG_TYPE_COLOUR",	wxPNG_TYPE_COLOUR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPNG_TYPE_GREY",	wxPNG_TYPE_GREY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPNG_TYPE_GREY_RED",	wxPNG_TYPE_GREY_RED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFD_OPEN",	wxFD_OPEN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFD_SAVE",	wxFD_SAVE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFD_OVERWRITE_PROMPT",	wxFD_OVERWRITE_PROMPT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFD_FILE_MUST_EXIST",	wxFD_FILE_MUST_EXIST	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFD_MULTIPLE",	wxFD_MULTIPLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFD_CHANGE_DIR",	wxFD_CHANGE_DIR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFD_PREVIEW",	wxFD_PREVIEW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOPEN",	wxOPEN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSAVE",	wxSAVE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOVERWRITE_PROMPT",	wxOVERWRITE_PROMPT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFILE_MUST_EXIST",	wxFILE_MUST_EXIST	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxMULTIPLE",	wxMULTIPLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCHANGE_DIR",	wxCHANGE_DIR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_NEXT_ABOVE",	wxLIST_NEXT_ABOVE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_NEXT_ALL",	wxLIST_NEXT_ALL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_NEXT_BELOW",	wxLIST_NEXT_BELOW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_NEXT_LEFT",	wxLIST_NEXT_LEFT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_NEXT_RIGHT",	wxLIST_NEXT_RIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_RECT_BOUNDS",	wxLIST_RECT_BOUNDS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_RECT_ICON",	wxLIST_RECT_ICON	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_RECT_LABEL",	wxLIST_RECT_LABEL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_FIND_UP",	wxLIST_FIND_UP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_FIND_DOWN",	wxLIST_FIND_DOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_FIND_LEFT",	wxLIST_FIND_LEFT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_FIND_RIGHT",	wxLIST_FIND_RIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEOL_NATIVE",	wxEOL_NATIVE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEOL_UNIX",	wxEOL_UNIX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEOL_MAC",	wxEOL_MAC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEOL_DOS",	wxEOL_DOS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCAL_SUNDAY_FIRST",	wxCAL_SUNDAY_FIRST	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCAL_MONDAY_FIRST",	wxCAL_MONDAY_FIRST	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCAL_SHOW_HOLIDAYS",	wxCAL_SHOW_HOLIDAYS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCAL_NO_YEAR_CHANGE",	wxCAL_NO_YEAR_CHANGE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCAL_NO_MONTH_CHANGE",	wxCAL_NO_MONTH_CHANGE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCAL_SEQUENTIAL_MONTH_SELECTION",	wxCAL_SEQUENTIAL_MONTH_SELECTION	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCAL_SHOW_SURROUNDING_WEEKS",	wxCAL_SHOW_SURROUNDING_WEEKS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTREE_EXPAND_EXPAND",	wxTREE_EXPAND_EXPAND	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTREE_EXPAND_COLLAPSE",	wxTREE_EXPAND_COLLAPSE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTREE_EXPAND_COLLAPSE_RESET",	wxTREE_EXPAND_COLLAPSE_RESET	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTREE_EXPAND_TOGGLE",	wxTREE_EXPAND_TOGGLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSPLIT_DRAG_NONE",	wxSPLIT_DRAG_NONE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSPLIT_DRAG_DRAGGING",	wxSPLIT_DRAG_DRAGGING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSPLIT_DRAG_LEFT_DOWN",	wxSPLIT_DRAG_LEFT_DOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBK_HITTEST_NOWHERE",	wxBK_HITTEST_NOWHERE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBK_HITTEST_ONICON",	wxBK_HITTEST_ONICON	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBK_HITTEST_ONLABEL",	wxBK_HITTEST_ONLABEL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBK_HITTEST_ONITEM",	wxBK_HITTEST_ONITEM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBK_HITTEST_ONPAGE",	wxBK_HITTEST_ONPAGE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNB_HITTEST_NOWHERE",	wxNB_HITTEST_NOWHERE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNB_HITTEST_ONICON",	wxNB_HITTEST_ONICON	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNB_HITTEST_ONLABEL",	wxNB_HITTEST_ONLABEL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNB_HITTEST_ONITEM",	wxNB_HITTEST_ONITEM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNB_HITTEST_ONPAGE",	wxNB_HITTEST_ONPAGE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_INPUT_FLAG",	wxSOCKET_INPUT_FLAG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_OUTPUT_FLAG",	wxSOCKET_OUTPUT_FLAG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_CONNECTION_FLAG",	wxSOCKET_CONNECTION_FLAG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_LOST_FLAG",	wxSOCKET_LOST_FLAG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPATH_GET_VOLUME",	wxPATH_GET_VOLUME	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPATH_GET_SEPARATOR",	wxPATH_GET_SEPARATOR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFS_READ",	wxFS_READ	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFS_SEEKABLE",	wxFS_SEEKABLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCONFIG_USE_LOCAL_FILE",	wxCONFIG_USE_LOCAL_FILE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCONFIG_USE_GLOBAL_FILE",	wxCONFIG_USE_GLOBAL_FILE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCONFIG_USE_RELATIVE_PATH",	wxCONFIG_USE_RELATIVE_PATH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCONFIG_USE_NO_ESCAPE_CHARACTERS",	wxCONFIG_USE_NO_ESCAPE_CHARACTERS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCONFIG_USE_SUBDIR",	wxCONFIG_USE_SUBDIR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPLATFORM_CURRENT",	wxPLATFORM_CURRENT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPLATFORM_UNIX",	wxPLATFORM_UNIX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPLATFORM_WINDOWS",	wxPLATFORM_WINDOWS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPLATFORM_OS2",	wxPLATFORM_OS2	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPLATFORM_MAC",	wxPLATFORM_MAC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_INPUT",	wxSOCKET_INPUT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_OUTPUT",	wxSOCKET_OUTPUT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_CONNECTION",	wxSOCKET_CONNECTION	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSOCKET_LOST",	wxSOCKET_LOST	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVENT_PROPAGATE_NONE",	wxEVENT_PROPAGATE_NONE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVENT_PROPAGATE_MAX",	wxEVENT_PROPAGATE_MAX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHTML_SEL_OUT",	wxHTML_SEL_OUT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHTML_SEL_IN",	wxHTML_SEL_IN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHTML_SEL_CHANGING",	wxHTML_SEL_CHANGING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTFAMILY_DEFAULT",	wxFONTFAMILY_DEFAULT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTFAMILY_DECORATIVE",	wxFONTFAMILY_DECORATIVE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTFAMILY_ROMAN",	wxFONTFAMILY_ROMAN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTFAMILY_SCRIPT",	wxFONTFAMILY_SCRIPT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTFAMILY_SWISS",	wxFONTFAMILY_SWISS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTFAMILY_MODERN",	wxFONTFAMILY_MODERN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTFAMILY_TELETYPE",	wxFONTFAMILY_TELETYPE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTFAMILY_MAX",	wxFONTFAMILY_MAX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTFAMILY_UNKNOWN",	wxFONTFAMILY_UNKNOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHORIZONTAL",	wxHORIZONTAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxVERTICAL",	wxVERTICAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBOTH",	wxBOTH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFILE_KIND_UNKNOWN",	wxFILE_KIND_UNKNOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFILE_KIND_DISK",	wxFILE_KIND_DISK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFILE_KIND_TERMINAL",	wxFILE_KIND_TERMINAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFILE_KIND_PIPE",	wxFILE_KIND_PIPE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTEXT_ALIGNMENT_DEFAULT",	wxTEXT_ALIGNMENT_DEFAULT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTEXT_ALIGNMENT_LEFT",	wxTEXT_ALIGNMENT_LEFT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTEXT_ALIGNMENT_CENTRE",	wxTEXT_ALIGNMENT_CENTRE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTEXT_ALIGNMENT_CENTER",	wxTEXT_ALIGNMENT_CENTER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTEXT_ALIGNMENT_RIGHT",	wxTEXT_ALIGNMENT_RIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTEXT_ALIGNMENT_JUSTIFIED",	wxTEXT_ALIGNMENT_JUSTIFIED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBMP_24BPP",	wxBMP_24BPP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBMP_8BPP",	wxBMP_8BPP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBMP_8BPP_GREY",	wxBMP_8BPP_GREY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBMP_8BPP_GRAY",	wxBMP_8BPP_GRAY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBMP_8BPP_RED",	wxBMP_8BPP_RED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBMP_8BPP_PALETTE",	wxBMP_8BPP_PALETTE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBMP_4BPP",	wxBMP_4BPP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBMP_1BPP",	wxBMP_1BPP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBMP_1BPP_BW",	wxBMP_1BPP_BW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxRGN_AND",	wxRGN_AND	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxRGN_COPY",	wxRGN_COPY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxRGN_DIFF",	wxRGN_DIFF	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxRGN_OR",	wxRGN_OR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxRGN_XOR",	wxRGN_XOR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHTML_OPEN",	wxHTML_OPEN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHTML_BLOCK",	wxHTML_BLOCK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHTML_REDIRECT",	wxHTML_REDIRECT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_MOUSE_BUTTONS",	wxSYS_MOUSE_BUTTONS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_BORDER_X",	wxSYS_BORDER_X	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_BORDER_Y",	wxSYS_BORDER_Y	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_CURSOR_X",	wxSYS_CURSOR_X	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_CURSOR_Y",	wxSYS_CURSOR_Y	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_DCLICK_X",	wxSYS_DCLICK_X	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_DCLICK_Y",	wxSYS_DCLICK_Y	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_DRAG_X",	wxSYS_DRAG_X	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_DRAG_Y",	wxSYS_DRAG_Y	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_EDGE_X",	wxSYS_EDGE_X	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_EDGE_Y",	wxSYS_EDGE_Y	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_HSCROLL_ARROW_X",	wxSYS_HSCROLL_ARROW_X	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_HSCROLL_ARROW_Y",	wxSYS_HSCROLL_ARROW_Y	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_HTHUMB_X",	wxSYS_HTHUMB_X	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_ICON_X",	wxSYS_ICON_X	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_ICON_Y",	wxSYS_ICON_Y	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_ICONSPACING_X",	wxSYS_ICONSPACING_X	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_ICONSPACING_Y",	wxSYS_ICONSPACING_Y	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_WINDOWMIN_X",	wxSYS_WINDOWMIN_X	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_WINDOWMIN_Y",	wxSYS_WINDOWMIN_Y	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_SCREEN_X",	wxSYS_SCREEN_X	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_SCREEN_Y",	wxSYS_SCREEN_Y	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_FRAMESIZE_X",	wxSYS_FRAMESIZE_X	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_FRAMESIZE_Y",	wxSYS_FRAMESIZE_Y	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_SMALLICON_X",	wxSYS_SMALLICON_X	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_SMALLICON_Y",	wxSYS_SMALLICON_Y	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_HSCROLL_Y",	wxSYS_HSCROLL_Y	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_VSCROLL_X",	wxSYS_VSCROLL_X	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_VSCROLL_ARROW_X",	wxSYS_VSCROLL_ARROW_X	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_VSCROLL_ARROW_Y",	wxSYS_VSCROLL_ARROW_Y	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_VTHUMB_Y",	wxSYS_VTHUMB_Y	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_CAPTION_Y",	wxSYS_CAPTION_Y	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_MENU_Y",	wxSYS_MENU_Y	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_NETWORK_PRESENT",	wxSYS_NETWORK_PRESENT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_PENWINDOWS_PRESENT",	wxSYS_PENWINDOWS_PRESENT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_SHOW_SOUNDS",	wxSYS_SHOW_SOUNDS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_SWAP_BUTTONS",	wxSYS_SWAP_BUTTONS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTWEIGHT_NORMAL",	wxFONTWEIGHT_NORMAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTWEIGHT_LIGHT",	wxFONTWEIGHT_LIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTWEIGHT_BOLD",	wxFONTWEIGHT_BOLD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTWEIGHT_MAX",	wxFONTWEIGHT_MAX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTOOL_STYLE_BUTTON",	wxTOOL_STYLE_BUTTON	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTOOL_STYLE_SEPARATOR",	wxTOOL_STYLE_SEPARATOR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTOOL_STYLE_CONTROL",	wxTOOL_STYLE_CONTROL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHTML_SCRIPT_NORMAL",	wxHTML_SCRIPT_NORMAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHTML_SCRIPT_SUB",	wxHTML_SCRIPT_SUB	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHTML_SCRIPT_SUP",	wxHTML_SCRIPT_SUP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSHUTDOWN_POWEROFF",	wxSHUTDOWN_POWEROFF	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSHUTDOWN_REBOOT",	wxSHUTDOWN_REBOOT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_OEM_FIXED_FONT",	wxSYS_OEM_FIXED_FONT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_ANSI_FIXED_FONT",	wxSYS_ANSI_FIXED_FONT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_ANSI_VAR_FONT",	wxSYS_ANSI_VAR_FONT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_SYSTEM_FONT",	wxSYS_SYSTEM_FONT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_DEVICE_DEFAULT_FONT",	wxSYS_DEVICE_DEFAULT_FONT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_DEFAULT_PALETTE",	wxSYS_DEFAULT_PALETTE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_SYSTEM_FIXED_FONT",	wxSYS_SYSTEM_FIXED_FONT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_DEFAULT_GUI_FONT",	wxSYS_DEFAULT_GUI_FONT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_ICONTITLE_FONT",	wxSYS_ICONTITLE_FONT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxWINDOW_VARIANT_NORMAL",	wxWINDOW_VARIANT_NORMAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxWINDOW_VARIANT_SMALL",	wxWINDOW_VARIANT_SMALL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxWINDOW_VARIANT_MINI",	wxWINDOW_VARIANT_MINI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxWINDOW_VARIANT_LARGE",	wxWINDOW_VARIANT_LARGE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxWINDOW_VARIANT_MAX",	wxWINDOW_VARIANT_MAX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxXMLDOC_NONE",	wxXMLDOC_NONE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxXMLDOC_KEEP_WHITESPACE_NODES",	wxXMLDOC_KEEP_WHITESPACE_NODES	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLayout_Default",	wxLayout_Default	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLayout_LeftToRight",	wxLayout_LeftToRight	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLayout_RightToLeft",	wxLayout_RightToLeft	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_ALIGN_DEFAULT",	wxLIST_ALIGN_DEFAULT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_ALIGN_LEFT",	wxLIST_ALIGN_LEFT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_ALIGN_TOP",	wxLIST_ALIGN_TOP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLIST_ALIGN_SNAP_TO_GRID",	wxLIST_ALIGN_SNAP_TO_GRID	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLOCALE_THOUSANDS_SEP",	wxLOCALE_THOUSANDS_SEP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLOCALE_DECIMAL_POINT",	wxLOCALE_DECIMAL_POINT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLOCALE_LOAD_DEFAULT",	wxLOCALE_LOAD_DEFAULT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLOCALE_CONV_ENCODING",	wxLOCALE_CONV_ENCODING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_SCREEN_NONE",	wxSYS_SCREEN_NONE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_SCREEN_TINY",	wxSYS_SCREEN_TINY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_SCREEN_PDA",	wxSYS_SCREEN_PDA	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_SCREEN_SMALL",	wxSYS_SCREEN_SMALL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_SCREEN_DESKTOP",	wxSYS_SCREEN_DESKTOP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINT_MODE_NONE",	wxPRINT_MODE_NONE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINT_MODE_PREVIEW",	wxPRINT_MODE_PREVIEW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINT_MODE_FILE",	wxPRINT_MODE_FILE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINT_MODE_PRINTER",	wxPRINT_MODE_PRINTER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxPRINT_MODE_STREAM",	wxPRINT_MODE_STREAM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSTREAM_NO_ERROR",	wxSTREAM_NO_ERROR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSTREAM_EOF",	wxSTREAM_EOF	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSTREAM_WRITE_ERROR",	wxSTREAM_WRITE_ERROR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSTREAM_READ_ERROR",	wxSTREAM_READ_ERROR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTOOL_TOP",	wxTOOL_TOP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTOOL_BOTTOM",	wxTOOL_BOTTOM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTOOL_LEFT",	wxTOOL_LEFT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTOOL_RIGHT",	wxTOOL_RIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCONVERT_STRICT",	wxCONVERT_STRICT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCONVERT_SUBSTITUTE",	wxCONVERT_SUBSTITUTE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_SCROLLBAR",	wxSYS_COLOUR_SCROLLBAR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_BACKGROUND",	wxSYS_COLOUR_BACKGROUND	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_DESKTOP",	wxSYS_COLOUR_DESKTOP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_ACTIVECAPTION",	wxSYS_COLOUR_ACTIVECAPTION	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_INACTIVECAPTION",	wxSYS_COLOUR_INACTIVECAPTION	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_MENU",	wxSYS_COLOUR_MENU	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_WINDOW",	wxSYS_COLOUR_WINDOW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_WINDOWFRAME",	wxSYS_COLOUR_WINDOWFRAME	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_MENUTEXT",	wxSYS_COLOUR_MENUTEXT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_WINDOWTEXT",	wxSYS_COLOUR_WINDOWTEXT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_CAPTIONTEXT",	wxSYS_COLOUR_CAPTIONTEXT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_ACTIVEBORDER",	wxSYS_COLOUR_ACTIVEBORDER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_INACTIVEBORDER",	wxSYS_COLOUR_INACTIVEBORDER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_APPWORKSPACE",	wxSYS_COLOUR_APPWORKSPACE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_HIGHLIGHT",	wxSYS_COLOUR_HIGHLIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_HIGHLIGHTTEXT",	wxSYS_COLOUR_HIGHLIGHTTEXT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_BTNFACE",	wxSYS_COLOUR_BTNFACE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_3DFACE",	wxSYS_COLOUR_3DFACE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_BTNSHADOW",	wxSYS_COLOUR_BTNSHADOW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_3DSHADOW",	wxSYS_COLOUR_3DSHADOW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_GRAYTEXT",	wxSYS_COLOUR_GRAYTEXT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_BTNTEXT",	wxSYS_COLOUR_BTNTEXT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_INACTIVECAPTIONTEXT",	wxSYS_COLOUR_INACTIVECAPTIONTEXT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_BTNHIGHLIGHT",	wxSYS_COLOUR_BTNHIGHLIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_BTNHILIGHT",	wxSYS_COLOUR_BTNHILIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_3DHIGHLIGHT",	wxSYS_COLOUR_3DHIGHLIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_3DHILIGHT",	wxSYS_COLOUR_3DHILIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_3DDKSHADOW",	wxSYS_COLOUR_3DDKSHADOW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_3DLIGHT",	wxSYS_COLOUR_3DLIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_INFOTEXT",	wxSYS_COLOUR_INFOTEXT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_INFOBK",	wxSYS_COLOUR_INFOBK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_LISTBOX",	wxSYS_COLOUR_LISTBOX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_HOTLIGHT",	wxSYS_COLOUR_HOTLIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_GRADIENTACTIVECAPTION",	wxSYS_COLOUR_GRADIENTACTIVECAPTION	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_GRADIENTINACTIVECAPTION",	wxSYS_COLOUR_GRADIENTINACTIVECAPTION	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_MENUHILIGHT",	wxSYS_COLOUR_MENUHILIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_MENUBAR",	wxSYS_COLOUR_MENUBAR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSYS_COLOUR_MAX",	wxSYS_COLOUR_MAX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxKILL_NOCHILDREN",	wxKILL_NOCHILDREN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxKILL_CHILDREN",	wxKILL_CHILDREN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxANIM_UNSPECIFIED",	wxANIM_UNSPECIFIED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxANIM_DONOTREMOVE",	wxANIM_DONOTREMOVE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxANIM_TOBACKGROUND",	wxANIM_TOBACKGROUND	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxANIM_TOPREVIOUS",	wxANIM_TOPREVIOUS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSTREAM_PROTOCOL",	wxSTREAM_PROTOCOL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSTREAM_MIMETYPE",	wxSTREAM_MIMETYPE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSTREAM_ENCODING",	wxSTREAM_ENCODING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSTREAM_FILEEXT",	wxSTREAM_FILEEXT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTSTYLE_NORMAL",	wxFONTSTYLE_NORMAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTSTYLE_ITALIC",	wxFONTSTYLE_ITALIC	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTSTYLE_SLANT",	wxFONTSTYLE_SLANT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFONTSTYLE_MAX",	wxFONTSTYLE_MAX	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_IDLE",	wxEVT_IDLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_COL_DRAGGING",	wxEVT_COMMAND_LIST_COL_DRAGGING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SOCKET",	wxEVT_SOCKET	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_LEFT_DOWN",	wxEVT_LEFT_DOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SCROLLWIN_PAGEUP",	wxEVT_SCROLLWIN_PAGEUP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_BEGIN_DRAG",	wxEVT_COMMAND_LIST_BEGIN_DRAG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TEXT_PASTE",	wxEVT_COMMAND_TEXT_PASTE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_SPINCTRL_UPDATED",	wxEVT_COMMAND_SPINCTRL_UPDATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SCROLL_THUMBRELEASE",	wxEVT_SCROLL_THUMBRELEASE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_LEFT_DCLICK",	wxEVT_LEFT_DCLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_CHECKLISTBOX_TOGGLED",	wxEVT_COMMAND_CHECKLISTBOX_TOGGLED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SCROLL_BOTTOM",	wxEVT_SCROLL_BOTTOM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_NC_MOTION",	wxEVT_NC_MOTION	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_ITEM_EXPANDED",	wxEVT_COMMAND_TREE_ITEM_EXPANDED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_END_PROCESS",	wxEVT_END_PROCESS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_TASKBAR_LEFT_DOWN",	wxEVT_TASKBAR_LEFT_DOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_TASKBAR_RIGHT_UP",	wxEVT_TASKBAR_RIGHT_UP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_ENTER_WINDOW",	wxEVT_ENTER_WINDOW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_MIDDLE_DOWN",	wxEVT_MIDDLE_DOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_CACHE_HINT",	wxEVT_COMMAND_LIST_CACHE_HINT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SCROLL_PAGEUP",	wxEVT_SCROLL_PAGEUP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_NC_PAINT",	wxEVT_NC_PAINT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_INIT_DIALOG",	wxEVT_INIT_DIALOG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_KILL_FOCUS",	wxEVT_KILL_FOCUS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_NC_LEFT_DOWN",	wxEVT_NC_LEFT_DOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_NC_RIGHT_DOWN",	wxEVT_NC_RIGHT_DOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_QUERY_END_SESSION",	wxEVT_QUERY_END_SESSION	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_ITEM_EXPANDING",	wxEVT_COMMAND_TREE_ITEM_EXPANDING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_ACTIVATE",	wxEVT_ACTIVATE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SCROLL_THUMBTRACK",	wxEVT_SCROLL_THUMBTRACK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_BEGIN_RDRAG",	wxEVT_COMMAND_LIST_BEGIN_RDRAG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_COMBOBOX_SELECTED",	wxEVT_COMMAND_COMBOBOX_SELECTED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_MODIFIED",	wxEVT_STC_MODIFIED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_KEY_DOWN",	wxEVT_COMMAND_TREE_KEY_DOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_CHILD_FOCUS",	wxEVT_CHILD_FOCUS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_USERLISTSELECTION",	wxEVT_STC_USERLISTSELECTION	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_DRAW_ITEM",	wxEVT_DRAW_ITEM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_MIDDLE_UP",	wxEVT_MIDDLE_UP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_ROMODIFYATTEMPT",	wxEVT_STC_ROMODIFYATTEMPT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_NC_LEAVE_WINDOW",	wxEVT_NC_LEAVE_WINDOW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SCROLLWIN_THUMBTRACK",	wxEVT_SCROLLWIN_THUMBTRACK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_END_DRAG",	wxEVT_COMMAND_TREE_END_DRAG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TOOL_ENTER",	wxEVT_COMMAND_TOOL_ENTER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_CHAR",	wxEVT_CHAR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_ITEM_COLLAPSING",	wxEVT_COMMAND_TREE_ITEM_COLLAPSING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_KILL_FOCUS",	wxEVT_COMMAND_KILL_FOCUS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SET_CURSOR",	wxEVT_SET_CURSOR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_SLIDER_UPDATED",	wxEVT_COMMAND_SLIDER_UPDATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_NC_RIGHT_UP",	wxEVT_NC_RIGHT_UP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_ITEM_MIDDLE_CLICK",	wxEVT_COMMAND_LIST_ITEM_MIDDLE_CLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_END_SESSION",	wxEVT_END_SESSION	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_URIDROPPED",	wxEVT_STC_URIDROPPED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_MOTION",	wxEVT_MOTION	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_KEY",	wxEVT_STC_KEY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_ENTER",	wxEVT_COMMAND_ENTER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SCROLL_TOP",	wxEVT_SCROLL_TOP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_SET_INFO",	wxEVT_COMMAND_TREE_SET_INFO	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_DESTROY",	wxEVT_DESTROY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SETTING_CHANGED",	wxEVT_SETTING_CHANGED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_UPDATEUI",	wxEVT_STC_UPDATEUI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_CHOICE_SELECTED",	wxEVT_COMMAND_CHOICE_SELECTED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_TASKBAR_RIGHT_DCLICK",	wxEVT_TASKBAR_RIGHT_DCLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_BEGIN_LABEL_EDIT",	wxEVT_COMMAND_LIST_BEGIN_LABEL_EDIT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TOGGLEBUTTON_CLICKED",	wxEVT_COMMAND_TOGGLEBUTTON_CLICKED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_DOUBLECLICK",	wxEVT_STC_DOUBLECLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_NC_ENTER_WINDOW",	wxEVT_NC_ENTER_WINDOW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_DELETE_ITEM",	wxEVT_COMMAND_LIST_DELETE_ITEM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_NC_MIDDLE_UP",	wxEVT_NC_MIDDLE_UP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_DO_DROP",	wxEVT_STC_DO_DROP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_ITEM_GETTOOLTIP",	wxEVT_COMMAND_TREE_ITEM_GETTOOLTIP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SCROLL_LINEUP",	wxEVT_SCROLL_LINEUP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_JOY_BUTTON_DOWN",	wxEVT_JOY_BUTTON_DOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_INSERT_ITEM",	wxEVT_COMMAND_LIST_INSERT_ITEM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RIGHT_DCLICK",	wxEVT_COMMAND_RIGHT_DCLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_CONTEXT_MENU",	wxEVT_CONTEXT_MENU	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_DISPLAY_CHANGED",	wxEVT_DISPLAY_CHANGED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_VLBOX_SELECTED",	wxEVT_COMMAND_VLBOX_SELECTED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_KEY_UP",	wxEVT_KEY_UP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_PALETTE_CHANGED",	wxEVT_PALETTE_CHANGED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_SPLITTER_UNSPLIT",	wxEVT_COMMAND_SPLITTER_UNSPLIT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_ITEM_MENU",	wxEVT_COMMAND_TREE_ITEM_MENU	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_NC_MIDDLE_DCLICK",	wxEVT_NC_MIDDLE_DCLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TOOL_RCLICKED",	wxEVT_COMMAND_TOOL_RCLICKED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_MENU_HIGHLIGHT",	wxEVT_MENU_HIGHLIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_UPDATE_UI",	wxEVT_UPDATE_UI	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_END_LABEL_EDIT",	wxEVT_COMMAND_LIST_END_LABEL_EDIT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMPARE_ITEM",	wxEVT_COMPARE_ITEM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_PAINTED",	wxEVT_STC_PAINTED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_CALENDAR_WEEKDAY_CLICKED",	wxEVT_CALENDAR_WEEKDAY_CLICKED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_CHAR_HOOK",	wxEVT_CHAR_HOOK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_CALENDAR_YEAR_CHANGED",	wxEVT_CALENDAR_YEAR_CHANGED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_STATE_IMAGE_CLICK",	wxEVT_COMMAND_TREE_STATE_IMAGE_CLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SET_FOCUS",	wxEVT_SET_FOCUS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_CHANGE",	wxEVT_STC_CHANGE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TEXT_ENTER",	wxEVT_COMMAND_TEXT_ENTER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_RIGHT_UP",	wxEVT_RIGHT_UP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_MOUSEWHEEL",	wxEVT_MOUSEWHEEL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_ITEM_MIDDLE_CLICK",	wxEVT_COMMAND_TREE_ITEM_MIDDLE_CLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_USER_FIRST",	wxEVT_USER_FIRST	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_HTML_CELL_HOVER",	wxEVT_COMMAND_HTML_CELL_HOVER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_NC_RIGHT_DCLICK",	wxEVT_NC_RIGHT_DCLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_MOVING",	wxEVT_MOVING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_COL_BEGIN_DRAG",	wxEVT_COMMAND_LIST_COL_BEGIN_DRAG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_RIGHT_DOWN",	wxEVT_RIGHT_DOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_MAXIMIZE",	wxEVT_MAXIMIZE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_NC_LEFT_DCLICK",	wxEVT_NC_LEFT_DCLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_CALENDAR_SEL_CHANGED",	wxEVT_CALENDAR_SEL_CHANGED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_FIRST",	wxEVT_FIRST	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_END_LABEL_EDIT",	wxEVT_COMMAND_TREE_END_LABEL_EDIT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_SPLITTER_SASH_POS_CHANGING",	wxEVT_COMMAND_SPLITTER_SASH_POS_CHANGING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_SAVEPOINTLEFT",	wxEVT_STC_SAVEPOINTLEFT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_DRAG_OVER",	wxEVT_STC_DRAG_OVER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_STYLENEEDED",	wxEVT_STC_STYLENEEDED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_AUTOCOMP_SELECTION",	wxEVT_STC_AUTOCOMP_SELECTION	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_NC_MIDDLE_DOWN",	wxEVT_NC_MIDDLE_DOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_SEL_CHANGING",	wxEVT_COMMAND_TREE_SEL_CHANGING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_ICONIZE",	wxEVT_ICONIZE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_KEY_DOWN",	wxEVT_COMMAND_LIST_KEY_DOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_NC_LEFT_UP",	wxEVT_NC_LEFT_UP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_DWELLEND",	wxEVT_STC_DWELLEND	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_NAVIGATION_KEY",	wxEVT_NAVIGATION_KEY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SIZING",	wxEVT_SIZING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_CALENDAR_MONTH_CHANGED",	wxEVT_CALENDAR_MONTH_CHANGED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_SCROLLBAR_UPDATED",	wxEVT_COMMAND_SCROLLBAR_UPDATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LEFT_DCLICK",	wxEVT_COMMAND_LEFT_DCLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_ITEM_ACTIVATED",	wxEVT_COMMAND_TREE_ITEM_ACTIVATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_DETAILED_HELP",	wxEVT_DETAILED_HELP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_TASKBAR_RIGHT_DOWN",	wxEVT_TASKBAR_RIGHT_DOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_CREATE",	wxEVT_CREATE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_START_DRAG",	wxEVT_STC_START_DRAG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_PAINT_ICON",	wxEVT_PAINT_ICON	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_BEGIN_RDRAG",	wxEVT_COMMAND_TREE_BEGIN_RDRAG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_RIGHT_DCLICK",	wxEVT_RIGHT_DCLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_NULL",	wxEVT_NULL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RADIOBUTTON_SELECTED",	wxEVT_COMMAND_RADIOBUTTON_SELECTED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_HTML_CELL_CLICKED",	wxEVT_COMMAND_HTML_CELL_CLICKED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SCROLLWIN_BOTTOM",	wxEVT_SCROLLWIN_BOTTOM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_MOVE",	wxEVT_MOVE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SCROLL_LINEDOWN",	wxEVT_SCROLL_LINEDOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TEXT_CUT",	wxEVT_COMMAND_TEXT_CUT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LEFT_CLICK",	wxEVT_COMMAND_LEFT_CLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_COL_RIGHT_CLICK",	wxEVT_COMMAND_LIST_COL_RIGHT_CLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_ITEM_DESELECTED",	wxEVT_COMMAND_LIST_ITEM_DESELECTED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SCROLL_CHANGED",	wxEVT_SCROLL_CHANGED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_BEGIN_LABEL_EDIT",	wxEVT_COMMAND_TREE_BEGIN_LABEL_EDIT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED",	wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_DROP_FILES",	wxEVT_DROP_FILES	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_SEL_CHANGED",	wxEVT_COMMAND_TREE_SEL_CHANGED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_HOTSPOT_DCLICK",	wxEVT_STC_HOTSPOT_DCLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TEXT_MAXLEN",	wxEVT_COMMAND_TEXT_MAXLEN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_CALENDAR_DOUBLECLICKED",	wxEVT_CALENDAR_DOUBLECLICKED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SYS_COLOUR_CHANGED",	wxEVT_SYS_COLOUR_CHANGED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_JOY_ZMOVE",	wxEVT_JOY_ZMOVE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SCROLLWIN_PAGEDOWN",	wxEVT_SCROLLWIN_PAGEDOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_SPLITTER_SASH_POS_CHANGED",	wxEVT_COMMAND_SPLITTER_SASH_POS_CHANGED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_JOY_BUTTON_UP",	wxEVT_JOY_BUTTON_UP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_CLOSE_WINDOW",	wxEVT_CLOSE_WINDOW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_MIDDLE_DCLICK",	wxEVT_MIDDLE_DCLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_MENU_CLOSE",	wxEVT_MENU_CLOSE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_CHECKBOX_CLICKED",	wxEVT_COMMAND_CHECKBOX_CLICKED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_ITEM_COLLAPSED",	wxEVT_COMMAND_TREE_ITEM_COLLAPSED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_MEASURE_ITEM",	wxEVT_MEASURE_ITEM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_COL_END_DRAG",	wxEVT_COMMAND_LIST_COL_END_DRAG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_HIBERNATE",	wxEVT_HIBERNATE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SCROLLWIN_THUMBRELEASE",	wxEVT_SCROLLWIN_THUMBRELEASE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_MENU_SELECTED",	wxEVT_COMMAND_MENU_SELECTED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_ITEM_RIGHT_CLICK",	wxEVT_COMMAND_TREE_ITEM_RIGHT_CLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_NEEDSHOWN",	wxEVT_STC_NEEDSHOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_MENU_OPEN",	wxEVT_MENU_OPEN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SIZE",	wxEVT_SIZE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_CALLTIP_CLICK",	wxEVT_STC_CALLTIP_CLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_SET_FOCUS",	wxEVT_COMMAND_SET_FOCUS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_MOUSE_CAPTURE_CHANGED",	wxEVT_MOUSE_CAPTURE_CHANGED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_TASKBAR_LEFT_UP",	wxEVT_TASKBAR_LEFT_UP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_KEY_DOWN",	wxEVT_KEY_DOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SCROLLWIN_LINEDOWN",	wxEVT_SCROLLWIN_LINEDOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_MOUSE_CAPTURE_LOST",	wxEVT_MOUSE_CAPTURE_LOST	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_DELETE_ITEM",	wxEVT_COMMAND_TREE_DELETE_ITEM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_ITEM_ACTIVATED",	wxEVT_COMMAND_LIST_ITEM_ACTIVATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_HELP",	wxEVT_HELP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TEXT_UPDATED",	wxEVT_COMMAND_TEXT_UPDATED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_GET_INFO",	wxEVT_COMMAND_TREE_GET_INFO	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_DELETE_ALL_ITEMS",	wxEVT_COMMAND_LIST_DELETE_ALL_ITEMS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_JOY_MOVE",	wxEVT_JOY_MOVE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_HTML_LINK_CLICKED",	wxEVT_COMMAND_HTML_LINK_CLICKED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RIGHT_CLICK",	wxEVT_COMMAND_RIGHT_CLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SHOW",	wxEVT_SHOW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_TASKBAR_MOVE",	wxEVT_TASKBAR_MOVE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_CALENDAR_DAY_CHANGED",	wxEVT_CALENDAR_DAY_CHANGED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_ERASE_BACKGROUND",	wxEVT_ERASE_BACKGROUND	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SCROLL_PAGEDOWN",	wxEVT_SCROLL_PAGEDOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TEXT_URL",	wxEVT_COMMAND_TEXT_URL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_CHARADDED",	wxEVT_STC_CHARADDED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_TIMER",	wxEVT_TIMER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_MACRORECORD",	wxEVT_STC_MACRORECORD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_ITEM_SELECTED",	wxEVT_COMMAND_LIST_ITEM_SELECTED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_DATE_CHANGED",	wxEVT_DATE_CHANGED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_COL_CLICK",	wxEVT_COMMAND_LIST_COL_CLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_SPLITTER_DOUBLECLICKED",	wxEVT_COMMAND_SPLITTER_DOUBLECLICKED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_SAVEPOINTREACHED",	wxEVT_STC_SAVEPOINTREACHED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_DWELLSTART",	wxEVT_STC_DWELLSTART	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_LEFT_UP",	wxEVT_LEFT_UP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_ZOOM",	wxEVT_STC_ZOOM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_BEGIN_DRAG",	wxEVT_COMMAND_TREE_BEGIN_DRAG	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SCROLLWIN_LINEUP",	wxEVT_SCROLLWIN_LINEUP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_ITEM_RIGHT_CLICK",	wxEVT_COMMAND_LIST_ITEM_RIGHT_CLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LISTBOX_DOUBLECLICKED",	wxEVT_COMMAND_LISTBOX_DOUBLECLICKED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_ITEM_FOCUSED",	wxEVT_COMMAND_LIST_ITEM_FOCUSED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TEXT_COPY",	wxEVT_COMMAND_TEXT_COPY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_LEAVE_WINDOW",	wxEVT_LEAVE_WINDOW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_PAINT",	wxEVT_PAINT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_QUERY_NEW_PALETTE",	wxEVT_QUERY_NEW_PALETTE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_BUTTON_CLICKED",	wxEVT_COMMAND_BUTTON_CLICKED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_HOTSPOT_CLICK",	wxEVT_STC_HOTSPOT_CLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LISTBOX_SELECTED",	wxEVT_COMMAND_LISTBOX_SELECTED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGING",	wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_ACTIVATE_APP",	wxEVT_ACTIVATE_APP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_SCROLLWIN_TOP",	wxEVT_SCROLLWIN_TOP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_STC_MARGINCLICK",	wxEVT_STC_MARGINCLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RADIOBOX_SELECTED",	wxEVT_COMMAND_RADIOBOX_SELECTED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxEVT_TASKBAR_LEFT_DCLICK",	wxEVT_TASKBAR_LEFT_DCLICK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSP_3D",	wxSP_3D	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSP_3DSASH",	wxSP_3DSASH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSP_3DBORDER",	wxSP_3DBORDER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSP_BORDER",	wxSP_BORDER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSP_NOBORDER",	wxSP_NOBORDER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSP_NO_XP_THEME",	wxSP_NO_XP_THEME	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSP_PERMIT_UNSPLIT",	wxSP_PERMIT_UNSPLIT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSP_LIVE_UPDATE",	wxSP_LIVE_UPDATE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSP_VERTICAL",	wxSP_VERTICAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSP_HORIZONTAL",	wxSP_HORIZONTAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSP_ARROW_KEYS",	wxSP_ARROW_KEYS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSP_WRAP",	wxSP_WRAP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxGA_HORIZONTAL",	wxGA_HORIZONTAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxGA_VERTICAL",	wxGA_VERTICAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBU_LEFT",	wxBU_LEFT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBU_TOP",	wxBU_TOP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBU_RIGHT",	wxBU_RIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBU_BOTTOM",	wxBU_BOTTOM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxBU_EXACTFIT",	wxBU_EXACTFIT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNO_BORDER",	wxNO_BORDER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCHK_2STATE",	wxCHK_2STATE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCHK_3STATE",	wxCHK_3STATE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCHK_ALLOW_3RD_STATE_FOR_USER",	wxCHK_ALLOW_3RD_STATE_FOR_USER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLC_LIST",	wxLC_LIST	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLC_REPORT",	wxLC_REPORT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLC_VIRTUAL",	wxLC_VIRTUAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLC_ICON",	wxLC_ICON	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLC_SMALL_ICON",	wxLC_SMALL_ICON	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLC_ALIGN_TOP",	wxLC_ALIGN_TOP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLC_ALIGN_LEFT",	wxLC_ALIGN_LEFT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLC_AUTOARRANGE",	wxLC_AUTOARRANGE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLC_EDIT_LABELS",	wxLC_EDIT_LABELS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLC_NO_HEADER",	wxLC_NO_HEADER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLC_SINGLE_SEL",	wxLC_SINGLE_SEL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLC_SORT_ASCENDING",	wxLC_SORT_ASCENDING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLC_SORT_DESCENDING",	wxLC_SORT_DESCENDING	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLC_HRULES",	wxLC_HRULES	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLC_VRULES",	wxLC_VRULES	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNB_TOP",	wxNB_TOP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNB_LEFT",	wxNB_LEFT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNB_RIGHT",	wxNB_RIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNB_BOTTOM",	wxNB_BOTTOM	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNB_FIXEDWIDTH",	wxNB_FIXEDWIDTH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNB_MULTILINE",	wxNB_MULTILINE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNB_NOPAGETHEME",	wxNB_NOPAGETHEME	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNB_FLAT",	wxNB_FLAT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_MULTILINE",	wxTE_MULTILINE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_PASSWORD",	wxTE_PASSWORD	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_READONLY",	wxTE_READONLY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_PROCESS_ENTER",	wxTE_PROCESS_ENTER	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_PROCESS_TAB",	wxTE_PROCESS_TAB	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_RICH",	wxTE_RICH	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_RICH2",	wxTE_RICH2	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_AUTO_URL",	wxTE_AUTO_URL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_NOHIDESEL",	wxTE_NOHIDESEL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxHSCROLL",	wxHSCROLL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_NO_VSCROLL",	wxTE_NO_VSCROLL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_LEFT",	wxTE_LEFT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_CENTRE",	wxTE_CENTRE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_RIGHT",	wxTE_RIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_DONTWRAP",	wxTE_DONTWRAP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_CHARWRAP",	wxTE_CHARWRAP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_WORDWRAP",	wxTE_WORDWRAP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_BESTWRAP",	wxTE_BESTWRAP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTE_CAPITALIZE",	wxTE_CAPITALIZE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxOK",	wxOK	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCANCEL",	wxCANCEL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxYES_DEFAULT",	wxYES_DEFAULT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNO_DEFAULT",	wxNO_DEFAULT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxICON_EXCLAMATION",	wxICON_EXCLAMATION	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxICON_HAND",	wxICON_HAND	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxICON_ERROR",	wxICON_ERROR	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxICON_QUESTION",	wxICON_QUESTION	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxICON_INFORMATION",	wxICON_INFORMATION	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxSTAY_ON_TOP",	wxSTAY_ON_TOP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTRANSPARENT_WINDOW",	wxTRANSPARENT_WINDOW	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTAB_TRAVERSAL",	wxTAB_TRAVERSAL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxWANTS_CHARS",	wxWANTS_CHARS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNO_FULL_REPAINT_ON_RESIZE",	wxNO_FULL_REPAINT_ON_RESIZE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxVSCROLL",	wxVSCROLL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxALWAYS_SHOW_SB",	wxALWAYS_SHOW_SB	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCLIP_CHILDREN",	wxCLIP_CHILDREN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFULL_REPAINT_ON_RESIZE",	wxFULL_REPAINT_ON_RESIZE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLB_SINGLE",	wxLB_SINGLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLB_MULTIPLE",	wxLB_MULTIPLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLB_EXTENDED",	wxLB_EXTENDED	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLB_HSCROLL",	wxLB_HSCROLL	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLB_ALWAYS_SB",	wxLB_ALWAYS_SB	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLB_NEEDED_SB",	wxLB_NEEDED_SB	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxLB_SORT",	wxLB_SORT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxFD_DEFAULT_STYLE",	wxFD_DEFAULT_STYLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCB_SIMPLE",	wxCB_SIMPLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCB_DROPDOWN",	wxCB_DROPDOWN	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCB_READONLY",	wxCB_READONLY	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxCB_SORT",	wxCB_SORT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxRB_GROUP",	wxRB_GROUP	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTR_EDIT_LABELS",	wxTR_EDIT_LABELS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTR_NO_BUTTONS",	wxTR_NO_BUTTONS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTR_HAS_BUTTONS",	wxTR_HAS_BUTTONS	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTR_NO_LINES",	wxTR_NO_LINES	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTR_FULL_ROW_HIGHLIGHT",	wxTR_FULL_ROW_HIGHLIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTR_LINES_AT_ROOT",	wxTR_LINES_AT_ROOT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTR_HIDE_ROOT",	wxTR_HIDE_ROOT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTR_ROW_LINES",	wxTR_ROW_LINES	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTR_HAS_VARIABLE_ROW_HEIGHT",	wxTR_HAS_VARIABLE_ROW_HEIGHT	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTR_SINGLE",	wxTR_SINGLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTR_MULTIPLE",	wxTR_MULTIPLE	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxTR_DEFAULT_STYLE",	wxTR_DEFAULT_STYLE	, CONST_CS |CONST_PERSISTENT);

// <--- classes	

		
	REGISTER_LONG_CONSTANT("wxDefaultPosition", 	(long)&wxDefaultPosition	 	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDefaultSize", 		(long)&wxDefaultSize	 		, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDefaultValidator", 	(long)&wxDefaultValidator	 	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNullBitmap", 		(long)&wxNullBitmap	 	, CONST_CS |CONST_PERSISTENT);
	
    return SUCCESS;
}




zend_module_entry wxWidgets_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
     STANDARD_MODULE_HEADER,
#endif
    PHP_WXWIDGETS_EXTNAME,
    php_wxWidgets_functions, /* Functions */
    PHP_MINIT(php_wxWidgets), /* MINIT */
    NULL, /* MSHUTDOWN */
    NULL, /* RINIT */
    NULL, /* RSHUTDOWN */
    NULL, /* MINFO */
#if ZEND_MODULE_API_NO >= 20010901
    PHP_WXWIDGETS_VERSION,
#endif
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_WXWIDGETS
extern "C" {
ZEND_GET_MODULE(wxWidgets)
}
#endif
