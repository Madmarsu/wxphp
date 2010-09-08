extern zend_class_entry *php_wxFrame_entry;
void php_wxFrame_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxFrame_NAME "wxFrame"
#define le_wxFrame_name  "native wxFrame"

class wxFrame_php : public wxFrame{
	public:
	wxFrame_php(wxWindow* arg0 , int arg1 , const wxString& arg2 , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 541072960 , const wxString& arg6 = wxFrameNameStr):wxFrame(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
	wxFrame_php():wxFrame()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxFrame;

static function_entry php_wxFrame_functions[] = {
        PHP_ME(php_wxFrame, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxFrame, CreateStatusBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrame, CreateToolBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrame, GetClientAreaOrigin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrame, SetStatusBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrame, SetToolBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, SetMenuBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTopLevelWindowBase, SetIcon, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxEvent_entry;
void php_wxEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxEvent_NAME "wxEvent"
#define le_wxEvent_name  "native wxEvent"

class wxEvent_php : public wxEvent{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxEvent;

static function_entry php_wxEvent_functions[] = {
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxWindow_entry;
void php_wxWindow_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxWindow_NAME "wxWindow"
#define le_wxWindow_name  "native wxWindow"

class wxWindow_php : public wxWindow{
	public:
	wxWindow_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = 0 , const wxString& arg5 = wxPanelNameStr):wxWindow(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
	wxWindow_php():wxWindow()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxWindow;

static function_entry php_wxWindow_functions[] = {
        PHP_ME(php_wxWindow, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxPoint_entry;
void php_wxPoint_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxPoint_NAME "wxPoint"
#define le_wxPoint_name  "native wxPoint"

class wxPoint_php : public wxPoint{
	public:
	wxPoint_php(int arg0 , int arg1):wxPoint(arg0 , arg1)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxPoint;

static function_entry php_wxPoint_functions[] = {
        PHP_ME(php_wxPoint, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSize_entry;
void php_wxSize_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSize_NAME "wxSize"
#define le_wxSize_name  "native wxSize"

class wxSize_php : public wxSize{
	public:
	wxSize_php(int arg0 , int arg1):wxSize(arg0 , arg1)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSize;

static function_entry php_wxSize_functions[] = {
        PHP_ME(php_wxSize, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxToolBar_entry;
void php_wxToolBar_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxToolBar_NAME "wxToolBar"
#define le_wxToolBar_name  "native wxToolBar"

class wxToolBar_php : public wxToolBar{
	public:
	wxToolBar_php():wxToolBar()
	{
	}
	wxToolBar_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = 0 , const wxString& arg5 = wxToolBarNameStr):wxToolBar(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxToolBar;

static function_entry php_wxToolBar_functions[] = {
        PHP_ME(php_wxToolBar, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxToolBar, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBar, SetMargins, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBar, SetToolSeparation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBar, FindToolForPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBar, SetToolShortHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, AddCheckTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, AddRadioTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, InsertTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, AddControl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, InsertControl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, FindControl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, AddSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, InsertSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, RemoveTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, DeleteToolByPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, DeleteTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, ClearTools, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, Realize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, EnableTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, ToggleTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, SetToolClientData, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolState, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolShortHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, SetToolLongHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolLongHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, SetToolPacking, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolPacking, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolSeparation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, SetToolBitmapSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolBitmapSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, FindById, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetMargins, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolsCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, AddTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, GetLabel, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxStatusBar_entry;
void php_wxStatusBar_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxStatusBar_NAME "wxStatusBar"
#define le_wxStatusBar_name  "native wxStatusBar"

class wxStatusBar_php : public wxStatusBar{
	public:
	wxStatusBar_php():wxStatusBar()
	{
	}
	wxStatusBar_php(wxWindow* arg0 , int arg1 , long int arg2 , const wxString& arg3 = wxPanelNameStr):wxStatusBar(arg0 , arg1 , arg2 , arg3)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxStatusBar;

static function_entry php_wxStatusBar_functions[] = {
        PHP_ME(php_wxStatusBar, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxStatusBar, SetStatusText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBar, GetStatusText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBarBase, PushStatusText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBarBase, PopStatusText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxBoxSizer_entry;
void php_wxBoxSizer_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxBoxSizer_NAME "wxBoxSizer"
#define le_wxBoxSizer_name  "native wxBoxSizer"

class wxBoxSizer_php : public wxBoxSizer{
	public:
	wxBoxSizer_php(int arg0):wxBoxSizer(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxBoxSizer;

static function_entry php_wxBoxSizer_functions[] = {
        PHP_ME(php_wxBoxSizer, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxBoxSizer, RecalcSizes, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBoxSizer, CalcMin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBoxSizer, GetOrientation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Add, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, AddSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, AddStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, InsertSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, InsertStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Prepend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, PrependSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, PrependStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Detach, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetItemMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, FitInside, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetVirtualSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetChildren, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetDimension, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Hide, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, IsShown, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSizer_entry;
void php_wxSizer_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSizer_NAME "wxSizer"
#define le_wxSizer_name  "native wxSizer"

class wxSizer_php : public wxSizer{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSizer;

static function_entry php_wxSizer_functions[] = {
        PHP_ME(php_wxSizer, Add, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, AddSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, AddStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, InsertSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, InsertStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Prepend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, PrependSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, PrependStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Detach, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetItemMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, RecalcSizes, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, CalcMin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, FitInside, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetVirtualSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetChildren, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetDimension, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Hide, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, IsShown, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxColour_entry;
void php_wxColour_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxColour_NAME "wxColour"
#define le_wxColour_name  "native wxColour"

class wxColour_php : public wxColour{
	public:
	wxColour_php():wxColour()
	{
	}
	wxColour_php(const wxString& arg0):wxColour(arg0)
	{
	}
	wxColour_php(const wxColour& arg0):wxColour(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxColour;

static function_entry php_wxColour_functions[] = {
        PHP_ME(php_wxColour, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxCursor_entry;
void php_wxCursor_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxCursor_NAME "wxCursor"
#define le_wxCursor_name  "native wxCursor"

class wxCursor_php : public wxCursor{
	public:
	wxCursor_php(int arg0):wxCursor(arg0)
	{
	}
	wxCursor_php():wxCursor()
	{
	}
	wxCursor_php(const wxImage& arg0):wxCursor(arg0)
	{
	}
	wxCursor_php(const wxCursor& arg0):wxCursor(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxCursor;

static function_entry php_wxCursor_functions[] = {
        PHP_ME(php_wxCursor, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxFont_entry;
void php_wxFont_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxFont_NAME "wxFont"
#define le_wxFont_name  "native wxFont"

class wxFont_php : public wxFont{
	public:
	wxFont_php():wxFont()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxFont;

static function_entry php_wxFont_functions[] = {
        PHP_ME(php_wxFont, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxWindowBase_entry;
void php_wxWindowBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxWindowBase_NAME "wxWindowBase"
#define le_wxWindowBase_name  "native wxWindowBase"

class wxWindowBase_php : public wxWindowBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxWindowBase;

static function_entry php_wxWindowBase_functions[] = {
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSizerFlags_entry;
void php_wxSizerFlags_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSizerFlags_NAME "wxSizerFlags"
#define le_wxSizerFlags_name  "native wxSizerFlags"

class wxSizerFlags_php : public wxSizerFlags{
	public:
	wxSizerFlags_php(const wxSizerFlags& arg0):wxSizerFlags(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSizerFlags;

static function_entry php_wxSizerFlags_functions[] = {
        PHP_ME(php_wxSizerFlags, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSizerItem_entry;
void php_wxSizerItem_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSizerItem_NAME "wxSizerItem"
#define le_wxSizerItem_name  "native wxSizerItem"

class wxSizerItem_php : public wxSizerItem{
	public:
	wxSizerItem_php():wxSizerItem()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSizerItem;

static function_entry php_wxSizerItem_functions[] = {
        PHP_ME(php_wxSizerItem, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxClassInfo_entry;
void php_wxClassInfo_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxClassInfo_NAME "wxClassInfo"
#define le_wxClassInfo_name  "native wxClassInfo"

class wxClassInfo_php : public wxClassInfo{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxClassInfo;

static function_entry php_wxClassInfo_functions[] = {
        PHP_ME(php_wxClassInfo, GetSize, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxObject_entry;
void php_wxObject_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxObject_NAME "wxObject"
#define le_wxObject_name  "native wxObject"

class wxObject_php : public wxObject{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxObject;

static function_entry php_wxObject_functions[] = {
        PHP_ME(php_wxObject, IsKindOf, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxImage_entry;
void php_wxImage_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxImage_NAME "wxImage"
#define le_wxImage_name  "native wxImage"

class wxImage_php : public wxImage{
	public:
	wxImage_php():wxImage()
	{
	}
	wxImage_php(const wxString& arg0 , long int arg1 = wxBITMAP_TYPE_ANY , int arg2 = -1):wxImage(arg0 , arg1 , arg2)
	{
	}
	wxImage_php(const wxImage& arg0):wxImage(arg0)
	{
	}
	wxImage_php(int arg0 , int arg1 , bool arg2 = true):wxImage(arg0 , arg1 , arg2)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxImage;

static function_entry php_wxImage_functions[] = {
        PHP_ME(php_wxImage, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxImage, Scale, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImage, Rescale, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImage, Resize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImage, Rotate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImage, Rotate90, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImage, Mirror, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxMenuItem_entry;
void php_wxMenuItem_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxMenuItem_NAME "wxMenuItem"
#define le_wxMenuItem_name  "native wxMenuItem"

class wxMenuItem_php : public wxMenuItem{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxMenuItem;

static function_entry php_wxMenuItem_functions[] = {
        PHP_ME(php_wxMenuItem, Check, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItem, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItem, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItem, SetBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, SetMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, IsSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, SetText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetLabelFromText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetKind, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, IsCheckable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, IsSubMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, SetSubMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetSubMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, SetHelp, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxMenuItemBase_entry;
void php_wxMenuItemBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxMenuItemBase_NAME "wxMenuItemBase"
#define le_wxMenuItemBase_name  "native wxMenuItemBase"

class wxMenuItemBase_php : public wxMenuItemBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxMenuItemBase;

static function_entry php_wxMenuItemBase_functions[] = {
        PHP_ME(php_wxMenuItemBase, SetMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, IsSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, SetText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetLabelFromText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetKind, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, IsCheckable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, IsSubMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, SetSubMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetSubMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, Check, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, SetHelp, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxMenu_entry;
void php_wxMenu_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxMenu_NAME "wxMenu"
#define le_wxMenu_name  "native wxMenu"

class wxMenu_php : public wxMenu{
	public:
	wxMenu_php(const wxString& arg0 , long int arg1 = 0):wxMenu(arg0 , arg1)
	{
	}
	wxMenu_php(long int arg0 = 0):wxMenu(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxMenu;

static function_entry php_wxMenu_functions[] = {
        PHP_ME(php_wxMenu, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxMenuBase, Append, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, AppendCheckItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, AppendRadioItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Break, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, InsertSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, InsertCheckItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, InsertRadioItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Prepend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, PrependSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, PrependCheckItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, PrependRadioItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Delete, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, GetMenuItemCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, GetTitle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, FindItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, FindItemByPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Check, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, SetHelpString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, GetHelpString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, SetTitle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, AppendSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxBitmap_entry;
void php_wxBitmap_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxBitmap_NAME "wxBitmap"
#define le_wxBitmap_name  "native wxBitmap"

class wxBitmap_php : public wxBitmap{
	public:
	wxBitmap_php(const wxString& arg0 , wxBitmapType arg1 = wxBITMAP_TYPE_XPM):wxBitmap(arg0 , arg1)
	{
	}
	wxBitmap_php():wxBitmap()
	{
	}
	wxBitmap_php(const wxImage& arg0 , int arg1 = -1):wxBitmap(arg0 , arg1)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxBitmap;

static function_entry php_wxBitmap_functions[] = {
        PHP_ME(php_wxBitmap, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxBitmap, GetHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, GetWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, GetDepth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, CopyFromIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, ConvertToImage, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxMenuBase_entry;
void php_wxMenuBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxMenuBase_NAME "wxMenuBase"
#define le_wxMenuBase_name  "native wxMenuBase"

class wxMenuBase_php : public wxMenuBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxMenuBase;

static function_entry php_wxMenuBase_functions[] = {
        PHP_ME(php_wxMenuBase, Append, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, AppendCheckItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, AppendRadioItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Break, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, InsertSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, InsertCheckItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, InsertRadioItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Prepend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, PrependSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, PrependCheckItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, PrependRadioItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Delete, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, GetMenuItemCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, GetTitle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, FindItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, FindItemByPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Check, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, SetHelpString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, GetHelpString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, SetTitle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, AppendSeparator, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxMenuBar_entry;
void php_wxMenuBar_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxMenuBar_NAME "wxMenuBar"
#define le_wxMenuBar_name  "native wxMenuBar"

class wxMenuBar_php : public wxMenuBar{
	public:
	wxMenuBar_php(long int arg0):wxMenuBar(arg0)
	{
	}
	wxMenuBar_php():wxMenuBar()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxMenuBar;

static function_entry php_wxMenuBar_functions[] = {
        PHP_ME(php_wxMenuBar, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxMenuBar, Append, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBar, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBar, Replace, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBar, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBar, FindMenuItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBar, EnableTop, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBar, SetLabelTop, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxToolBarBase_entry;
void php_wxToolBarBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxToolBarBase_NAME "wxToolBarBase"
#define le_wxToolBarBase_name  "native wxToolBarBase"

class wxToolBarBase_php : public wxToolBarBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxToolBarBase;

static function_entry php_wxToolBarBase_functions[] = {
        PHP_ME(php_wxToolBarBase, AddCheckTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, AddRadioTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, InsertTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, AddControl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, InsertControl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, FindControl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, AddSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, InsertSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, RemoveTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, DeleteToolByPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, DeleteTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, ClearTools, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, Realize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, EnableTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, ToggleTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, SetToolClientData, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolState, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, SetToolShortHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolShortHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, SetToolLongHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolLongHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, SetToolPacking, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolPacking, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolSeparation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, SetToolBitmapSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolBitmapSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, FindToolForPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, FindById, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetMargins, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolsCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, AddTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, GetLabel, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxToolBarToolBase_entry;
void php_wxToolBarToolBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxToolBarToolBase_NAME "wxToolBarToolBase"
#define le_wxToolBarToolBase_name  "native wxToolBarToolBase"

class wxToolBarToolBase_php : public wxToolBarToolBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxToolBarToolBase;

static function_entry php_wxToolBarToolBase_functions[] = {
        PHP_ME(php_wxToolBarToolBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxControl_entry;
void php_wxControl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxControl_NAME "wxControl"
#define le_wxControl_name  "native wxControl"

class wxControl_php : public wxControl{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxControl;

static function_entry php_wxControl_functions[] = {
        PHP_ME(php_wxControl, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, GetLabel, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxCommandEvent_entry;
void php_wxCommandEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxCommandEvent_NAME "wxCommandEvent"
#define le_wxCommandEvent_name  "native wxCommandEvent"

class wxCommandEvent_php : public wxCommandEvent{
	public:
	wxCommandEvent_php(int arg0 = wxEVT_NULL , int arg1 = 0):wxCommandEvent(arg0 , arg1)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxCommandEvent;

static function_entry php_wxCommandEvent_functions[] = {
        PHP_ME(php_wxCommandEvent, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxCommandEvent, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxPanel_entry;
void php_wxPanel_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxPanel_NAME "wxPanel"
#define le_wxPanel_name  "native wxPanel"

class wxPanel_php : public wxPanel{
	public:
	wxPanel_php(wxWindow* arg0 , int arg1 = wxID_ANY , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = 2621440 , const wxString& arg5 = wxPanelNameStr):wxPanel(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
	wxPanel_php():wxPanel()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxPanel;

static function_entry php_wxPanel_functions[] = {
        PHP_ME(php_wxPanel, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxPanel, InitDialog, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPanel, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPanel, SetFocusIgnoringChildren, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTopLevelWindowBase_entry;
void php_wxTopLevelWindowBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTopLevelWindowBase_NAME "wxTopLevelWindowBase"
#define le_wxTopLevelWindowBase_name  "native wxTopLevelWindowBase"

class wxTopLevelWindowBase_php : public wxTopLevelWindowBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTopLevelWindowBase;

static function_entry php_wxTopLevelWindowBase_functions[] = {
        PHP_ME(php_wxTopLevelWindowBase, SetIcon, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSplitterWindow_entry;
void php_wxSplitterWindow_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSplitterWindow_NAME "wxSplitterWindow"
#define le_wxSplitterWindow_name  "native wxSplitterWindow"

class wxSplitterWindow_php : public wxSplitterWindow{
	public:
	wxSplitterWindow_php(wxWindow* arg0 , int arg1 = wxID_ANY , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = 768 , const wxString& arg5 = wxT("\000\000\000s\000\000\000p\000\000\000l\000\000\000i\000\000\000t\000\000\000t\000\000\000e\000\000\000r\000\000\000")):wxSplitterWindow(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSplitterWindow;

static function_entry php_wxSplitterWindow_functions[] = {
        PHP_ME(php_wxSplitterWindow, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxSplitterWindow, SplitVertically, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, SplitHorizontally, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, SetMinimumPaneSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, SetSashSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, SetBorderSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, GetSashSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, GetBorderSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, SetSashPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, GetSashPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, SetSashGravity, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, GetSashGravity, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, GetMinimumPaneSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTreeCtrl_entry;
void php_wxTreeCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTreeCtrl_NAME "wxTreeCtrl"
#define le_wxTreeCtrl_name  "native wxTreeCtrl"

class wxTreeCtrl_php : public wxTreeCtrl{
	public:
	wxTreeCtrl_php(wxWindow* arg0 , int arg1 = wxID_ANY , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = 5 , const wxValidator& arg5 = wxDefaultValidator , const wxString& arg6 = wxTreeCtrlNameStr):wxTreeCtrl(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTreeCtrl;

static function_entry php_wxTreeCtrl_functions[] = {
        PHP_ME(php_wxTreeCtrl, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxTreeCtrl, GetItemPHPData, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, SetItemPHPData, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, AddRoot, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, AppendItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, GetItemText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, Delete, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, DeleteChildren, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, DeleteAllItems, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, Expand, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, Collapse, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, CollapseAndReset, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, Toggle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, Unselect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, UnselectAll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, SelectItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, EnsureVisible, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, ScrollTo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, SetItemTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, SetItemBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, SetItemDropHighlight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, SetItemBold, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, SetItemText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, GetItemTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, GetItemBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, SetImageList, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, SetStateImageList, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, IsExpanded, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, IsSelected, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, IsBold, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, SetIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, GetIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, GetCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, SetItemHasChildren, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, IsVisible, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, ItemHasChildren, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, GetChildrenCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, GetRootItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, GetItemParent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrlBase, AssignImageList, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxValidator_entry;
void php_wxValidator_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxValidator_NAME "wxValidator"
#define le_wxValidator_name  "native wxValidator"

class wxValidator_php : public wxValidator{
	public:
	wxValidator_php():wxValidator()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxValidator;

static function_entry php_wxValidator_functions[] = {
        PHP_ME(php_wxValidator, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxCheckListBox_entry;
void php_wxCheckListBox_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxCheckListBox_NAME "wxCheckListBox"
#define le_wxCheckListBox_name  "native wxCheckListBox"

class wxCheckListBox_php : public wxCheckListBox{
	public:
	wxCheckListBox_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , int arg4 = 0 , const wxString* arg5 = 0 , long int arg6 = 0 , const wxValidator& arg7 = wxDefaultValidator , const wxString& arg8 = wxListBoxNameStr):wxCheckListBox(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8)
	{
	}
	wxCheckListBox_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 , const wxSize& arg3 , const wxArrayString& arg4 , long int arg5 = 0 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxListBoxNameStr):wxCheckListBox(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxCheckListBox;

static function_entry php_wxCheckListBox_functions[] = {
        PHP_ME(php_wxCheckListBox, Check, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCheckListBox, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxCheckListBox, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, IsSelected, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, Delete, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, GetCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, Set, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, Deselect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, InsertItems, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, DeselectAll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, SetSelection, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTreeItemData_entry;
void php_wxTreeItemData_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTreeItemData_NAME "wxTreeItemData"
#define le_wxTreeItemData_name  "native wxTreeItemData"

class wxTreeItemData_php : public wxTreeItemData{
	public:
	wxTreeItemData_php():wxTreeItemData()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTreeItemData;

static function_entry php_wxTreeItemData_functions[] = {
        PHP_ME(php_wxTreeItemData, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTreeItemId_entry;
void php_wxTreeItemId_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTreeItemId_NAME "wxTreeItemId"
#define le_wxTreeItemId_name  "native wxTreeItemId"

class wxTreeItemId_php : public wxTreeItemId{
	public:
	wxTreeItemId_php():wxTreeItemId()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTreeItemId;

static function_entry php_wxTreeItemId_functions[] = {
        PHP_ME(php_wxTreeItemId, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxTreeItemId, IsOk, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxFrameBase_entry;
void php_wxFrameBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxFrameBase_NAME "wxFrameBase"
#define le_wxFrameBase_name  "native wxFrameBase"

class wxFrameBase_php : public wxFrameBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxFrameBase;

static function_entry php_wxFrameBase_functions[] = {
        PHP_ME(php_wxFrameBase, SetMenuBar, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTreeEvent_entry;
void php_wxTreeEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTreeEvent_NAME "wxTreeEvent"
#define le_wxTreeEvent_name  "native wxTreeEvent"

class wxTreeEvent_php : public wxTreeEvent{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTreeEvent;

static function_entry php_wxTreeEvent_functions[] = {
        PHP_ME(php_wxTreeEvent, GetItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetInt, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxArrayString_entry;
void php_wxArrayString_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxArrayString_NAME "wxArrayString"
#define le_wxArrayString_name  "native wxArrayString"

class wxArrayString_php : public wxArrayString{
	public:
	wxArrayString_php():wxArrayString()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxArrayString;

static function_entry php_wxArrayString_functions[] = {
        PHP_ME(php_wxArrayString, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxArrayString, Add, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxArrayString, Empty, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxArrayString, Clear, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxCheckListBoxBase_entry;
void php_wxCheckListBoxBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxCheckListBoxBase_NAME "wxCheckListBoxBase"
#define le_wxCheckListBoxBase_name  "native wxCheckListBoxBase"

class wxCheckListBoxBase_php : public wxCheckListBoxBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxCheckListBoxBase;

static function_entry php_wxCheckListBoxBase_functions[] = {
        PHP_ME(php_wxCheckListBoxBase, Check, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxListBoxBase_entry;
void php_wxListBoxBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxListBoxBase_NAME "wxListBoxBase"
#define le_wxListBoxBase_name  "native wxListBoxBase"

class wxListBoxBase_php : public wxListBoxBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxListBoxBase;

static function_entry php_wxListBoxBase_functions[] = {
        PHP_ME(php_wxListBoxBase, Set, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, Deselect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, InsertItems, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, DeselectAll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, SetSelection, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxIcon_entry;
void php_wxIcon_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxIcon_NAME "wxIcon"
#define le_wxIcon_name  "native wxIcon"

class wxIcon_php : public wxIcon{
	public:
	wxIcon_php():wxIcon()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxIcon;

static function_entry php_wxIcon_functions[] = {
        PHP_ME(php_wxIcon, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxIcon, CopyFromBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, GetHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, GetWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, GetDepth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, CopyFromIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, ConvertToImage, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTextCtrl_entry;
void php_wxTextCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTextCtrl_NAME "wxTextCtrl"
#define le_wxTextCtrl_name  "native wxTextCtrl"

class wxTextCtrl_php : public wxTextCtrl{
	public:
	wxTextCtrl_php(wxWindow* arg0 , int arg1 , const wxString& arg2 = wxEmptyString , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 0 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxTextCtrlNameStr):wxTextCtrl(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTextCtrl;

static function_entry php_wxTextCtrl_functions[] = {
        PHP_ME(php_wxTextCtrl, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxTextCtrl, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrl, SetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrl, SetMaxLength, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxNotebook_entry;
void php_wxNotebook_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxNotebook_NAME "wxNotebook"
#define le_wxNotebook_name  "native wxNotebook"

class wxNotebook_php : public wxNotebook{
	public:
	wxNotebook_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = 0 , const wxString& arg5 = wxNotebookNameStr):wxNotebook(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxNotebook;

static function_entry php_wxNotebook_functions[] = {
        PHP_ME(php_wxNotebook, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxNotebook, SetPageText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotebook, GetPageText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotebook, GetPageImage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotebook, SetPageImage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotebook, SetPageSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotebook, SetPadding, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotebook, SetTabSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotebook, DeleteAllPages, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotebook, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotebook, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotebook, InsertPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, AddPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, RemovePage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, DeletePage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetPageCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetCurrentPage, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxBookCtrlBase_entry;
void php_wxBookCtrlBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxBookCtrlBase_NAME "wxBookCtrlBase"
#define le_wxBookCtrlBase_name  "native wxBookCtrlBase"

class wxBookCtrlBase_php : public wxBookCtrlBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxBookCtrlBase;

static function_entry php_wxBookCtrlBase_functions[] = {
        PHP_ME(php_wxBookCtrlBase, AddPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, RemovePage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, DeletePage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, SetPageText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetPageText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetPageCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetCurrentPage, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxFlexGridSizer_entry;
void php_wxFlexGridSizer_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxFlexGridSizer_NAME "wxFlexGridSizer"
#define le_wxFlexGridSizer_name  "native wxFlexGridSizer"

class wxFlexGridSizer_php : public wxFlexGridSizer{
	public:
	wxFlexGridSizer_php(int arg0 , int arg1 , int arg2 , int arg3):wxFlexGridSizer(arg0 , arg1 , arg2 , arg3)
	{
	}
	wxFlexGridSizer_php(int arg0 , int arg1 = 0 , int arg2 = 0):wxFlexGridSizer(arg0 , arg1 , arg2)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxFlexGridSizer;

static function_entry php_wxFlexGridSizer_functions[] = {
        PHP_ME(php_wxFlexGridSizer, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxFlexGridSizer, AddGrowableRow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFlexGridSizer, RemoveGrowableRow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFlexGridSizer, AddGrowableCol, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFlexGridSizer, RemoveGrowableCol, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFlexGridSizer, SetFlexibleDirection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFlexGridSizer, GetFlexibleDirection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Add, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, AddSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, AddStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, InsertSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, InsertStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Prepend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, PrependSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, PrependStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Detach, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetItemMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, RecalcSizes, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, CalcMin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, FitInside, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetVirtualSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetChildren, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetDimension, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Hide, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, IsShown, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxStaticText_entry;
void php_wxStaticText_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxStaticText_NAME "wxStaticText"
#define le_wxStaticText_name  "native wxStaticText"

class wxStaticText_php : public wxStaticText{
	public:
	wxStaticText_php(wxWindow* arg0 , int arg1 , const wxString& arg2 , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 0 , const wxString& arg6 = wxStaticTextNameStr):wxStaticText(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxStaticText;

static function_entry php_wxStaticText_functions[] = {
        PHP_ME(php_wxStaticText, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxStaticText, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStaticText, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStaticText, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxButton_entry;
void php_wxButton_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxButton_NAME "wxButton"
#define le_wxButton_name  "native wxButton"

class wxButton_php : public wxButton{
	public:
	wxButton_php(wxWindow* arg0 , int arg1 , const wxString& arg2 = wxEmptyString , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 0 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxButtonNameStr):wxButton(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxButton;

static function_entry php_wxButton_functions[] = {
        PHP_ME(php_wxButton, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxButton, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxButton, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxButton, SetDefault, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxButton, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxButton, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxStaticBox_entry;
void php_wxStaticBox_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxStaticBox_NAME "wxStaticBox"
#define le_wxStaticBox_name  "native wxStaticBox"

class wxStaticBox_php : public wxStaticBox{
	public:
	wxStaticBox_php(wxWindow* arg0 , int arg1 , const wxString& arg2 , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 0 , const wxString& arg6 = wxStaticBoxNameStr):wxStaticBox(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxStaticBox;

static function_entry php_wxStaticBox_functions[] = {
        PHP_ME(php_wxStaticBox, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxStaticBox, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxStaticBoxSizer_entry;
void php_wxStaticBoxSizer_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxStaticBoxSizer_NAME "wxStaticBoxSizer"
#define le_wxStaticBoxSizer_name  "native wxStaticBoxSizer"

class wxStaticBoxSizer_php : public wxStaticBoxSizer{
	public:
	wxStaticBoxSizer_php(wxStaticBox* arg0 , int arg1):wxStaticBoxSizer(arg0 , arg1)
	{
	}
	wxStaticBoxSizer_php(int arg0 , wxWindow* arg1 , const wxString& arg2 = wxEmptyString):wxStaticBoxSizer(arg0 , arg1 , arg2)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxStaticBoxSizer;

static function_entry php_wxStaticBoxSizer_functions[] = {
        PHP_ME(php_wxStaticBoxSizer, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxBoxSizer, RecalcSizes, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBoxSizer, CalcMin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBoxSizer, GetOrientation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Add, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, AddSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, AddStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, InsertSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, InsertStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Prepend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, PrependSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, PrependStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Detach, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetItemMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, FitInside, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetVirtualSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetChildren, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetDimension, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Hide, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, IsShown, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxListBox_entry;
void php_wxListBox_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxListBox_NAME "wxListBox"
#define le_wxListBox_name  "native wxListBox"

class wxListBox_php : public wxListBox{
	public:
	wxListBox_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , int arg4 = 0 , const wxString* arg5 = 0 , long int arg6 = 0 , const wxValidator& arg7 = wxDefaultValidator , const wxString& arg8 = wxListBoxNameStr):wxListBox(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8)
	{
	}
	wxListBox_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 , const wxSize& arg3 , const wxArrayString& arg4 , long int arg5 = 0 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxListBoxNameStr):wxListBox(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxListBox;

static function_entry php_wxListBox_functions[] = {
        PHP_ME(php_wxListBox, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxListBox, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, IsSelected, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, Delete, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, GetCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, Set, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, Deselect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, InsertItems, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, DeselectAll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxFileDialog_entry;
void php_wxFileDialog_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxFileDialog_NAME "wxFileDialog"
#define le_wxFileDialog_name  "native wxFileDialog"

class wxFileDialog_php : public wxFileDialog{
	public:
	wxFileDialog_php(wxWindow* arg0 , const wxString& arg1 = wxFileSelectorPromptStr , const wxString& arg2 = wxEmptyString , const wxString& arg3 = wxEmptyString , const wxString& arg4 = wxFileSelectorDefaultWildcardStr , long int arg5 = 0 , const wxPoint& arg6 = wxDefaultPosition):wxFileDialog(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxFileDialog;

static function_entry php_wxFileDialog_functions[] = {
        PHP_ME(php_wxFileDialog, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxFileDialog, GetPath, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, GetDirectory, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, GetFilename, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, GetFilterIndex, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, SetMessage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, SetPath, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, SetDirectory, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, SetFilename, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, SetWildcard, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, SetFilterIndex, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, ShowModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, GetPaths, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, GetFilenames, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, EndModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, IsModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTopLevelWindowBase, SetIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxDialog_entry;
void php_wxDialog_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxDialog_NAME "wxDialog"
#define le_wxDialog_name  "native wxDialog"

class wxDialog_php : public wxDialog{
	public:
	wxDialog_php(wxWindow* arg0 , int arg1 , const wxString& arg2 , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 536877056 , const wxString& arg6 = wxDialogNameStr):wxDialog(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxDialog;

static function_entry php_wxDialog_functions[] = {
        PHP_ME(php_wxDialog, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxDialog, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, ShowModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, EndModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, IsModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTopLevelWindowBase, SetIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxMessageDialog_entry;
void php_wxMessageDialog_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxMessageDialog_NAME "wxMessageDialog"
#define le_wxMessageDialog_name  "native wxMessageDialog"

class wxMessageDialog_php : public wxMessageDialog{
	public:
	wxMessageDialog_php(wxWindow* arg0 , const wxString& arg1 , const wxString& arg2 = wxMessageBoxCaptionStr , long int arg3 = 5 , const wxPoint& arg4 = wxDefaultPosition):wxMessageDialog(arg0 , arg1 , arg2 , arg3 , arg4)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxMessageDialog;

static function_entry php_wxMessageDialog_functions[] = {
        PHP_ME(php_wxMessageDialog, ShowModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMessageDialog, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxMessageDialog, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, EndModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, IsModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTopLevelWindowBase, SetIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxStatusBarBase_entry;
void php_wxStatusBarBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxStatusBarBase_NAME "wxStatusBarBase"
#define le_wxStatusBarBase_name  "native wxStatusBarBase"

class wxStatusBarBase_php : public wxStatusBarBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxStatusBarBase;

static function_entry php_wxStatusBarBase_functions[] = {
        PHP_ME(php_wxStatusBarBase, PushStatusText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBarBase, SetStatusText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBarBase, GetStatusText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBarBase, PopStatusText, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxListCtrl_entry;
void php_wxListCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxListCtrl_NAME "wxListCtrl"
#define le_wxListCtrl_name  "native wxListCtrl"

class wxListCtrl_php : public wxListCtrl{
	public:
	wxListCtrl_php(wxWindow* arg0 , int arg1 = wxID_ANY , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = 4 , const wxValidator& arg5 = wxDefaultValidator , const wxString& arg6 = wxListCtrlNameStr):wxListCtrl(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
		virtual wxString OnGetItemText(long int arg0 , long int arg1) const;
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxListCtrl;

static function_entry php_wxListCtrl_functions[] = {
        PHP_ME(php_wxListCtrl, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxListCtrl, DeleteAllItems, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetItemCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, OnGetItemText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetColumnWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetColumnWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, InsertColumn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetItemImage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetItemText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetItemText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetItemCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetColumnCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, DeleteItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, DeleteAllColumns, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, DeleteColumn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, InsertItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetSelectedItemCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetItemTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetItemBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetItemTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxStaticBitmap_entry;
void php_wxStaticBitmap_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxStaticBitmap_NAME "wxStaticBitmap"
#define le_wxStaticBitmap_name  "native wxStaticBitmap"

class wxStaticBitmap_php : public wxStaticBitmap{
	public:
	wxStaticBitmap_php(wxWindow* arg0 , int arg1 , const wxBitmap& arg2 , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 0 , const wxString& arg6 = wxStaticBitmapNameStr):wxStaticBitmap(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxStaticBitmap;

static function_entry php_wxStaticBitmap_functions[] = {
        PHP_ME(php_wxStaticBitmap, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxStaticBitmap, SetBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxGauge_entry;
void php_wxGauge_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxGauge_NAME "wxGauge"
#define le_wxGauge_name  "native wxGauge"

class wxGauge_php : public wxGauge{
	public:
	wxGauge_php(wxWindow* arg0 , int arg1 , int arg2 , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = wxHORIZONTAL , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxGaugeNameStr):wxGauge(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxGauge;

static function_entry php_wxGauge_functions[] = {
        PHP_ME(php_wxGauge, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxGauge, SetShadowWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGauge, SetBezelFace, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGauge, SetRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGauge, SetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGauge, GetShadowWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGauge, GetBezelFace, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGauge, GetRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGauge, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGauge, IsVertical, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxListEvent_entry;
void php_wxListEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxListEvent_NAME "wxListEvent"
#define le_wxListEvent_name  "native wxListEvent"

class wxListEvent_php : public wxListEvent{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxListEvent;

static function_entry php_wxListEvent_functions[] = {
        PHP_ME(php_wxListEvent, GetIndex, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListEvent, GetColumn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetInt, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxComboBox_entry;
void php_wxComboBox_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxComboBox_NAME "wxComboBox"
#define le_wxComboBox_name  "native wxComboBox"

class wxComboBox_php : public wxComboBox{
	public:
	wxComboBox_php(wxWindow* arg0 , int arg1 , const wxString& arg2 = wxEmptyString , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , int arg5 = 0 , const wxString* arg6 = 0 , long int arg7 = 0 , const wxValidator& arg8 = wxDefaultValidator , const wxString& arg9 = wxComboBoxNameStr):wxComboBox(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9)
	{
	}
	wxComboBox_php(wxWindow* arg0 , int arg1 , const wxString& arg2 , const wxPoint& arg3 , const wxSize& arg4 , const wxArrayString& arg5 , long int arg6 = 0 , const wxValidator& arg7 = wxDefaultValidator , const wxString& arg8 = wxComboBoxNameStr):wxComboBox(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxComboBox;

static function_entry php_wxComboBox_functions[] = {
        PHP_ME(php_wxComboBox, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxComboBox, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, SetEditable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, SetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, Replace, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, SelectAll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, Delete, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, Append, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxPrintout_entry;
void php_wxPrintout_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxPrintout_NAME "wxPrintout"
#define le_wxPrintout_name  "native wxPrintout"

class wxPrintout_php : public wxPrintout{
	public:
	wxPrintout_php(const wxString& arg0 = wxT("Printout")):wxPrintout(arg0)
	{
	}
		virtual bool OnPrintPage(int arg0);
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxPrintout;

static function_entry php_wxPrintout_functions[] = {
        PHP_ME(php_wxPrintout, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxPrintout, GetDC, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintout, SetDC, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintout, OnPrintPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintout, IsPreview, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxDC_entry;
void php_wxDC_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxDC_NAME "wxDC"
#define le_wxDC_name  "native wxDC"

class wxDC_php : public wxDC{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxDC;

static function_entry php_wxDC_functions[] = {
        PHP_ME(php_wxDC, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDC, StartDoc, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDC, EndDoc, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDC, StartPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDC, EndPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDC, SetPen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDC, SetBrush, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDC, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDC, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDC, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawCircle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawEllipse, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, FloodFill, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, GradientFillConcentric, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawLine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawArc, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawCheckMark, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawPoint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawLines, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawRectangle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawSpline, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, BeginDrawing, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, EndDrawing, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, GetSize, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxDCBase_entry;
void php_wxDCBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxDCBase_NAME "wxDCBase"
#define le_wxDCBase_name  "native wxDCBase"

class wxDCBase_php : public wxDCBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxDCBase;

static function_entry php_wxDCBase_functions[] = {
        PHP_ME(php_wxDCBase, DrawText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawCircle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawEllipse, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, FloodFill, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, GradientFillConcentric, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawLine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawArc, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawCheckMark, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawPoint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawLines, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawRectangle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawSpline, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, StartDoc, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, EndDoc, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, StartPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, EndPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, BeginDrawing, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, EndDrawing, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, GetSize, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxPrintDialogData_entry;
void php_wxPrintDialogData_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxPrintDialogData_NAME "wxPrintDialogData"
#define le_wxPrintDialogData_name  "native wxPrintDialogData"

class wxPrintDialogData_php : public wxPrintDialogData{
	public:
	wxPrintDialogData_php():wxPrintDialogData()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxPrintDialogData;

static function_entry php_wxPrintDialogData_functions[] = {
        PHP_ME(php_wxPrintDialogData, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxRect_entry;
void php_wxRect_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxRect_NAME "wxRect"
#define le_wxRect_name  "native wxRect"

class wxRect_php : public wxRect{
	public:
	wxRect_php(int arg0 , int arg1 , int arg2 , int arg3):wxRect(arg0 , arg1 , arg2 , arg3)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxRect;

static function_entry php_wxRect_functions[] = {
        PHP_ME(php_wxRect, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxPen_entry;
void php_wxPen_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxPen_NAME "wxPen"
#define le_wxPen_name  "native wxPen"

class wxPen_php : public wxPen{
	public:
	wxPen_php(const wxColour& arg0 , int arg1 = 1 , int arg2 = wxSOLID):wxPen(arg0 , arg1 , arg2)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxPen;

static function_entry php_wxPen_functions[] = {
        PHP_ME(php_wxPen, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxPen, SetWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPen, SetStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPen, SetColour, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxBrush_entry;
void php_wxBrush_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxBrush_NAME "wxBrush"
#define le_wxBrush_name  "native wxBrush"

class wxBrush_php : public wxBrush{
	public:
	wxBrush_php():wxBrush()
	{
	}
	wxBrush_php(const wxColour& arg0 , int arg1 = wxSOLID):wxBrush(arg0 , arg1)
	{
	}
	wxBrush_php(const wxBitmap& arg0):wxBrush(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxBrush;

static function_entry php_wxBrush_functions[] = {
        PHP_ME(php_wxBrush, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxBrush, SetColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBrush, SetStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBrush, SetStipple, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSplashScreen_entry;
void php_wxSplashScreen_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSplashScreen_NAME "wxSplashScreen"
#define le_wxSplashScreen_name  "native wxSplashScreen"

class wxSplashScreen_php : public wxSplashScreen{
	public:
	wxSplashScreen_php(const wxBitmap& arg0 , long int arg1 , int arg2 , wxWindow* arg3 , int arg4 , const wxPoint& arg5 = wxDefaultPosition , const wxSize& arg6 = wxDefaultSize , long int arg7 = 33587202):wxSplashScreen(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSplashScreen;

static function_entry php_wxSplashScreen_functions[] = {
        PHP_ME(php_wxSplashScreen, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxSplashScreen, GetTimeout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrame, CreateStatusBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrame, CreateToolBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrame, GetClientAreaOrigin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrame, SetStatusBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrame, SetToolBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, SetMenuBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTopLevelWindowBase, SetIcon, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxCalendarCtrl_entry;
void php_wxCalendarCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxCalendarCtrl_NAME "wxCalendarCtrl"
#define le_wxCalendarCtrl_name  "native wxCalendarCtrl"

class wxCalendarCtrl_php : public wxCalendarCtrl{
	public:
	wxCalendarCtrl_php(wxWindow* arg0 , int arg1 , const wxDateTime& arg2 = wxDefaultDateTime , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 262146 , const wxString& arg6 = wxT("CalendarCtrl")):wxCalendarCtrl(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxCalendarCtrl;

static function_entry php_wxCalendarCtrl_functions[] = {
        PHP_ME(php_wxCalendarCtrl, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxCalendarCtrl, SetDate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, GetDate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, SetLowerDateLimit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, GetLowerDateLimit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, SetUpperDateLimit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, GetUpperDateLimit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, SetDateRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, EnableYearChange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, EnableMonthChange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, EnableHolidayDisplay, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, SetHeaderColours, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, SetHighlightColours, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, SetHolidayColours, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, SetHoliday, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, GetAttr, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, SetAttr, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxCalendarEvent_entry;
void php_wxCalendarEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxCalendarEvent_NAME "wxCalendarEvent"
#define le_wxCalendarEvent_name  "native wxCalendarEvent"

class wxCalendarEvent_php : public wxCalendarEvent{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxCalendarEvent;

static function_entry php_wxCalendarEvent_functions[] = {
        PHP_ME(php_wxCalendarEvent, GetWeekDay, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateEvent, GetDate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateEvent, SetDate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxDateEvent_entry;
void php_wxDateEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxDateEvent_NAME "wxDateEvent"
#define le_wxDateEvent_name  "native wxDateEvent"

class wxDateEvent_php : public wxDateEvent{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxDateEvent;

static function_entry php_wxDateEvent_functions[] = {
        PHP_ME(php_wxDateEvent, GetDate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateEvent, SetDate, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxDateTime_entry;
void php_wxDateTime_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxDateTime_NAME "wxDateTime"
#define le_wxDateTime_name  "native wxDateTime"

class wxDateTime_php : public wxDateTime{
	public:
	wxDateTime_php():wxDateTime()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxDateTime;

static function_entry php_wxDateTime_functions[] = {
        PHP_ME(php_wxDateTime, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxCalendarDateAttr_entry;
void php_wxCalendarDateAttr_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxCalendarDateAttr_NAME "wxCalendarDateAttr"
#define le_wxCalendarDateAttr_name  "native wxCalendarDateAttr"

class wxCalendarDateAttr_php : public wxCalendarDateAttr{
	public:
	wxCalendarDateAttr_php():wxCalendarDateAttr()
	{
	}
	wxCalendarDateAttr_php(const wxColour& arg0 , const wxColour& arg1 = wxNullColour , const wxColour& arg2 = wxNullColour , const wxFont& arg3 = wxNullFont , wxCalendarDateBorder arg4 = wxCAL_BORDER_NONE):wxCalendarDateAttr(arg0 , arg1 , arg2 , arg3 , arg4)
	{
	}
	wxCalendarDateAttr_php(wxCalendarDateBorder arg0 , const wxColour& arg1 = wxNullColour):wxCalendarDateAttr(arg0 , arg1)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxCalendarDateAttr;

static function_entry php_wxCalendarDateAttr_functions[] = {
        PHP_ME(php_wxCalendarDateAttr, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxCalendarDateAttr, SetTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, SetBorderColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, SetBorder, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, SetHoliday, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, IsHoliday, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, HasBorder, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, HasFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, HasBorderColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, HasBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, HasTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, GetTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, GetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, GetBorderColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, GetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, GetBorder, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTimer_entry;
void php_wxTimer_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTimer_NAME "wxTimer"
#define le_wxTimer_name  "native wxTimer"

class wxTimer_php : public wxTimer{
	public:
	wxTimer_php():wxTimer()
	{
	}
	wxTimer_php(wxEvtHandler* arg0 , int arg1 = wxID_ANY):wxTimer(arg0 , arg1)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTimer;

static function_entry php_wxTimer_functions[] = {
        PHP_ME(php_wxTimer, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxTimer, Start, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTimer, Stop, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTimer, IsRunning, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxEvtHandler_entry;
void php_wxEvtHandler_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxEvtHandler_NAME "wxEvtHandler"
#define le_wxEvtHandler_name  "native wxEvtHandler"

class wxEvtHandler_php : public wxEvtHandler{
	public:
	wxEvtHandler_php():wxEvtHandler()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxEvtHandler;

static function_entry php_wxEvtHandler_functions[] = {
        PHP_ME(php_wxEvtHandler, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTimerEvent_entry;
void php_wxTimerEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTimerEvent_NAME "wxTimerEvent"
#define le_wxTimerEvent_name  "native wxTimerEvent"

class wxTimerEvent_php : public wxTimerEvent{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTimerEvent;

static function_entry php_wxTimerEvent_functions[] = {
        PHP_ME(php_wxTimerEvent, GetInterval, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxIPV4address_entry;
void php_wxIPV4address_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxIPV4address_NAME "wxIPV4address"
#define le_wxIPV4address_name  "native wxIPV4address"

class wxIPV4address_php : public wxIPV4address{
	public:
	wxIPV4address_php():wxIPV4address()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxIPV4address;

static function_entry php_wxIPV4address_functions[] = {
        PHP_ME(php_wxIPV4address, Hostname, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxIPV4address, Service, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxIPV4address, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxSockAddress, Clear, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSockAddress_entry;
void php_wxSockAddress_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSockAddress_NAME "wxSockAddress"
#define le_wxSockAddress_name  "native wxSockAddress"

class wxSockAddress_php : public wxSockAddress{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSockAddress;

static function_entry php_wxSockAddress_functions[] = {
        PHP_ME(php_wxSockAddress, Clear, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSocketClient_entry;
void php_wxSocketClient_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSocketClient_NAME "wxSocketClient"
#define le_wxSocketClient_name  "native wxSocketClient"

class wxSocketClient_php : public wxSocketClient{
	public:
	wxSocketClient_php(int arg0 = wxSOCKET_NONE):wxSocketClient(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSocketClient;

static function_entry php_wxSocketClient_functions[] = {
        PHP_ME(php_wxSocketClient, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketClient, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxSocketBase, SetEventHandler, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketBase, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketBase, Close, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketBase, Discard, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketBase, IsConnected, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketBase, Write, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSocketBase_entry;
void php_wxSocketBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSocketBase_NAME "wxSocketBase"
#define le_wxSocketBase_name  "native wxSocketBase"

class wxSocketBase_php : public wxSocketBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSocketBase;

static function_entry php_wxSocketBase_functions[] = {
        PHP_ME(php_wxSocketBase, SetEventHandler, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketBase, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketBase, Close, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketBase, Discard, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketBase, IsConnected, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketBase, Write, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxCheckBox_entry;
void php_wxCheckBox_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxCheckBox_NAME "wxCheckBox"
#define le_wxCheckBox_name  "native wxCheckBox"

class wxCheckBox_php : public wxCheckBox{
	public:
	wxCheckBox_php(wxWindow* arg0 , int arg1 , const wxString& arg2 , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 0 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxCheckBoxNameStr):wxCheckBox(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxCheckBox;

static function_entry php_wxCheckBox_functions[] = {
        PHP_ME(php_wxCheckBox, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxCheckBox, SetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCheckBox, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxDirDialog_entry;
void php_wxDirDialog_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxDirDialog_NAME "wxDirDialog"
#define le_wxDirDialog_name  "native wxDirDialog"

class wxDirDialog_php : public wxDirDialog{
	public:
	wxDirDialog_php(wxWindow* arg0 , const wxString& arg1 = wxDirSelectorPromptStr , const wxString& arg2 = wxEmptyString , long int arg3 = 536877120 , const wxPoint& arg4 = wxDefaultPosition , const wxSize& arg5 = wxDefaultSize , const wxString& arg6 = wxDirDialogNameStr):wxDirDialog(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxDirDialog;

static function_entry php_wxDirDialog_functions[] = {
        PHP_ME(php_wxDirDialog, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxDirDialog, SetPath, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDirDialog, ShowModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDirDialog, GetPath, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, EndModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, IsModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTopLevelWindowBase, SetIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxBitmapButton_entry;
void php_wxBitmapButton_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxBitmapButton_NAME "wxBitmapButton"
#define le_wxBitmapButton_name  "native wxBitmapButton"

class wxBitmapButton_php : public wxBitmapButton{
	public:
	wxBitmapButton_php(wxWindow* arg0 , int arg1 , const wxBitmap& arg2 , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 4 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxButtonNameStr):wxBitmapButton(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxBitmapButton;

static function_entry php_wxBitmapButton_functions[] = {
        PHP_ME(php_wxBitmapButton, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxButton, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxButton, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxButton, SetDefault, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxButton, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxButton, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxToggleButton_entry;
void php_wxToggleButton_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxToggleButton_NAME "wxToggleButton"
#define le_wxToggleButton_name  "native wxToggleButton"

class wxToggleButton_php : public wxToggleButton{
	public:
	wxToggleButton_php(wxWindow* arg0 , int arg1 , const wxString& arg2 , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 0 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxCheckBoxNameStr):wxToggleButton(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxToggleButton;

static function_entry php_wxToggleButton_functions[] = {
        PHP_ME(php_wxToggleButton, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxToggleButton, SetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToggleButton, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxChoice_entry;
void php_wxChoice_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxChoice_NAME "wxChoice"
#define le_wxChoice_name  "native wxChoice"

class wxChoice_php : public wxChoice{
	public:
	wxChoice_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , int arg4 = 0 , const wxString* arg5 = 0 , long int arg6 = 0 , const wxValidator& arg7 = wxDefaultValidator , const wxString& arg8 = wxChoiceNameStr):wxChoice(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8)
	{
	}
	wxChoice_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 , const wxSize& arg3 , const wxArrayString& arg4 , long int arg5 = 0 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxChoiceNameStr):wxChoice(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxChoice;

static function_entry php_wxChoice_functions[] = {
        PHP_ME(php_wxChoice, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxChoice, GetCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, GetCurrentSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, FindString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, Delete, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, Append, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxImageList_entry;
void php_wxImageList_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxImageList_NAME "wxImageList"
#define le_wxImageList_name  "native wxImageList"

class wxImageList_php : public wxImageList{
	public:
	wxImageList_php():wxImageList()
	{
	}
	wxImageList_php(int arg0 , int arg1 , bool arg2 = true , int arg3 = 1):wxImageList(arg0 , arg1 , arg2 , arg3)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxImageList;

static function_entry php_wxImageList_functions[] = {
        PHP_ME(php_wxImageList, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxImageList, Add, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImageList, GetBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImageList, GetIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImageList, Replace, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImageList, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImageList, RemoveAll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImageList, GetImageCount, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxXmlResource_entry;
void php_wxXmlResource_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxXmlResource_NAME "wxXmlResource"
#define le_wxXmlResource_name  "native wxXmlResource"

class wxXmlResource_php : public wxXmlResource{
	public:
	wxXmlResource_php(int arg0 = wxXRC_USE_LOCALE , const wxString& arg1 = wxEmptyString):wxXmlResource(arg0 , arg1)
	{
	}
	wxXmlResource_php(const wxString& arg0 , int arg1 = wxXRC_USE_LOCALE , const wxString& arg2 = wxEmptyString):wxXmlResource(arg0 , arg1 , arg2)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxXmlResource;

static function_entry php_wxXmlResource_functions[] = {
        PHP_ME(php_wxXmlResource, LoadToolBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, LoadDialog, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, LoadPanel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, LoadFrame, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, LoadBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, LoadIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxXmlResource, Load, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, Unload, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, InitAllHandlers, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, ClearHandlers, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, LoadMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, LoadMenuBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, GetXRCID, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, GetDomain, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, SetDomain, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxLocale_entry;
void php_wxLocale_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxLocale_NAME "wxLocale"
#define le_wxLocale_name  "native wxLocale"

class wxLocale_php : public wxLocale{
	public:
	wxLocale_php():wxLocale()
	{
	}
	wxLocale_php(int arg0 , int arg1 = 3):wxLocale(arg0 , arg1)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxLocale;

static function_entry php_wxLocale_functions[] = {
        PHP_ME(php_wxLocale, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxLocale, Init, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, IsAvailable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, IsLoaded, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, AddCatalogLookupPathPrefix, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, AddCatalog, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, GetName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, GetLocale, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, GetLanguage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, GetCanonicalName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, GetSystemLanguage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, GetSystemEncoding, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, GetSystemEncodingName, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTreeCtrlBase_entry;
void php_wxTreeCtrlBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTreeCtrlBase_NAME "wxTreeCtrlBase"
#define le_wxTreeCtrlBase_name  "native wxTreeCtrlBase"

class wxTreeCtrlBase_php : public wxTreeCtrlBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTreeCtrlBase;

static function_entry php_wxTreeCtrlBase_functions[] = {
        PHP_ME(php_wxTreeCtrlBase, AssignImageList, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxRadioBox_entry;
void php_wxRadioBox_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxRadioBox_NAME "wxRadioBox"
#define le_wxRadioBox_name  "native wxRadioBox"

class wxRadioBox_php : public wxRadioBox{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxRadioBox;

static function_entry php_wxRadioBox_functions[] = {
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxRadioButton_entry;
void php_wxRadioButton_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxRadioButton_NAME "wxRadioButton"
#define le_wxRadioButton_name  "native wxRadioButton"

class wxRadioButton_php : public wxRadioButton{
	public:
	wxRadioButton_php(wxWindow* arg0 , int arg1 , const wxString& arg2 , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 0 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxRadioButtonNameStr):wxRadioButton(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxRadioButton;

static function_entry php_wxRadioButton_functions[] = {
        PHP_ME(php_wxRadioButton, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxRadioButton, SetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioButton, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioButton, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioButton, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxListItem_entry;
void php_wxListItem_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxListItem_NAME "wxListItem"
#define le_wxListItem_name  "native wxListItem"

class wxListItem_php : public wxListItem{
	public:
	wxListItem_php():wxListItem()
	{
	}
	wxListItem_php(const wxListItem& arg0):wxListItem(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxListItem;

static function_entry php_wxListItem_functions[] = {
        PHP_ME(php_wxListItem, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxListItem, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, ClearAttributes, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, SetMask, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, SetColumn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, SetImage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, SetText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, SetWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, GetColumn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, GetText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, GetWidth, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxHtmlHelpController_entry;
void php_wxHtmlHelpController_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxHtmlHelpController_NAME "wxHtmlHelpController"
#define le_wxHtmlHelpController_name  "native wxHtmlHelpController"

class wxHtmlHelpController_php : public wxHtmlHelpController{
	public:
	wxHtmlHelpController_php(int arg0 = 95 , wxWindow* arg1 = 0l):wxHtmlHelpController(arg0 , arg1)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxHtmlHelpController;

static function_entry php_wxHtmlHelpController_functions[] = {
        PHP_ME(php_wxHtmlHelpController, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxHtmlHelpController, AddBook, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlHelpController, Display, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlHelpController, DisplayContents, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlHelpController, DisplayIndex, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlHelpController, SetTempDir, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlHelpController, SetTitleFormat, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTaskBarIcon_entry;
void php_wxTaskBarIcon_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTaskBarIcon_NAME "wxTaskBarIcon"
#define le_wxTaskBarIcon_name  "native wxTaskBarIcon"

class wxTaskBarIcon_php : public wxTaskBarIcon{
	public:
	wxTaskBarIcon_php():wxTaskBarIcon()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTaskBarIcon;

static function_entry php_wxTaskBarIcon_functions[] = {
        PHP_ME(php_wxTaskBarIcon, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxTaskBarIcon, SetIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTaskBarIcon, IsIconInstalled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTaskBarIcon, RemoveIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTaskBarIcon, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTaskBarIcon, IsOk, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxScrolledWindow_entry;
void php_wxScrolledWindow_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxScrolledWindow_NAME "wxScrolledWindow"
#define le_wxScrolledWindow_name  "native wxScrolledWindow"

class wxScrolledWindow_php : public wxScrolledWindow{
	public:
	wxScrolledWindow_php():wxScrolledWindow()
	{
	}
	wxScrolledWindow_php(wxWindow* arg0 , int arg1 = wxID_ANY , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = 3221225472u , const wxString& arg5 = wxPanelNameStr):wxScrolledWindow(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxScrolledWindow;

static function_entry php_wxScrolledWindow_functions[] = {
        PHP_ME(php_wxScrolledWindow, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxScrolledWindow, SetScrollRate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPanel, InitDialog, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPanel, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPanel, SetFocusIgnoringChildren, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxIdleEvent_entry;
void php_wxIdleEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxIdleEvent_NAME "wxIdleEvent"
#define le_wxIdleEvent_name  "native wxIdleEvent"

class wxIdleEvent_php : public wxIdleEvent{
	public:
	wxIdleEvent_php():wxIdleEvent()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxIdleEvent;

static function_entry php_wxIdleEvent_functions[] = {
        PHP_ME(php_wxIdleEvent, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSpinEvent_entry;
void php_wxSpinEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSpinEvent_NAME "wxSpinEvent"
#define le_wxSpinEvent_name  "native wxSpinEvent"

class wxSpinEvent_php : public wxSpinEvent{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSpinEvent;

static function_entry php_wxSpinEvent_functions[] = {
        PHP_ME(php_wxSpinEvent, GetPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxScrollEvent_entry;
void php_wxScrollEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxScrollEvent_NAME "wxScrollEvent"
#define le_wxScrollEvent_name  "native wxScrollEvent"

class wxScrollEvent_php : public wxScrollEvent{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxScrollEvent;

static function_entry php_wxScrollEvent_functions[] = {
        PHP_ME(php_wxScrollEvent, GetPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSpinButton_entry;
void php_wxSpinButton_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSpinButton_NAME "wxSpinButton"
#define le_wxSpinButton_name  "native wxSpinButton"

class wxSpinButton_php : public wxSpinButton{
	public:
	wxSpinButton_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , int arg4 = wxSP_VERTICAL):wxSpinButton(arg0 , arg1 , arg2 , arg3 , arg4)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSpinButton;

static function_entry php_wxSpinButton_functions[] = {
        PHP_ME(php_wxSpinButton, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxSpinButton, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSpinButton, SetRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSpinButton, SetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSpinCtrl_entry;
void php_wxSpinCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSpinCtrl_NAME "wxSpinCtrl"
#define le_wxSpinCtrl_name  "native wxSpinCtrl"

class wxSpinCtrl_php : public wxSpinCtrl{
	public:
	wxSpinCtrl_php(wxWindow* arg0 , int arg1 , const wxString& arg2 = wxEmptyString , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , int arg5 = wxSP_ARROW_KEYS , int arg6 = 0 , int arg7 = 100 , int arg8 = 0):wxSpinCtrl(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSpinCtrl;

static function_entry php_wxSpinCtrl_functions[] = {
        PHP_ME(php_wxSpinCtrl, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxSpinCtrl, GetMin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSpinCtrl, GetMax, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSpinCtrl, SetRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSpinCtrl, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSpinCtrl, SetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
