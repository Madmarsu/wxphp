#include "php_wxwidgets.h"
#include "frame.h"

bool isInvalidDer_wxWindow(int rsrc_type) {return (rsrc_type != le_wxWindow && rsrc_type != le_wxFrame && rsrc_type != le_wxSplashScreen && rsrc_type != le_wxStatusBar && rsrc_type != le_wxPanel && rsrc_type != le_wxScrolledWindow && rsrc_type != le_wxSplitterWindow && rsrc_type != le_wxTreeCtrl && rsrc_type != le_wxCheckListBox && rsrc_type != le_wxTextCtrl && rsrc_type != le_wxNotebook && rsrc_type != le_wxStaticText && rsrc_type != le_wxButton && rsrc_type != le_wxBitmapButton && rsrc_type != le_wxStaticBox && rsrc_type != le_wxListBox && rsrc_type != le_wxFileDialog && rsrc_type != le_wxDialog && rsrc_type != le_wxMessageDialog && rsrc_type != le_wxDirDialog && rsrc_type != le_wxListCtrl && rsrc_type != le_wxStaticBitmap && rsrc_type != le_wxGauge && rsrc_type != le_wxComboBox && rsrc_type != le_wxCalendarCtrl && rsrc_type != le_wxCheckBox && rsrc_type != le_wxToggleButton && rsrc_type != le_wxChoice && rsrc_type != le_wxStyledTextCtrl && rsrc_type != le_wxRadioButton && rsrc_type != le_wxSpinButton && rsrc_type != le_wxSpinCtrl);}
bool isInvalidDer_wxWindowBase(int rsrc_type) {return (rsrc_type != le_wxWindowBase && rsrc_type != le_wxFrame && rsrc_type != le_wxSplashScreen && rsrc_type != le_wxWindow && rsrc_type != le_wxStatusBar && rsrc_type != le_wxPanel && rsrc_type != le_wxScrolledWindow && rsrc_type != le_wxSplitterWindow && rsrc_type != le_wxTreeCtrl && rsrc_type != le_wxCheckListBox && rsrc_type != le_wxTextCtrl && rsrc_type != le_wxNotebook && rsrc_type != le_wxStaticText && rsrc_type != le_wxButton && rsrc_type != le_wxBitmapButton && rsrc_type != le_wxStaticBox && rsrc_type != le_wxListBox && rsrc_type != le_wxFileDialog && rsrc_type != le_wxDialog && rsrc_type != le_wxMessageDialog && rsrc_type != le_wxDirDialog && rsrc_type != le_wxListCtrl && rsrc_type != le_wxStaticBitmap && rsrc_type != le_wxGauge && rsrc_type != le_wxComboBox && rsrc_type != le_wxCalendarCtrl && rsrc_type != le_wxCheckBox && rsrc_type != le_wxToggleButton && rsrc_type != le_wxChoice && rsrc_type != le_wxStyledTextCtrl && rsrc_type != le_wxRadioButton && rsrc_type != le_wxSpinButton && rsrc_type != le_wxSpinCtrl);}
bool isInvalidDer_wxSizer(int rsrc_type) {return (rsrc_type != le_wxSizer && rsrc_type != le_wxBoxSizer && rsrc_type != le_wxStaticBoxSizer && rsrc_type != le_wxFlexGridSizer);}
bool isInvalidDer_wxControl(int rsrc_type) {return (rsrc_type != le_wxControl && rsrc_type != le_wxToolBarBase && rsrc_type != le_wxToolBar && rsrc_type != le_wxListCtrl && rsrc_type != le_wxRadioButton && rsrc_type != le_wxSpinButton && rsrc_type != le_wxSpinCtrl);}
bool isInvalidDer_wxEvtHandler(int rsrc_type) {return (rsrc_type != le_wxEvtHandler && rsrc_type != le_wxFrame && rsrc_type != le_wxSplashScreen && rsrc_type != le_wxWindow && rsrc_type != le_wxStatusBar && rsrc_type != le_wxPanel && rsrc_type != le_wxScrolledWindow && rsrc_type != le_wxSplitterWindow && rsrc_type != le_wxTreeCtrl && rsrc_type != le_wxCheckListBox && rsrc_type != le_wxTextCtrl && rsrc_type != le_wxNotebook && rsrc_type != le_wxStaticText && rsrc_type != le_wxButton && rsrc_type != le_wxBitmapButton && rsrc_type != le_wxStaticBox && rsrc_type != le_wxListBox && rsrc_type != le_wxFileDialog && rsrc_type != le_wxDialog && rsrc_type != le_wxMessageDialog && rsrc_type != le_wxDirDialog && rsrc_type != le_wxListCtrl && rsrc_type != le_wxStaticBitmap && rsrc_type != le_wxGauge && rsrc_type != le_wxComboBox && rsrc_type != le_wxCalendarCtrl && rsrc_type != le_wxCheckBox && rsrc_type != le_wxToggleButton && rsrc_type != le_wxChoice && rsrc_type != le_wxStyledTextCtrl && rsrc_type != le_wxRadioButton && rsrc_type != le_wxSpinButton && rsrc_type != le_wxSpinCtrl && rsrc_type != le_wxMenu && rsrc_type != le_wxValidator && rsrc_type != le_wxTaskBarIcon);}
bool isInvalidDer_wxDialog(int rsrc_type) {return (rsrc_type != le_wxDialog && rsrc_type != le_wxFileDialog && rsrc_type != le_wxMessageDialog && rsrc_type != le_wxDirDialog);}
class wxTreeItemIdUserValue : public wxTreeItemData {
public:
	int UserValue;
	wxTreeItemIdUserValue(int v) : wxTreeItemData() {UserValue = v;}

	static int GetUserValue(wxTreeCtrl_php *tree,wxTreeItemId &item)
	{
		wxTreeItemIdUserValue *tid = (wxTreeItemIdUserValue *) tree->GetItemData(item);
		return tid ? tid->UserValue : 0;
	}	
	static void SetUserValue(wxTreeCtrl_php *tree,wxTreeItemId &item,int v)
	{
		wxTreeItemIdUserValue *tid = (wxTreeItemIdUserValue *) tree->GetItemData(item);
		if (tid) tid->UserValue = v;
		else tree->SetItemData(item,new wxTreeItemIdUserValue(v));
	}	
};
void php_wxFrame_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxFrame, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!s!|z!z!l!s!", &_argObj0 , &_argLong0 , &_argStr0 , &_argStr0_len , &_argObj1 , &_argObj2 , &_argLong1 , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 7:
					_this = new wxFrame_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , wxString(_argStr1, wxConvUTF8));
					break;
				case 6:
					_this = new wxFrame_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1);
					break;
				case 5:
					_this = new wxFrame_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 4:
					_this = new wxFrame_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1);
					break;
				case 3:
					_this = new wxFrame_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxFrame);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxFrame_php*) _this)->evnArray);
			array_init(((wxFrame_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxFrame_php*) _this)->phpObj);
			*((wxFrame_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxFrame_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxFrame_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxFrame_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxFrame);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxFrame_php*) _this)->evnArray);
			array_init(((wxFrame_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxFrame_php*) _this)->phpObj);
			*((wxFrame_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxFrame_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxFrame_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxFrame, CreateStatusBar)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	long _argLong2;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|l!l!l!s!", &_argLong0 , &_argLong1 , &_argLong2 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			wxStatusBar* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 4:
					ret0 =  ((wxFrame_php*)_this)->CreateStatusBar((int)_argLong0 , (long int)_argLong1 , (int)_argLong2 , wxString(_argStr0, wxConvUTF8));
					break;
				case 3:
					ret0 =  ((wxFrame_php*)_this)->CreateStatusBar((int)_argLong0 , (long int)_argLong1 , (int)_argLong2);
					break;
				case 2:
					ret0 =  ((wxFrame_php*)_this)->CreateStatusBar((int)_argLong0 , (long int)_argLong1);
					break;
				case 1:
					ret0 =  ((wxFrame_php*)_this)->CreateStatusBar((int)_argLong0);
					break;
				case 0:
					ret0 =  ((wxFrame_php*)_this)->CreateStatusBar();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxStatusBar_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxStatusBar));return;			
		}
	}
}
PHP_METHOD(php_wxFrame, CreateToolBar)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|l!l!s!", &_argLong0 , &_argLong1 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			wxToolBar* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret0 =  ((wxFrame_php*)_this)->CreateToolBar((long int)_argLong0 , (int)_argLong1 , wxString(_argStr0, wxConvUTF8));
					break;
				case 2:
					ret0 =  ((wxFrame_php*)_this)->CreateToolBar((long int)_argLong0 , (int)_argLong1);
					break;
				case 1:
					ret0 =  ((wxFrame_php*)_this)->CreateToolBar((long int)_argLong0);
					break;
				case 0:
					ret0 =  ((wxFrame_php*)_this)->CreateToolBar();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxToolBar_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxToolBar));return;			
		}
	}
}
PHP_METHOD(php_wxFrame, GetClientAreaOrigin)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxPoint ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxFrame_php*)_this)->GetClientAreaOrigin();
					break;
				default:
					break;
			}
			void* ptr = safe_emalloc(1,sizeof(wxPoint),0);memcpy(ptr,&ret0,sizeof(wxPoint));object_init_ex(return_value,php_wxPoint_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ptr, le_wxPoint));return;			
		}
	}
}
PHP_METHOD(php_wxFrame, SetStatusBar)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxStatusBar))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxFrame_php*)_this)->SetStatusBar((wxStatusBar*) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxFrame, SetToolBar)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxToolBar))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxFrame_php*)_this)->SetToolBar((wxToolBar*) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxEvent_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxEvent, GetId)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxEvent_php*)_this)->GetId();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxEvent, SetEventType)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxEvent_php*)_this)->SetEventType((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxEvent, GetEventType)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxEvent_php*)_this)->GetEventType();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxEvent, GetEventObject)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxObject* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxEvent_php*)_this)->GetEventObject();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxObject_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxObject));return;			
		}
	}
}
PHP_METHOD(php_wxEvent, SetEventObject)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxObject))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxEvent_php*)_this)->SetEventObject((wxObject*) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxEvent, GetTimestamp)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			long int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxEvent_php*)_this)->GetTimestamp();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxEvent, SetTimestamp)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxEvent_php*)_this)->SetTimestamp((long int)_argLong0);
					break;
				case 0:
					 ((wxEvent_php*)_this)->SetTimestamp();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxEvent, SetId)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxEvent_php*)_this)->SetId((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxEvent, Skip)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxEvent_php*)_this)->Skip(_argBool0);
					break;
				case 0:
					 ((wxEvent_php*)_this)->Skip();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxEvent, GetSkipped)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxEvent_php*)_this)->GetSkipped();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxEvent, IsCommandEvent)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxEvent_php*)_this)->IsCommandEvent();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxEvent, ShouldPropagate)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxEvent_php*)_this)->ShouldPropagate();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxEvent, StopPropagation)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxEvent_php*)_this)->StopPropagation();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxEvent, ResumePropagation)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxEvent_php*)_this)->ResumePropagation((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxWindow_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxWindow, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!|z!z!l!s!", &_argObj0 , &_argLong0 , &_argObj1 , &_argObj2 , &_argLong1 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 6:
					_this = new wxWindow_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , wxString(_argStr0, wxConvUTF8));
					break;
				case 5:
					_this = new wxWindow_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1);
					break;
				case 4:
					_this = new wxWindow_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 3:
					_this = new wxWindow_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1);
					break;
				case 2:
					_this = new wxWindow_php((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxWindow);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxWindow_php*) _this)->evnArray);
			array_init(((wxWindow_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxWindow_php*) _this)->phpObj);
			*((wxWindow_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxWindow_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxWindow_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxWindow_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxWindow);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxWindow_php*) _this)->evnArray);
			array_init(((wxWindow_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxWindow_php*) _this)->phpObj);
			*((wxWindow_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxWindow_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxWindow_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxWindow, Show)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxWindow_php*)_this)->Show(_argBool0);
					break;
				case 0:
					ret0 =  ((wxWindow_php*)_this)->Show();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxWindow, Create)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!|z!z!l!s!", &_argObj0 , &_argLong0 , &_argObj1 , &_argObj2 , &_argLong1 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 6:
					ret0 =  ((wxWindow_php*)_this)->Create((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , wxString(_argStr0, wxConvUTF8));
					break;
				case 5:
					ret0 =  ((wxWindow_php*)_this)->Create((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1);
					break;
				case 4:
					ret0 =  ((wxWindow_php*)_this)->Create((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 3:
					ret0 =  ((wxWindow_php*)_this)->Create((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1);
					break;
				case 2:
					ret0 =  ((wxWindow_php*)_this)->Create((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxWindow, Destroy)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxWindow_php*)_this)->Destroy();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxWindow, Raise)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxWindow_php*)_this)->Raise();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxWindow, Lower)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxWindow_php*)_this)->Lower();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxWindow, Enable)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxWindow_php*)_this)->Enable(_argBool0);
					break;
				case 0:
					ret0 =  ((wxWindow_php*)_this)->Enable();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxWindow, IsRetained)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxWindow_php*)_this)->IsRetained();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxWindow, SetFocus)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxWindow_php*)_this)->SetFocus();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxWindow, Reparent)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindowBase(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxWindow_php*)_this)->Reparent((wxWindowBase*) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxWindow, WarpPointer)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxWindow_php*)_this)->WarpPointer((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxWindow, Update)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxWindow_php*)_this)->Update();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxWindow, ClearBackground)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxWindow_php*)_this)->ClearBackground();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxWindow, SetBackgroundColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxWindow_php*)_this)->SetBackgroundColour(*(wxColour *) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxWindow, SetForegroundColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxWindow_php*)_this)->SetForegroundColour(*(wxColour *) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxWindow, SetCursor)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxCursor))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxWindow_php*)_this)->SetCursor(*(wxCursor *) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxWindow, SetFont)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxFont))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxWindow_php*)_this)->SetFont(*(wxFont *) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxWindow, GetCharHeight)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxWindow_php*)_this)->GetCharHeight();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxWindow, GetCharWidth)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxWindow_php*)_this)->GetCharWidth();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxWindow, SetScrollbar)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	long _argLong1;
	long _argLong2;
	long _argLong3;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!l!l!|b!", &_argLong0 , &_argLong1 , &_argLong2 , &_argLong3 , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 5:
					 ((wxWindow_php*)_this)->SetScrollbar((int)_argLong0 , (int)_argLong1 , (int)_argLong2 , (int)_argLong3 , _argBool0);
					break;
				case 4:
					 ((wxWindow_php*)_this)->SetScrollbar((int)_argLong0 , (int)_argLong1 , (int)_argLong2 , (int)_argLong3);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxWindow, SetScrollPos)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!|b!", &_argLong0 , &_argLong1 , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					 ((wxWindow_php*)_this)->SetScrollPos((int)_argLong0 , (int)_argLong1 , _argBool0);
					break;
				case 2:
					 ((wxWindow_php*)_this)->SetScrollPos((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxWindow, GetScrollThumb)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxWindow_php*)_this)->GetScrollThumb((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxWindow, GetScrollRange)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxWindow_php*)_this)->GetScrollRange((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxWindow, AddChild)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindowBase(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxWindow_php*)_this)->AddChild((wxWindowBase*) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxWindow, RemoveChild)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindowBase(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxWindow_php*)_this)->RemoveChild((wxWindowBase*) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxWindow, GetHandle)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxWindow_php*)_this)->GetHandle();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxWindow, Refresh)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!z!", &_argBool0 , &_argObj0 ) == SUCCESS)
	{
		
		if(valid && _argObj0)
		{
			if (_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxRect))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxWindow_php*)_this)->Refresh(_argBool0 , (wxRect*) _ptrObj0);
					break;
				case 1:
					 ((wxWindow_php*)_this)->Refresh(_argBool0);
					break;
				case 0:
					 ((wxWindow_php*)_this)->Refresh();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxWindow, IsFrozen)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxWindow_php*)_this)->IsFrozen();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
void php_wxPoint_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxPoint, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					_this = new wxPoint_php((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxPoint);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxPoint_php*) _this)->evnArray);
			array_init(((wxPoint_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxPoint_php*) _this)->phpObj);
			*((wxPoint_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxPoint_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxPoint_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
void php_wxSize_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxSize, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					_this = new wxSize_php((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxSize);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxSize_php*) _this)->evnArray);
			array_init(((wxSize_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxSize_php*) _this)->phpObj);
			*((wxSize_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxSize_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxSize_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
void php_wxToolBar_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxToolBar, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxToolBar_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxToolBar);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxToolBar_php*) _this)->evnArray);
			array_init(((wxToolBar_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxToolBar_php*) _this)->phpObj);
			*((wxToolBar_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxToolBar_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxToolBar_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!|z!z!l!s!", &_argObj0 , &_argLong0 , &_argObj1 , &_argObj2 , &_argLong1 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 6:
					_this = new wxToolBar_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , wxString(_argStr0, wxConvUTF8));
					break;
				case 5:
					_this = new wxToolBar_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1);
					break;
				case 4:
					_this = new wxToolBar_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 3:
					_this = new wxToolBar_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1);
					break;
				case 2:
					_this = new wxToolBar_php((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxToolBar);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxToolBar_php*) _this)->evnArray);
			array_init(((wxToolBar_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxToolBar_php*) _this)->phpObj);
			*((wxToolBar_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxToolBar_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxToolBar_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxToolBar, Create)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!|z!z!l!s!", &_argObj0 , &_argLong0 , &_argObj1 , &_argObj2 , &_argLong1 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 6:
					ret0 =  ((wxToolBar_php*)_this)->Create((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , wxString(_argStr0, wxConvUTF8));
					break;
				case 5:
					ret0 =  ((wxToolBar_php*)_this)->Create((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1);
					break;
				case 4:
					ret0 =  ((wxToolBar_php*)_this)->Create((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 3:
					ret0 =  ((wxToolBar_php*)_this)->Create((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1);
					break;
				case 2:
					ret0 =  ((wxToolBar_php*)_this)->Create((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxToolBar, SetMargins)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxToolBar_php*)_this)->SetMargins((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxToolBar, SetToolSeparation)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxToolBar_php*)_this)->SetToolSeparation((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxToolBar, FindToolForPosition)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxToolBarToolBase* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxToolBar_php*)_this)->FindToolForPosition((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxToolBarToolBase_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxToolBarToolBase));return;			
		}
	}
}
PHP_METHOD(php_wxToolBar, SetToolShortHelp)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!", &_argLong0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxToolBar_php*)_this)->SetToolShortHelp((int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxStatusBar_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxStatusBar, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxStatusBar_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxStatusBar);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxStatusBar_php*) _this)->evnArray);
			array_init(((wxStatusBar_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxStatusBar_php*) _this)->phpObj);
			*((wxStatusBar_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxStatusBar_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxStatusBar_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!l!|s!", &_argObj0 , &_argLong0 , &_argLong1 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 4:
					_this = new wxStatusBar_php((wxWindow*) _ptrObj0 , (int)_argLong0 , (long int)_argLong1 , wxString(_argStr0, wxConvUTF8));
					break;
				case 3:
					_this = new wxStatusBar_php((wxWindow*) _ptrObj0 , (int)_argLong0 , (long int)_argLong1);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxStatusBar);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxStatusBar_php*) _this)->evnArray);
			array_init(((wxStatusBar_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxStatusBar_php*) _this)->phpObj);
			*((wxStatusBar_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxStatusBar_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxStatusBar_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxStatusBar, SetStatusText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!|l!", &_argStr0 , &_argStr0_len , &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStatusBar_php*)_this)->SetStatusText(wxString(_argStr0, wxConvUTF8) , (int)_argLong0);
					break;
				case 1:
					 ((wxStatusBar_php*)_this)->SetStatusText(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStatusBar, GetStatusText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxStatusBar_php*)_this)->GetStatusText((int)_argLong0);
					break;
				case 0:
					ret0 =  ((wxStatusBar_php*)_this)->GetStatusText();
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
void php_wxBoxSizer_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxBoxSizer, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					_this = new wxBoxSizer_php((int)_argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxBoxSizer);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxBoxSizer_php*) _this)->evnArray);
			array_init(((wxBoxSizer_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxBoxSizer_php*) _this)->phpObj);
			*((wxBoxSizer_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxBoxSizer_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxBoxSizer_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxBoxSizer, RecalcSizes)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxBoxSizer_php*)_this)->RecalcSizes();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxBoxSizer, CalcMin)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxSize ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxBoxSizer_php*)_this)->CalcMin();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSize_entry);add_property_resource(return_value, "wxResource", zend_list_insert(&ret0, le_wxSize));return;			
		}
	}
}
PHP_METHOD(php_wxBoxSizer, GetOrientation)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxBoxSizer_php*)_this)->GetOrientation();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
void php_wxSizer_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxSizer, Add)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	long _argLong2;
	long _argLong3;
	long _argLong4;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|l!l!l!z!", &_argObj0 , &_argLong0 , &_argLong1 , &_argLong2 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxObject))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid)
		{
			wxSizerItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 5:
					ret0 =  ((wxSizer_php*)_this)->Add((wxWindow*) _ptrObj0 , (int)_argLong0 , (int)_argLong1 , (int)_argLong2 , (wxObject*) _ptrObj1);
					break;
				case 4:
					ret0 =  ((wxSizer_php*)_this)->Add((wxWindow*) _ptrObj0 , (int)_argLong0 , (int)_argLong1 , (int)_argLong2);
					break;
				case 3:
					ret0 =  ((wxSizer_php*)_this)->Add((wxWindow*) _ptrObj0 , (int)_argLong0 , (int)_argLong1);
					break;
				case 2:
					ret0 =  ((wxSizer_php*)_this)->Add((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				case 1:
					ret0 =  ((wxSizer_php*)_this)->Add((wxWindow*) _ptrObj0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxSizerItem));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!z!", &_argObj0 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxSizerFlags))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxSizerItem* ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret1 =  ((wxSizer_php*)_this)->Add((wxWindow*) _ptrObj0 , *(wxSizerFlags *) _ptrObj1);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret1, le_wxSizerItem));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|l!l!l!z!", &_argObj0 , &_argLong0 , &_argLong1 , &_argLong2 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxSizer(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxObject))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid)
		{
			wxSizerItem* ret2;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 5:
					ret2 =  ((wxSizer_php*)_this)->Add((wxSizer*) _ptrObj0 , (int)_argLong0 , (int)_argLong1 , (int)_argLong2 , (wxObject*) _ptrObj1);
					break;
				case 4:
					ret2 =  ((wxSizer_php*)_this)->Add((wxSizer*) _ptrObj0 , (int)_argLong0 , (int)_argLong1 , (int)_argLong2);
					break;
				case 3:
					ret2 =  ((wxSizer_php*)_this)->Add((wxSizer*) _ptrObj0 , (int)_argLong0 , (int)_argLong1);
					break;
				case 2:
					ret2 =  ((wxSizer_php*)_this)->Add((wxSizer*) _ptrObj0 , (int)_argLong0);
					break;
				case 1:
					ret2 =  ((wxSizer_php*)_this)->Add((wxSizer*) _ptrObj0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret2, le_wxSizerItem));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!z!", &_argObj0 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxSizer(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxSizerFlags))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxSizerItem* ret3;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret3 =  ((wxSizer_php*)_this)->Add((wxSizer*) _ptrObj0 , *(wxSizerFlags *) _ptrObj1);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret3, le_wxSizerItem));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!|l!l!l!z!", &_argLong0 , &_argLong1 , &_argLong2 , &_argLong3 , &_argLong4 , &_argObj0 ) == SUCCESS)
	{
		
		if(valid && _argObj0)
		{
			if (_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxObject))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
		}
		if(valid)
		{
			wxSizerItem* ret4;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 6:
					ret4 =  ((wxSizer_php*)_this)->Add((int)_argLong0 , (int)_argLong1 , (int)_argLong2 , (int)_argLong3 , (int)_argLong4 , (wxObject*) _ptrObj0);
					break;
				case 5:
					ret4 =  ((wxSizer_php*)_this)->Add((int)_argLong0 , (int)_argLong1 , (int)_argLong2 , (int)_argLong3 , (int)_argLong4);
					break;
				case 4:
					ret4 =  ((wxSizer_php*)_this)->Add((int)_argLong0 , (int)_argLong1 , (int)_argLong2 , (int)_argLong3);
					break;
				case 3:
					ret4 =  ((wxSizer_php*)_this)->Add((int)_argLong0 , (int)_argLong1 , (int)_argLong2);
					break;
				case 2:
					ret4 =  ((wxSizer_php*)_this)->Add((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret4, le_wxSizerItem));return;			
		}
	}
}
PHP_METHOD(php_wxSizer, AddSpacer)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxSizerItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxSizer_php*)_this)->AddSpacer((int)_argLong0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxSizerItem));return;			
		}
	}
}
PHP_METHOD(php_wxSizer, AddStretchSpacer)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxSizerItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxSizer_php*)_this)->AddStretchSpacer((int)_argLong0);
					break;
				case 0:
					ret0 =  ((wxSizer_php*)_this)->AddStretchSpacer();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxSizerItem));return;			
		}
	}
}
PHP_METHOD(php_wxSizer, Insert)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	long _argLong2;
	long _argLong3;
	long _argLong4;
	long _argLong5;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!|l!l!l!z!", &_argLong0 , &_argObj0 , &_argLong1 , &_argLong2 , &_argLong3 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxObject))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid)
		{
			wxSizerItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 6:
					ret0 =  ((wxSizer_php*)_this)->Insert((unsigned int)_argLong0 , (wxWindow*) _ptrObj0 , (int)_argLong1 , (int)_argLong2 , (int)_argLong3 , (wxObject*) _ptrObj1);
					break;
				case 5:
					ret0 =  ((wxSizer_php*)_this)->Insert((unsigned int)_argLong0 , (wxWindow*) _ptrObj0 , (int)_argLong1 , (int)_argLong2 , (int)_argLong3);
					break;
				case 4:
					ret0 =  ((wxSizer_php*)_this)->Insert((unsigned int)_argLong0 , (wxWindow*) _ptrObj0 , (int)_argLong1 , (int)_argLong2);
					break;
				case 3:
					ret0 =  ((wxSizer_php*)_this)->Insert((unsigned int)_argLong0 , (wxWindow*) _ptrObj0 , (int)_argLong1);
					break;
				case 2:
					ret0 =  ((wxSizer_php*)_this)->Insert((unsigned int)_argLong0 , (wxWindow*) _ptrObj0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxSizerItem));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!|l!l!l!z!", &_argLong0 , &_argObj0 , &_argLong1 , &_argLong2 , &_argLong3 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxSizer(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxObject))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid)
		{
			wxSizerItem* ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 6:
					ret1 =  ((wxSizer_php*)_this)->Insert((unsigned int)_argLong0 , (wxSizer*) _ptrObj0 , (int)_argLong1 , (int)_argLong2 , (int)_argLong3 , (wxObject*) _ptrObj1);
					break;
				case 5:
					ret1 =  ((wxSizer_php*)_this)->Insert((unsigned int)_argLong0 , (wxSizer*) _ptrObj0 , (int)_argLong1 , (int)_argLong2 , (int)_argLong3);
					break;
				case 4:
					ret1 =  ((wxSizer_php*)_this)->Insert((unsigned int)_argLong0 , (wxSizer*) _ptrObj0 , (int)_argLong1 , (int)_argLong2);
					break;
				case 3:
					ret1 =  ((wxSizer_php*)_this)->Insert((unsigned int)_argLong0 , (wxSizer*) _ptrObj0 , (int)_argLong1);
					break;
				case 2:
					ret1 =  ((wxSizer_php*)_this)->Insert((unsigned int)_argLong0 , (wxSizer*) _ptrObj0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret1, le_wxSizerItem));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!l!|l!l!l!z!", &_argLong0 , &_argLong1 , &_argLong2 , &_argLong3 , &_argLong4 , &_argLong5 , &_argObj0 ) == SUCCESS)
	{
		
		if(valid && _argObj0)
		{
			if (_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxObject))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
		}
		if(valid)
		{
			wxSizerItem* ret2;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 7:
					ret2 =  ((wxSizer_php*)_this)->Insert((unsigned int)_argLong0 , (int)_argLong1 , (int)_argLong2 , (int)_argLong3 , (int)_argLong4 , (int)_argLong5 , (wxObject*) _ptrObj0);
					break;
				case 6:
					ret2 =  ((wxSizer_php*)_this)->Insert((unsigned int)_argLong0 , (int)_argLong1 , (int)_argLong2 , (int)_argLong3 , (int)_argLong4 , (int)_argLong5);
					break;
				case 5:
					ret2 =  ((wxSizer_php*)_this)->Insert((unsigned int)_argLong0 , (int)_argLong1 , (int)_argLong2 , (int)_argLong3 , (int)_argLong4);
					break;
				case 4:
					ret2 =  ((wxSizer_php*)_this)->Insert((unsigned int)_argLong0 , (int)_argLong1 , (int)_argLong2 , (int)_argLong3);
					break;
				case 3:
					ret2 =  ((wxSizer_php*)_this)->Insert((unsigned int)_argLong0 , (int)_argLong1 , (int)_argLong2);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret2, le_wxSizerItem));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!z!", &_argLong0 , &_argObj0 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxSizerFlags))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxSizerItem* ret3;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret3 =  ((wxSizer_php*)_this)->Insert((unsigned int)_argLong0 , (wxWindow*) _ptrObj0 , *(wxSizerFlags *) _ptrObj1);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret3, le_wxSizerItem));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!z!", &_argLong0 , &_argObj0 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxSizer(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxSizerFlags))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxSizerItem* ret4;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret4 =  ((wxSizer_php*)_this)->Insert((unsigned int)_argLong0 , (wxSizer*) _ptrObj0 , *(wxSizerFlags *) _ptrObj1);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret4, le_wxSizerItem));return;			
		}
	}
}
PHP_METHOD(php_wxSizer, InsertSpacer)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxSizerItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxSizer_php*)_this)->InsertSpacer((unsigned int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxSizerItem));return;			
		}
	}
}
PHP_METHOD(php_wxSizer, InsertStretchSpacer)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!|l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxSizerItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxSizer_php*)_this)->InsertStretchSpacer((unsigned int)_argLong0 , (int)_argLong1);
					break;
				case 1:
					ret0 =  ((wxSizer_php*)_this)->InsertStretchSpacer((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxSizerItem));return;			
		}
	}
}
PHP_METHOD(php_wxSizer, Prepend)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	long _argLong2;
	long _argLong3;
	long _argLong4;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!z!", &_argObj0 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxSizerFlags))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxSizerItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxSizer_php*)_this)->Prepend((wxWindow*) _ptrObj0 , *(wxSizerFlags *) _ptrObj1);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxSizerItem));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|l!l!l!z!", &_argObj0 , &_argLong0 , &_argLong1 , &_argLong2 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxObject))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid)
		{
			wxSizerItem* ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 5:
					ret1 =  ((wxSizer_php*)_this)->Prepend((wxWindow*) _ptrObj0 , (int)_argLong0 , (int)_argLong1 , (int)_argLong2 , (wxObject*) _ptrObj1);
					break;
				case 4:
					ret1 =  ((wxSizer_php*)_this)->Prepend((wxWindow*) _ptrObj0 , (int)_argLong0 , (int)_argLong1 , (int)_argLong2);
					break;
				case 3:
					ret1 =  ((wxSizer_php*)_this)->Prepend((wxWindow*) _ptrObj0 , (int)_argLong0 , (int)_argLong1);
					break;
				case 2:
					ret1 =  ((wxSizer_php*)_this)->Prepend((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				case 1:
					ret1 =  ((wxSizer_php*)_this)->Prepend((wxWindow*) _ptrObj0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret1, le_wxSizerItem));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|l!l!l!z!", &_argObj0 , &_argLong0 , &_argLong1 , &_argLong2 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxSizer(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxObject))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid)
		{
			wxSizerItem* ret2;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 5:
					ret2 =  ((wxSizer_php*)_this)->Prepend((wxSizer*) _ptrObj0 , (int)_argLong0 , (int)_argLong1 , (int)_argLong2 , (wxObject*) _ptrObj1);
					break;
				case 4:
					ret2 =  ((wxSizer_php*)_this)->Prepend((wxSizer*) _ptrObj0 , (int)_argLong0 , (int)_argLong1 , (int)_argLong2);
					break;
				case 3:
					ret2 =  ((wxSizer_php*)_this)->Prepend((wxSizer*) _ptrObj0 , (int)_argLong0 , (int)_argLong1);
					break;
				case 2:
					ret2 =  ((wxSizer_php*)_this)->Prepend((wxSizer*) _ptrObj0 , (int)_argLong0);
					break;
				case 1:
					ret2 =  ((wxSizer_php*)_this)->Prepend((wxSizer*) _ptrObj0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret2, le_wxSizerItem));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!z!", &_argObj0 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxSizer(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxSizerFlags))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxSizerItem* ret3;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret3 =  ((wxSizer_php*)_this)->Prepend((wxSizer*) _ptrObj0 , *(wxSizerFlags *) _ptrObj1);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret3, le_wxSizerItem));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!|l!l!l!z!", &_argLong0 , &_argLong1 , &_argLong2 , &_argLong3 , &_argLong4 , &_argObj0 ) == SUCCESS)
	{
		
		if(valid && _argObj0)
		{
			if (_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxObject))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
		}
		if(valid)
		{
			wxSizerItem* ret4;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 6:
					ret4 =  ((wxSizer_php*)_this)->Prepend((int)_argLong0 , (int)_argLong1 , (int)_argLong2 , (int)_argLong3 , (int)_argLong4 , (wxObject*) _ptrObj0);
					break;
				case 5:
					ret4 =  ((wxSizer_php*)_this)->Prepend((int)_argLong0 , (int)_argLong1 , (int)_argLong2 , (int)_argLong3 , (int)_argLong4);
					break;
				case 4:
					ret4 =  ((wxSizer_php*)_this)->Prepend((int)_argLong0 , (int)_argLong1 , (int)_argLong2 , (int)_argLong3);
					break;
				case 3:
					ret4 =  ((wxSizer_php*)_this)->Prepend((int)_argLong0 , (int)_argLong1 , (int)_argLong2);
					break;
				case 2:
					ret4 =  ((wxSizer_php*)_this)->Prepend((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret4, le_wxSizerItem));return;			
		}
	}
}
PHP_METHOD(php_wxSizer, PrependSpacer)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxSizerItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxSizer_php*)_this)->PrependSpacer((int)_argLong0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxSizerItem));return;			
		}
	}
}
PHP_METHOD(php_wxSizer, PrependStretchSpacer)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxSizerItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxSizer_php*)_this)->PrependStretchSpacer((int)_argLong0);
					break;
				case 0:
					ret0 =  ((wxSizer_php*)_this)->PrependStretchSpacer();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxSizerItem));return;			
		}
	}
}
PHP_METHOD(php_wxSizer, Remove)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxSizer_php*)_this)->Remove((wxWindow*) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxSizer(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret1 =  ((wxSizer_php*)_this)->Remove((wxSizer*) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret1)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret2;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret2 =  ((wxSizer_php*)_this)->Remove((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret2)			
		}
	}
}
PHP_METHOD(php_wxSizer, Detach)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxSizer_php*)_this)->Detach((wxWindow*) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxSizer(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret1 =  ((wxSizer_php*)_this)->Detach((wxSizer*) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret1)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret2;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret2 =  ((wxSizer_php*)_this)->Detach((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret2)			
		}
	}
}
PHP_METHOD(php_wxSizer, Clear)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxSizer_php*)_this)->Clear(_argBool0);
					break;
				case 0:
					 ((wxSizer_php*)_this)->Clear();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxSizer, SetMinSize)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxSizer_php*)_this)->SetMinSize((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxSizer, SetItemMinSize)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	long _argLong2;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!l!", &_argObj0 , &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret0 =  ((wxSizer_php*)_this)->SetItemMinSize((wxWindow*) _ptrObj0 , (int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!l!", &_argObj0 , &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxSizer(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret1 =  ((wxSizer_php*)_this)->SetItemMinSize((wxSizer*) _ptrObj0 , (int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret1)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!l!", &_argLong0 , &_argLong1 , &_argLong2 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret2;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret2 =  ((wxSizer_php*)_this)->SetItemMinSize((unsigned int)_argLong0 , (int)_argLong1 , (int)_argLong2);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret2)			
		}
	}
}
PHP_METHOD(php_wxSizer, GetSize)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxSize ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxSizer_php*)_this)->GetSize();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSize_entry);add_property_resource(return_value, "wxResource", zend_list_insert(&ret0, le_wxSize));return;			
		}
	}
}
PHP_METHOD(php_wxSizer, GetPosition)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxPoint ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxSizer_php*)_this)->GetPosition();
					break;
				default:
					break;
			}
			void* ptr = safe_emalloc(1,sizeof(wxPoint),0);memcpy(ptr,&ret0,sizeof(wxPoint));object_init_ex(return_value,php_wxPoint_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ptr, le_wxPoint));return;			
		}
	}
}
PHP_METHOD(php_wxSizer, GetMinSize)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxSize ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxSizer_php*)_this)->GetMinSize();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSize_entry);add_property_resource(return_value, "wxResource", zend_list_insert(&ret0, le_wxSize));return;			
		}
	}
}
PHP_METHOD(php_wxSizer, RecalcSizes)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxSizer_php*)_this)->RecalcSizes();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxSizer, CalcMin)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxSize ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxSizer_php*)_this)->CalcMin();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSize_entry);add_property_resource(return_value, "wxResource", zend_list_insert(&ret0, le_wxSize));return;			
		}
	}
}
PHP_METHOD(php_wxSizer, Layout)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxSizer_php*)_this)->Layout();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxSizer, Fit)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxSize ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxSizer_php*)_this)->Fit((wxWindow*) _ptrObj0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSize_entry);add_property_resource(return_value, "wxResource", zend_list_insert(&ret0, le_wxSize));return;			
		}
	}
}
PHP_METHOD(php_wxSizer, FitInside)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxSizer_php*)_this)->FitInside((wxWindow*) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxSizer, SetSizeHints)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxSizer_php*)_this)->SetSizeHints((wxWindow*) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxSizer, SetVirtualSizeHints)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxSizer_php*)_this)->SetVirtualSizeHints((wxWindow*) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxSizer, GetChildren)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxSizer_php*)_this)->GetChildren();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxSizer, SetDimension)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	long _argLong2;
	long _argLong3;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!l!l!", &_argLong0 , &_argLong1 , &_argLong2 , &_argLong3 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 4:
					 ((wxSizer_php*)_this)->SetDimension((int)_argLong0 , (int)_argLong1 , (int)_argLong2 , (int)_argLong3);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxSizer, GetItem)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|b!", &_argObj0 , &_argBool0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxSizerItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxSizer_php*)_this)->GetItem((wxWindow*) _ptrObj0 , _argBool0);
					break;
				case 1:
					ret0 =  ((wxSizer_php*)_this)->GetItem((wxWindow*) _ptrObj0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxSizerItem));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|b!", &_argObj0 , &_argBool0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxSizer(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxSizerItem* ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret1 =  ((wxSizer_php*)_this)->GetItem((wxSizer*) _ptrObj0 , _argBool0);
					break;
				case 1:
					ret1 =  ((wxSizer_php*)_this)->GetItem((wxSizer*) _ptrObj0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret1, le_wxSizerItem));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxSizerItem* ret2;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret2 =  ((wxSizer_php*)_this)->GetItem((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizerItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret2, le_wxSizerItem));return;			
		}
	}
}
PHP_METHOD(php_wxSizer, Hide)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|b!", &_argObj0 , &_argBool0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxSizer(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxSizer_php*)_this)->Hide((wxSizer*) _ptrObj0 , _argBool0);
					break;
				case 1:
					ret0 =  ((wxSizer_php*)_this)->Hide((wxSizer*) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|b!", &_argObj0 , &_argBool0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret1 =  ((wxSizer_php*)_this)->Hide((wxWindow*) _ptrObj0 , _argBool0);
					break;
				case 1:
					ret1 =  ((wxSizer_php*)_this)->Hide((wxWindow*) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret1)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret2;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret2 =  ((wxSizer_php*)_this)->Hide((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret2)			
		}
	}
}
PHP_METHOD(php_wxSizer, IsShown)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxSizer_php*)_this)->IsShown((wxWindow*) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxSizer(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret1 =  ((wxSizer_php*)_this)->IsShown((wxSizer*) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret1)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret2;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret2 =  ((wxSizer_php*)_this)->IsShown((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret2)			
		}
	}
}
void php_wxColour_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxColour, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxColour_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxColour);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxColour_php*) _this)->evnArray);
			array_init(((wxColour_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxColour_php*) _this)->phpObj);
			*((wxColour_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxColour_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxColour_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					_this = new wxColour_php(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxColour);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxColour_php*) _this)->evnArray);
			array_init(((wxColour_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxColour_php*) _this)->phpObj);
			*((wxColour_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxColour_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxColour_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					_this = new wxColour_php(*(wxColour *) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxColour);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxColour_php*) _this)->evnArray);
			array_init(((wxColour_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxColour_php*) _this)->phpObj);
			*((wxColour_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxColour_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxColour_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					_this = new wxColour_php((long unsigned int)_argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxColour);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxColour_php*) _this)->evnArray);
			array_init(((wxColour_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxColour_php*) _this)->phpObj);
			*((wxColour_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxColour_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxColour_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
void php_wxCursor_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxCursor, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					_this = new wxCursor_php((int)_argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxCursor);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxCursor_php*) _this)->evnArray);
			array_init(((wxCursor_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxCursor_php*) _this)->phpObj);
			*((wxCursor_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxCursor_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxCursor_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxCursor_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxCursor);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxCursor_php*) _this)->evnArray);
			array_init(((wxCursor_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxCursor_php*) _this)->phpObj);
			*((wxCursor_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxCursor_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxCursor_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxImage))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					_this = new wxCursor_php(*(wxImage *) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxCursor);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxCursor_php*) _this)->evnArray);
			array_init(((wxCursor_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxCursor_php*) _this)->phpObj);
			*((wxCursor_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxCursor_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxCursor_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxCursor))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					_this = new wxCursor_php(*(wxCursor *) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxCursor);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxCursor_php*) _this)->evnArray);
			array_init(((wxCursor_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxCursor_php*) _this)->phpObj);
			*((wxCursor_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxCursor_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxCursor_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
void php_wxFont_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxFont, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxFont_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxFont);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxFont_php*) _this)->evnArray);
			array_init(((wxFont_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxFont_php*) _this)->phpObj);
			*((wxFont_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxFont_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxFont_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
void php_wxWindowBase_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxWindowBase, SetSizer)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|b!", &_argObj0 , &_argBool0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxSizer(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxWindowBase_php*)_this)->SetSizer((wxSizer*) _ptrObj0 , _argBool0);
					break;
				case 1:
					 ((wxWindowBase_php*)_this)->SetSizer((wxSizer*) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxWindowBase, GetSizer)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxSizer* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxWindowBase_php*)_this)->GetSizer();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSizer_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxSizer));return;			
		}
	}
}
PHP_METHOD(php_wxWindowBase, Layout)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxWindowBase_php*)_this)->Layout();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxWindowBase, Fit)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxWindowBase_php*)_this)->Fit();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxWindowBase, SetWindowStyle)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxWindowBase_php*)_this)->SetWindowStyle((long int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxWindowBase, PopupMenu)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|z!", &_argObj0 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxMenu))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxWindowBase_php*)_this)->PopupMenu((wxMenu*) _ptrObj0 , *(wxPoint *) _ptrObj1);
					break;
				case 1:
					ret0 =  ((wxWindowBase_php*)_this)->PopupMenu((wxMenu*) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!l!", &_argObj0 , &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxMenu))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret1 =  ((wxWindowBase_php*)_this)->PopupMenu((wxMenu*) _ptrObj0 , (int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret1)			
		}
	}
}
PHP_METHOD(php_wxWindowBase, IsShown)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxWindowBase_php*)_this)->IsShown();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxWindowBase, IsEnabled)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxWindowBase_php*)_this)->IsEnabled();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxWindowBase, IsShownOnScreen)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxWindowBase_php*)_this)->IsShownOnScreen();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxWindowBase, UpdateWindowUI)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxWindowBase_php*)_this)->UpdateWindowUI((long int)_argLong0);
					break;
				case 0:
					 ((wxWindowBase_php*)_this)->UpdateWindowUI();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxWindowBase, FindWindow)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxWindow* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxWindowBase_php*)_this)->FindWindow((long int)_argLong0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxWindow_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxWindow));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			wxWindow* ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret1 =  ((wxWindowBase_php*)_this)->FindWindow(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxWindow_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret1, le_wxWindow));return;			
		}
	}
}
void php_wxSizerFlags_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxSizerFlags, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxSizerFlags))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					_this = new wxSizerFlags_php(*(wxSizerFlags *) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxSizerFlags);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxSizerFlags_php*) _this)->evnArray);
			array_init(((wxSizerFlags_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxSizerFlags_php*) _this)->phpObj);
			*((wxSizerFlags_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxSizerFlags_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxSizerFlags_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
void php_wxSizerItem_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxSizerItem, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxSizerItem_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxSizerItem);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxSizerItem_php*) _this)->evnArray);
			array_init(((wxSizerItem_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxSizerItem_php*) _this)->phpObj);
			*((wxSizerItem_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxSizerItem_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxSizerItem_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
void php_wxClassInfo_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxClassInfo, GetSize)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxClassInfo_php*)_this)->GetSize();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
void php_wxObject_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxObject, IsKindOf)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxClassInfo))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxObject_php*)_this)->IsKindOf((wxClassInfo*) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
void php_wxImage_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxImage, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	bool _argBool0;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxImage_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxImage);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxImage_php*) _this)->evnArray);
			array_init(((wxImage_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxImage_php*) _this)->phpObj);
			*((wxImage_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxImage_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxImage_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!|l!l!", &_argStr0 , &_argStr0_len , &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					_this = new wxImage_php(wxString(_argStr0, wxConvUTF8) , (long int)_argLong0 , (int)_argLong1);
					break;
				case 2:
					_this = new wxImage_php(wxString(_argStr0, wxConvUTF8) , (long int)_argLong0);
					break;
				case 1:
					_this = new wxImage_php(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxImage);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxImage_php*) _this)->evnArray);
			array_init(((wxImage_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxImage_php*) _this)->phpObj);
			*((wxImage_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxImage_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxImage_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxImage))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					_this = new wxImage_php(*(wxImage *) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxImage);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxImage_php*) _this)->evnArray);
			array_init(((wxImage_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxImage_php*) _this)->phpObj);
			*((wxImage_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxImage_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxImage_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!|b!", &_argLong0 , &_argLong1 , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					_this = new wxImage_php((int)_argLong0 , (int)_argLong1 , _argBool0);
					break;
				case 2:
					_this = new wxImage_php((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxImage);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxImage_php*) _this)->evnArray);
			array_init(((wxImage_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxImage_php*) _this)->phpObj);
			*((wxImage_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxImage_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxImage_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|l!l!", &_argObj0 , &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxStringInputStream && rsrc_type != le_wxMemoryInputStream))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					_this = new wxImage_php(*(wxInputStream *) _ptrObj0 , (wxBitmapType) _argLong0 , (int)_argLong1);
					break;
				case 2:
					_this = new wxImage_php(*(wxInputStream *) _ptrObj0 , (wxBitmapType) _argLong0);
					break;
				case 1:
					_this = new wxImage_php(*(wxInputStream *) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxImage);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxImage_php*) _this)->evnArray);
			array_init(((wxImage_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxImage_php*) _this)->phpObj);
			*((wxImage_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxImage_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxImage_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxImage, Scale)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	long _argLong2;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!|l!", &_argLong0 , &_argLong1 , &_argLong2 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxImage ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret0 =  ((wxImage_php*)_this)->Scale((int)_argLong0 , (int)_argLong1 , (int)_argLong2);
					break;
				case 2:
					ret0 =  ((wxImage_php*)_this)->Scale((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			void* ptr = safe_emalloc(1,sizeof(wxImage),0);memcpy(ptr,&ret0,sizeof(wxImage));object_init_ex(return_value,php_wxImage_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ptr, le_wxImage));return;			
		}
	}
}
PHP_METHOD(php_wxImage, Rescale)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	long _argLong2;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!|l!", &_argLong0 , &_argLong1 , &_argLong2 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					 ((wxImage_php*)_this)->Rescale((int)_argLong0 , (int)_argLong1 , (int)_argLong2);
					break;
				case 2:
					 ((wxImage_php*)_this)->Rescale((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxImage, Resize)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	long _argLong2;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!z!|l!l!l!", &_argObj0 , &_argObj1 , &_argLong0 , &_argLong1 , &_argLong2 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 5:
					 ((wxImage_php*)_this)->Resize(*(wxSize *) _ptrObj0 , *(wxPoint *) _ptrObj1 , (int)_argLong0 , (int)_argLong1 , (int)_argLong2);
					break;
				case 4:
					 ((wxImage_php*)_this)->Resize(*(wxSize *) _ptrObj0 , *(wxPoint *) _ptrObj1 , (int)_argLong0 , (int)_argLong1);
					break;
				case 3:
					 ((wxImage_php*)_this)->Resize(*(wxSize *) _ptrObj0 , *(wxPoint *) _ptrObj1 , (int)_argLong0);
					break;
				case 2:
					 ((wxImage_php*)_this)->Resize(*(wxSize *) _ptrObj0 , *(wxPoint *) _ptrObj1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxImage, Rotate)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!|b!z!", &_argLong0 , &_argObj0 , &_argBool0 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid)
		{
			wxImage ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 4:
					ret0 =  ((wxImage_php*)_this)->Rotate((double)_argLong0 , *(wxPoint *) _ptrObj0 , _argBool0 , (wxPoint*) _ptrObj1);
					break;
				case 3:
					ret0 =  ((wxImage_php*)_this)->Rotate((double)_argLong0 , *(wxPoint *) _ptrObj0 , _argBool0);
					break;
				case 2:
					ret0 =  ((wxImage_php*)_this)->Rotate((double)_argLong0 , *(wxPoint *) _ptrObj0);
					break;
				default:
					break;
			}
			void* ptr = safe_emalloc(1,sizeof(wxImage),0);memcpy(ptr,&ret0,sizeof(wxImage));object_init_ex(return_value,php_wxImage_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ptr, le_wxImage));return;			
		}
	}
}
PHP_METHOD(php_wxImage, Rotate90)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxImage ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxImage_php*)_this)->Rotate90(_argBool0);
					break;
				case 0:
					ret0 =  ((wxImage_php*)_this)->Rotate90();
					break;
				default:
					break;
			}
			void* ptr = safe_emalloc(1,sizeof(wxImage),0);memcpy(ptr,&ret0,sizeof(wxImage));object_init_ex(return_value,php_wxImage_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ptr, le_wxImage));return;			
		}
	}
}
PHP_METHOD(php_wxImage, Mirror)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxImage ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxImage_php*)_this)->Mirror(_argBool0);
					break;
				case 0:
					ret0 =  ((wxImage_php*)_this)->Mirror();
					break;
				default:
					break;
			}
			void* ptr = safe_emalloc(1,sizeof(wxImage),0);memcpy(ptr,&ret0,sizeof(wxImage));object_init_ex(return_value,php_wxImage_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ptr, le_wxImage));return;			
		}
	}
}
PHP_METHOD(php_wxImage, GetImageCount)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!|l!", &_argStr0 , &_argStr0_len , &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxImage_php*)_this)->GetImageCount(wxString(_argStr0, wxConvUTF8) , (long int)_argLong0);
					break;
				case 1:
					ret0 =  ((wxImage_php*)_this)->GetImageCount(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|l!", &_argObj0 , &_argLong0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxStringInputStream && rsrc_type != le_wxMemoryInputStream))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret1 =  ((wxImage_php*)_this)->GetImageCount(*(wxInputStream *) _ptrObj0 , (long int)_argLong0);
					break;
				case 1:
					ret1 =  ((wxImage_php*)_this)->GetImageCount(*(wxInputStream *) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret1)			
		}
	}
}
PHP_METHOD(php_wxImage, LoadFile)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!|l!l!", &_argStr0 , &_argStr0_len , &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret0 =  ((wxImage_php*)_this)->LoadFile(wxString(_argStr0, wxConvUTF8) , (long int)_argLong0 , (int)_argLong1);
					break;
				case 2:
					ret0 =  ((wxImage_php*)_this)->LoadFile(wxString(_argStr0, wxConvUTF8) , (long int)_argLong0);
					break;
				case 1:
					ret0 =  ((wxImage_php*)_this)->LoadFile(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|l!l!", &_argObj0 , &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxStringInputStream && rsrc_type != le_wxMemoryInputStream))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret1 =  ((wxImage_php*)_this)->LoadFile(*(wxInputStream *) _ptrObj0 , (long int)_argLong0 , (int)_argLong1);
					break;
				case 2:
					ret1 =  ((wxImage_php*)_this)->LoadFile(*(wxInputStream *) _ptrObj0 , (long int)_argLong0);
					break;
				case 1:
					ret1 =  ((wxImage_php*)_this)->LoadFile(*(wxInputStream *) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret1)			
		}
	}
}
void php_wxMenuItem_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxMenuItem, Check)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxMenuItem_php*)_this)->Check(_argBool0);
					break;
				case 0:
					 ((wxMenuItem_php*)_this)->Check();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxMenuItem, Enable)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxMenuItem_php*)_this)->Enable(_argBool0);
					break;
				case 0:
					 ((wxMenuItem_php*)_this)->Enable();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxMenuItem, IsChecked)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxMenuItem_php*)_this)->IsChecked();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxMenuItem, SetBitmap)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxMenuItem_php*)_this)->SetBitmap(*(wxBitmap *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxMenuItemBase_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxMenuItemBase, SetMenu)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxMenu))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxMenuItemBase_php*)_this)->SetMenu((wxMenu*) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxMenuItemBase, GetMenu)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxMenu* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxMenuItemBase_php*)_this)->GetMenu();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenu_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxMenu));return;			
		}
	}
}
PHP_METHOD(php_wxMenuItemBase, GetId)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxMenuItemBase_php*)_this)->GetId();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxMenuItemBase, IsSeparator)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxMenuItemBase_php*)_this)->IsSeparator();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxMenuItemBase, SetText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxMenuItemBase_php*)_this)->SetText(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxMenuItemBase, GetLabel)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxMenuItemBase_php*)_this)->GetLabel();
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxMenuItemBase, GetLabelFromText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxMenuItemBase_php*)_this)->GetLabelFromText(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxMenuItemBase, GetKind)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxMenuItemBase_php*)_this)->GetKind();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxMenuItemBase, IsCheckable)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxMenuItemBase_php*)_this)->IsCheckable();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxMenuItemBase, IsSubMenu)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxMenuItemBase_php*)_this)->IsSubMenu();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxMenuItemBase, SetSubMenu)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxMenu))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxMenuItemBase_php*)_this)->SetSubMenu((wxMenu*) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxMenuItemBase, GetSubMenu)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxMenu* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxMenuItemBase_php*)_this)->GetSubMenu();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenu_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxMenu));return;			
		}
	}
}
PHP_METHOD(php_wxMenuItemBase, Enable)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxMenuItemBase_php*)_this)->Enable(_argBool0);
					break;
				case 0:
					 ((wxMenuItemBase_php*)_this)->Enable();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxMenuItemBase, IsEnabled)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxMenuItemBase_php*)_this)->IsEnabled();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxMenuItemBase, Check)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxMenuItemBase_php*)_this)->Check(_argBool0);
					break;
				case 0:
					 ((wxMenuItemBase_php*)_this)->Check();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxMenuItemBase, IsChecked)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxMenuItemBase_php*)_this)->IsChecked();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxMenuItemBase, SetHelp)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxMenuItemBase_php*)_this)->SetHelp(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxMenu_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxMenu, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!|l!", &_argStr0 , &_argStr0_len , &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					_this = new wxMenu_php(wxString(_argStr0, wxConvUTF8) , (long int)_argLong0);
					break;
				case 1:
					_this = new wxMenu_php(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxMenu);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxMenu_php*) _this)->evnArray);
			array_init(((wxMenu_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxMenu_php*) _this)->phpObj);
			*((wxMenu_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxMenu_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxMenu_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					_this = new wxMenu_php((long int)_argLong0);
					break;
				case 0:
					_this = new wxMenu_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxMenu);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxMenu_php*) _this)->evnArray);
			array_init(((wxMenu_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxMenu_php*) _this)->phpObj);
			*((wxMenu_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxMenu_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxMenu_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
void php_wxBitmap_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxBitmap, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!|l!", &_argStr0 , &_argStr0_len , &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					_this = new wxBitmap_php(wxString(_argStr0, wxConvUTF8) , (wxBitmapType) _argLong0);
					break;
				case 1:
					_this = new wxBitmap_php(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxBitmap);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxBitmap_php*) _this)->evnArray);
			array_init(((wxBitmap_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxBitmap_php*) _this)->phpObj);
			*((wxBitmap_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxBitmap_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxBitmap_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxBitmap_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxBitmap);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxBitmap_php*) _this)->evnArray);
			array_init(((wxBitmap_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxBitmap_php*) _this)->phpObj);
			*((wxBitmap_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxBitmap_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxBitmap_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|l!", &_argObj0 , &_argLong0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxImage))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					_this = new wxBitmap_php(*(wxImage *) _ptrObj0 , (int)_argLong0);
					break;
				case 1:
					_this = new wxBitmap_php(*(wxImage *) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxBitmap);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxBitmap_php*) _this)->evnArray);
			array_init(((wxBitmap_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxBitmap_php*) _this)->phpObj);
			*((wxBitmap_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxBitmap_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxBitmap_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxBitmap, GetHeight)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxBitmap_php*)_this)->GetHeight();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxBitmap, GetWidth)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxBitmap_php*)_this)->GetWidth();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxBitmap, GetDepth)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxBitmap_php*)_this)->GetDepth();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxBitmap, CopyFromIcon)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxBitmap_php*)_this)->CopyFromIcon(*(wxIcon *) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxBitmap, ConvertToImage)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxImage ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxBitmap_php*)_this)->ConvertToImage();
					break;
				default:
					break;
			}
			void* ptr = safe_emalloc(1,sizeof(wxImage),0);memcpy(ptr,&ret0,sizeof(wxImage));object_init_ex(return_value,php_wxImage_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ptr, le_wxImage));return;			
		}
	}
}
void php_wxMenuBase_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxMenuBase, Append)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!z!|s!", &_argLong0 , &_argStr0 , &_argStr0_len , &_argObj0 , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxMenu))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxMenuItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 4:
					ret0 =  ((wxMenuBase_php*)_this)->Append((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , (wxMenu*) _ptrObj0 , wxString(_argStr1, wxConvUTF8));
					break;
				case 3:
					ret0 =  ((wxMenuBase_php*)_this)->Append((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , (wxMenu*) _ptrObj0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenuItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxMenuItem));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxMenuItem))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxMenuItem* ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret1 =  ((wxMenuBase_php*)_this)->Append((wxMenuItem*) _ptrObj0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenuItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret1, le_wxMenuItem));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!|s!l!", &_argLong0 , &_argStr0 , &_argStr0_len , &_argStr1 , &_argStr1_len , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxMenuItem* ret2;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 4:
					ret2 =  ((wxMenuBase_php*)_this)->Append((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8) , (wxItemKind) _argLong1);
					break;
				case 3:
					ret2 =  ((wxMenuBase_php*)_this)->Append((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8));
					break;
				case 2:
					ret2 =  ((wxMenuBase_php*)_this)->Append((int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenuItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret2, le_wxMenuItem));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!s!b!", &_argLong0 , &_argStr0 , &_argStr0_len , &_argStr1 , &_argStr1_len , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 4:
					 ((wxMenuBase_php*)_this)->Append((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8) , _argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxMenuBase, AppendCheckItem)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!|s!", &_argLong0 , &_argStr0 , &_argStr0_len , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(valid)
		{
			wxMenuItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret0 =  ((wxMenuBase_php*)_this)->AppendCheckItem((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8));
					break;
				case 2:
					ret0 =  ((wxMenuBase_php*)_this)->AppendCheckItem((int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenuItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxMenuItem));return;			
		}
	}
}
PHP_METHOD(php_wxMenuBase, AppendRadioItem)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!|s!", &_argLong0 , &_argStr0 , &_argStr0_len , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(valid)
		{
			wxMenuItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret0 =  ((wxMenuBase_php*)_this)->AppendRadioItem((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8));
					break;
				case 2:
					ret0 =  ((wxMenuBase_php*)_this)->AppendRadioItem((int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenuItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxMenuItem));return;			
		}
	}
}
PHP_METHOD(php_wxMenuBase, Break)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxMenuBase_php*)_this)->Break();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxMenuBase, Insert)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!", &_argLong0 , &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxMenuItem))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxMenuItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxMenuBase_php*)_this)->Insert((unsigned int)_argLong0 , (wxMenuItem*) _ptrObj0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenuItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxMenuItem));return;			
		}
	}
}
PHP_METHOD(php_wxMenuBase, InsertSeparator)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxMenuItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxMenuBase_php*)_this)->InsertSeparator((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenuItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxMenuItem));return;			
		}
	}
}
PHP_METHOD(php_wxMenuBase, InsertCheckItem)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!s!|s!", &_argLong0 , &_argLong1 , &_argStr0 , &_argStr0_len , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(valid)
		{
			wxMenuItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 4:
					ret0 =  ((wxMenuBase_php*)_this)->InsertCheckItem((unsigned int)_argLong0 , (int)_argLong1 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8));
					break;
				case 3:
					ret0 =  ((wxMenuBase_php*)_this)->InsertCheckItem((unsigned int)_argLong0 , (int)_argLong1 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenuItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxMenuItem));return;			
		}
	}
}
PHP_METHOD(php_wxMenuBase, InsertRadioItem)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!s!|s!", &_argLong0 , &_argLong1 , &_argStr0 , &_argStr0_len , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(valid)
		{
			wxMenuItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 4:
					ret0 =  ((wxMenuBase_php*)_this)->InsertRadioItem((unsigned int)_argLong0 , (int)_argLong1 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8));
					break;
				case 3:
					ret0 =  ((wxMenuBase_php*)_this)->InsertRadioItem((unsigned int)_argLong0 , (int)_argLong1 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenuItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxMenuItem));return;			
		}
	}
}
PHP_METHOD(php_wxMenuBase, Prepend)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxMenuItem))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxMenuItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxMenuBase_php*)_this)->Prepend((wxMenuItem*) _ptrObj0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenuItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxMenuItem));return;			
		}
	}
}
PHP_METHOD(php_wxMenuBase, PrependSeparator)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxMenuItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxMenuBase_php*)_this)->PrependSeparator();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenuItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxMenuItem));return;			
		}
	}
}
PHP_METHOD(php_wxMenuBase, PrependCheckItem)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!|s!", &_argLong0 , &_argStr0 , &_argStr0_len , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(valid)
		{
			wxMenuItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret0 =  ((wxMenuBase_php*)_this)->PrependCheckItem((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8));
					break;
				case 2:
					ret0 =  ((wxMenuBase_php*)_this)->PrependCheckItem((int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenuItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxMenuItem));return;			
		}
	}
}
PHP_METHOD(php_wxMenuBase, PrependRadioItem)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!|s!", &_argLong0 , &_argStr0 , &_argStr0_len , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(valid)
		{
			wxMenuItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret0 =  ((wxMenuBase_php*)_this)->PrependRadioItem((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8));
					break;
				case 2:
					ret0 =  ((wxMenuBase_php*)_this)->PrependRadioItem((int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenuItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxMenuItem));return;			
		}
	}
}
PHP_METHOD(php_wxMenuBase, Remove)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxMenuItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxMenuBase_php*)_this)->Remove((int)_argLong0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenuItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxMenuItem));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxMenuItem))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxMenuItem* ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret1 =  ((wxMenuBase_php*)_this)->Remove((wxMenuItem*) _ptrObj0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenuItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret1, le_wxMenuItem));return;			
		}
	}
}
PHP_METHOD(php_wxMenuBase, Delete)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxMenuBase_php*)_this)->Delete((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxMenuItem))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret1 =  ((wxMenuBase_php*)_this)->Delete((wxMenuItem*) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret1)			
		}
	}
}
PHP_METHOD(php_wxMenuBase, Destroy)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxMenuBase_php*)_this)->Destroy((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxMenuItem))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret1 =  ((wxMenuBase_php*)_this)->Destroy((wxMenuItem*) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret1)			
		}
	}
}
PHP_METHOD(php_wxMenuBase, GetMenuItemCount)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			unsigned int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxMenuBase_php*)_this)->GetMenuItemCount();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxMenuBase, GetTitle)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxMenuBase_php*)_this)->GetTitle();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxMenuBase, FindItem)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxMenuBase_php*)_this)->FindItem(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxMenuBase, FindItemByPosition)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxMenuItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxMenuBase_php*)_this)->FindItemByPosition((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenuItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxMenuItem));return;			
		}
	}
}
PHP_METHOD(php_wxMenuBase, Enable)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!b!", &_argLong0 , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxMenuBase_php*)_this)->Enable((int)_argLong0 , _argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxMenuBase, IsEnabled)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxMenuBase_php*)_this)->IsEnabled((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxMenuBase, Check)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!b!", &_argLong0 , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxMenuBase_php*)_this)->Check((int)_argLong0 , _argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxMenuBase, IsChecked)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxMenuBase_php*)_this)->IsChecked((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxMenuBase, SetLabel)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!", &_argLong0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxMenuBase_php*)_this)->SetLabel((int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxMenuBase, GetLabel)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxMenuBase_php*)_this)->GetLabel((int)_argLong0);
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxMenuBase, SetHelpString)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!", &_argLong0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxMenuBase_php*)_this)->SetHelpString((int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxMenuBase, GetHelpString)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxMenuBase_php*)_this)->GetHelpString((int)_argLong0);
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxMenuBase, SetTitle)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxMenuBase_php*)_this)->SetTitle(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxMenuBase, AppendSeparator)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxMenuItem* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxMenuBase_php*)_this)->AppendSeparator();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenuItem_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxMenuItem));return;			
		}
	}
}
void php_wxMenuBar_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxMenuBar, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					_this = new wxMenuBar_php((long int)_argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxMenuBar);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxMenuBar_php*) _this)->evnArray);
			array_init(((wxMenuBar_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxMenuBar_php*) _this)->phpObj);
			*((wxMenuBar_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxMenuBar_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxMenuBar_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxMenuBar_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxMenuBar);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxMenuBar_php*) _this)->evnArray);
			array_init(((wxMenuBar_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxMenuBar_php*) _this)->phpObj);
			*((wxMenuBar_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxMenuBar_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxMenuBar_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxMenuBar, Append)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!s!", &_argObj0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxMenu))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxMenuBar_php*)_this)->Append((wxMenu*) _ptrObj0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxMenuBar, Insert)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!s!", &_argLong0 , &_argObj0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxMenu))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret0 =  ((wxMenuBar_php*)_this)->Insert((unsigned int)_argLong0 , (wxMenu*) _ptrObj0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxMenuBar, Replace)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!s!", &_argLong0 , &_argObj0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxMenu))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxMenu* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret0 =  ((wxMenuBar_php*)_this)->Replace((unsigned int)_argLong0 , (wxMenu*) _ptrObj0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenu_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxMenu));return;			
		}
	}
}
PHP_METHOD(php_wxMenuBar, Remove)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxMenu* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxMenuBar_php*)_this)->Remove((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenu_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxMenu));return;			
		}
	}
}
PHP_METHOD(php_wxMenuBar, FindMenuItem)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!s!", &_argStr0 , &_argStr0_len , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxMenuBar_php*)_this)->FindMenuItem(wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxMenuBar, EnableTop)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!b!", &_argLong0 , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxMenuBar_php*)_this)->EnableTop((unsigned int)_argLong0 , _argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxMenuBar, SetLabelTop)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!", &_argLong0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxMenuBar_php*)_this)->SetLabelTop((unsigned int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxToolBarBase_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxToolBarBase, AddCheckTool)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	char* _argStr2;
	int _argStr2_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!z!|z!s!s!z!", &_argLong0 , &_argStr0 , &_argStr0_len , &_argObj0 , &_argObj1 , &_argStr1 , &_argStr1_len , &_argStr2 , &_argStr2_len , &_argObj2 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxObject))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid)
		{
			wxToolBarToolBase* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 7:
					ret0 =  ((wxToolBarBase_php*)_this)->AddCheckTool((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxBitmap *) _ptrObj0 , *(wxBitmap *) _ptrObj1 , wxString(_argStr1, wxConvUTF8) , wxString(_argStr2, wxConvUTF8) , (wxObject*) _ptrObj2);
					break;
				case 6:
					ret0 =  ((wxToolBarBase_php*)_this)->AddCheckTool((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxBitmap *) _ptrObj0 , *(wxBitmap *) _ptrObj1 , wxString(_argStr1, wxConvUTF8) , wxString(_argStr2, wxConvUTF8));
					break;
				case 5:
					ret0 =  ((wxToolBarBase_php*)_this)->AddCheckTool((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxBitmap *) _ptrObj0 , *(wxBitmap *) _ptrObj1 , wxString(_argStr1, wxConvUTF8));
					break;
				case 4:
					ret0 =  ((wxToolBarBase_php*)_this)->AddCheckTool((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxBitmap *) _ptrObj0 , *(wxBitmap *) _ptrObj1);
					break;
				case 3:
					ret0 =  ((wxToolBarBase_php*)_this)->AddCheckTool((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxBitmap *) _ptrObj0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxToolBarToolBase_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxToolBarToolBase));return;			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, AddRadioTool)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	char* _argStr2;
	int _argStr2_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!z!|z!s!s!z!", &_argLong0 , &_argStr0 , &_argStr0_len , &_argObj0 , &_argObj1 , &_argStr1 , &_argStr1_len , &_argStr2 , &_argStr2_len , &_argObj2 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxObject))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid)
		{
			wxToolBarToolBase* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 7:
					ret0 =  ((wxToolBarBase_php*)_this)->AddRadioTool((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxBitmap *) _ptrObj0 , *(wxBitmap *) _ptrObj1 , wxString(_argStr1, wxConvUTF8) , wxString(_argStr2, wxConvUTF8) , (wxObject*) _ptrObj2);
					break;
				case 6:
					ret0 =  ((wxToolBarBase_php*)_this)->AddRadioTool((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxBitmap *) _ptrObj0 , *(wxBitmap *) _ptrObj1 , wxString(_argStr1, wxConvUTF8) , wxString(_argStr2, wxConvUTF8));
					break;
				case 5:
					ret0 =  ((wxToolBarBase_php*)_this)->AddRadioTool((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxBitmap *) _ptrObj0 , *(wxBitmap *) _ptrObj1 , wxString(_argStr1, wxConvUTF8));
					break;
				case 4:
					ret0 =  ((wxToolBarBase_php*)_this)->AddRadioTool((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxBitmap *) _ptrObj0 , *(wxBitmap *) _ptrObj1);
					break;
				case 3:
					ret0 =  ((wxToolBarBase_php*)_this)->AddRadioTool((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxBitmap *) _ptrObj0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxToolBarToolBase_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxToolBarToolBase));return;			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, InsertTool)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!", &_argLong0 , &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxToolBarToolBase))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxToolBarToolBase* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxToolBarBase_php*)_this)->InsertTool((unsigned int)_argLong0 , (wxToolBarToolBase*) _ptrObj0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxToolBarToolBase_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxToolBarToolBase));return;			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, AddControl)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxControl(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxToolBarToolBase* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxToolBarBase_php*)_this)->AddControl((wxControl*) _ptrObj0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxToolBarToolBase_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxToolBarToolBase));return;			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, InsertControl)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!", &_argLong0 , &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxControl(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxToolBarToolBase* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxToolBarBase_php*)_this)->InsertControl((unsigned int)_argLong0 , (wxControl*) _ptrObj0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxToolBarToolBase_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxToolBarToolBase));return;			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, FindControl)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxControl* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxToolBarBase_php*)_this)->FindControl((int)_argLong0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxControl_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxControl));return;			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, AddSeparator)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxToolBarToolBase* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxToolBarBase_php*)_this)->AddSeparator();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxToolBarToolBase_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxToolBarToolBase));return;			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, InsertSeparator)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxToolBarToolBase* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxToolBarBase_php*)_this)->InsertSeparator((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxToolBarToolBase_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxToolBarToolBase));return;			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, RemoveTool)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxToolBarToolBase* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxToolBarBase_php*)_this)->RemoveTool((int)_argLong0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxToolBarToolBase_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxToolBarToolBase));return;			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, DeleteToolByPos)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxToolBarBase_php*)_this)->DeleteToolByPos((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, DeleteTool)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxToolBarBase_php*)_this)->DeleteTool((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, ClearTools)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxToolBarBase_php*)_this)->ClearTools();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, Realize)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxToolBarBase_php*)_this)->Realize();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, EnableTool)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!b!", &_argLong0 , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxToolBarBase_php*)_this)->EnableTool((int)_argLong0 , _argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, ToggleTool)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!b!", &_argLong0 , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxToolBarBase_php*)_this)->ToggleTool((int)_argLong0 , _argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, SetToolClientData)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!", &_argLong0 , &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxObject))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxToolBarBase_php*)_this)->SetToolClientData((int)_argLong0 , (wxObject*) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, GetToolPos)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxToolBarBase_php*)_this)->GetToolPos((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, GetToolState)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxToolBarBase_php*)_this)->GetToolState((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, GetToolEnabled)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxToolBarBase_php*)_this)->GetToolEnabled((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, SetToolShortHelp)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!", &_argLong0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxToolBarBase_php*)_this)->SetToolShortHelp((int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, GetToolShortHelp)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxToolBarBase_php*)_this)->GetToolShortHelp((int)_argLong0);
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, SetToolLongHelp)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!", &_argLong0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxToolBarBase_php*)_this)->SetToolLongHelp((int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, GetToolLongHelp)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxToolBarBase_php*)_this)->GetToolLongHelp((int)_argLong0);
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, SetToolPacking)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxToolBarBase_php*)_this)->SetToolPacking((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, GetToolPacking)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxToolBarBase_php*)_this)->GetToolPacking();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, GetToolSeparation)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxToolBarBase_php*)_this)->GetToolSeparation();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, SetToolBitmapSize)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxToolBarBase_php*)_this)->SetToolBitmapSize(*(wxSize *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, GetToolBitmapSize)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxSize ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxToolBarBase_php*)_this)->GetToolBitmapSize();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSize_entry);add_property_resource(return_value, "wxResource", zend_list_insert(&ret0, le_wxSize));return;			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, GetToolSize)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxSize ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxToolBarBase_php*)_this)->GetToolSize();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSize_entry);add_property_resource(return_value, "wxResource", zend_list_insert(&ret0, le_wxSize));return;			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, FindToolForPosition)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxToolBarToolBase* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxToolBarBase_php*)_this)->FindToolForPosition((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxToolBarToolBase_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxToolBarToolBase));return;			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, FindById)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxToolBarToolBase* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxToolBarBase_php*)_this)->FindById((int)_argLong0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxToolBarToolBase_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxToolBarToolBase));return;			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, GetMargins)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxSize ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxToolBarBase_php*)_this)->GetMargins();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxSize_entry);add_property_resource(return_value, "wxResource", zend_list_insert(&ret0, le_wxSize));return;			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, GetToolsCount)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			unsigned int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxToolBarBase_php*)_this)->GetToolsCount();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxToolBarBase, AddTool)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	char* _argStr2;
	int _argStr2_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxToolBarToolBase))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxToolBarToolBase* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxToolBarBase_php*)_this)->AddTool((wxToolBarToolBase*) _ptrObj0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxToolBarToolBase_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxToolBarToolBase));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!z!|s!l!", &_argLong0 , &_argStr0 , &_argStr0_len , &_argObj0 , &_argStr1 , &_argStr1_len , &_argLong1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxToolBarToolBase* ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 5:
					ret1 =  ((wxToolBarBase_php*)_this)->AddTool((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxBitmap *) _ptrObj0 , wxString(_argStr1, wxConvUTF8) , (wxItemKind) _argLong1);
					break;
				case 4:
					ret1 =  ((wxToolBarBase_php*)_this)->AddTool((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxBitmap *) _ptrObj0 , wxString(_argStr1, wxConvUTF8));
					break;
				case 3:
					ret1 =  ((wxToolBarBase_php*)_this)->AddTool((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxBitmap *) _ptrObj0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxToolBarToolBase_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret1, le_wxToolBarToolBase));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!z!z!|l!s!s!z!", &_argLong0 , &_argStr0 , &_argStr0_len , &_argObj0 , &_argObj1 , &_argLong1 , &_argStr1 , &_argStr1_len , &_argStr2 , &_argStr2_len , &_argObj2 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxObject))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid)
		{
			wxToolBarToolBase* ret2;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 8:
					ret2 =  ((wxToolBarBase_php*)_this)->AddTool((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxBitmap *) _ptrObj0 , *(wxBitmap *) _ptrObj1 , (wxItemKind) _argLong1 , wxString(_argStr1, wxConvUTF8) , wxString(_argStr2, wxConvUTF8) , (wxObject*) _ptrObj2);
					break;
				case 7:
					ret2 =  ((wxToolBarBase_php*)_this)->AddTool((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxBitmap *) _ptrObj0 , *(wxBitmap *) _ptrObj1 , (wxItemKind) _argLong1 , wxString(_argStr1, wxConvUTF8) , wxString(_argStr2, wxConvUTF8));
					break;
				case 6:
					ret2 =  ((wxToolBarBase_php*)_this)->AddTool((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxBitmap *) _ptrObj0 , *(wxBitmap *) _ptrObj1 , (wxItemKind) _argLong1 , wxString(_argStr1, wxConvUTF8));
					break;
				case 5:
					ret2 =  ((wxToolBarBase_php*)_this)->AddTool((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxBitmap *) _ptrObj0 , *(wxBitmap *) _ptrObj1 , (wxItemKind) _argLong1);
					break;
				case 4:
					ret2 =  ((wxToolBarBase_php*)_this)->AddTool((int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxBitmap *) _ptrObj0 , *(wxBitmap *) _ptrObj1);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxToolBarToolBase_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret2, le_wxToolBarToolBase));return;			
		}
	}
}
void php_wxToolBarToolBase_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxToolBarToolBase, GetId)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxToolBarToolBase_php*)_this)->GetId();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
void php_wxControl_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxControl, SetLabel)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxControl_php*)_this)->SetLabel(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxControl, GetLabel)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxControl_php*)_this)->GetLabel();
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
void php_wxCommandEvent_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxCommandEvent, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					_this = new wxCommandEvent_php((int)_argLong0 , (int)_argLong1);
					break;
				case 1:
					_this = new wxCommandEvent_php((int)_argLong0);
					break;
				case 0:
					_this = new wxCommandEvent_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxCommandEvent);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxCommandEvent_php*) _this)->evnArray);
			array_init(((wxCommandEvent_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxCommandEvent_php*) _this)->phpObj);
			*((wxCommandEvent_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxCommandEvent_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxCommandEvent_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxCommandEvent, GetSelection)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCommandEvent_php*)_this)->GetSelection();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxCommandEvent, SetString)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxCommandEvent_php*)_this)->SetString(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxCommandEvent, GetString)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCommandEvent_php*)_this)->GetString();
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxCommandEvent, IsChecked)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCommandEvent_php*)_this)->IsChecked();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxCommandEvent, IsSelection)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCommandEvent_php*)_this)->IsSelection();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxCommandEvent, SetExtraLong)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxCommandEvent_php*)_this)->SetExtraLong((long int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxCommandEvent, GetExtraLong)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			long int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCommandEvent_php*)_this)->GetExtraLong();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxCommandEvent, SetInt)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxCommandEvent_php*)_this)->SetInt((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxCommandEvent, GetInt)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			long int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCommandEvent_php*)_this)->GetInt();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
void php_wxPanel_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxPanel, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|l!z!z!l!s!", &_argObj0 , &_argLong0 , &_argObj1 , &_argObj2 , &_argLong1 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 6:
					_this = new wxPanel_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , wxString(_argStr0, wxConvUTF8));
					break;
				case 5:
					_this = new wxPanel_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1);
					break;
				case 4:
					_this = new wxPanel_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 3:
					_this = new wxPanel_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1);
					break;
				case 2:
					_this = new wxPanel_php((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				case 1:
					_this = new wxPanel_php((wxWindow*) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxPanel);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxPanel_php*) _this)->evnArray);
			array_init(((wxPanel_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxPanel_php*) _this)->phpObj);
			*((wxPanel_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxPanel_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxPanel_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxPanel_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxPanel);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxPanel_php*) _this)->evnArray);
			array_init(((wxPanel_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxPanel_php*) _this)->phpObj);
			*((wxPanel_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxPanel_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxPanel_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxPanel, InitDialog)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxPanel_php*)_this)->InitDialog();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxPanel, SetFocus)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxPanel_php*)_this)->SetFocus();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxPanel, SetFocusIgnoringChildren)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxPanel_php*)_this)->SetFocusIgnoringChildren();
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxTopLevelWindowBase_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxTopLevelWindowBase, SetIcon)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxTopLevelWindowBase_php*)_this)->SetIcon(*(wxIcon *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTopLevelWindowBase, SetIcons)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxIconBundle))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxTopLevelWindowBase_php*)_this)->SetIcons(*(wxIconBundle *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxSplitterWindow_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxSplitterWindow, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|l!z!z!l!s!", &_argObj0 , &_argLong0 , &_argObj1 , &_argObj2 , &_argLong1 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 6:
					_this = new wxSplitterWindow_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , wxString(_argStr0, wxConvUTF8));
					break;
				case 5:
					_this = new wxSplitterWindow_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1);
					break;
				case 4:
					_this = new wxSplitterWindow_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 3:
					_this = new wxSplitterWindow_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1);
					break;
				case 2:
					_this = new wxSplitterWindow_php((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				case 1:
					_this = new wxSplitterWindow_php((wxWindow*) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxSplitterWindow);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxSplitterWindow_php*) _this)->evnArray);
			array_init(((wxSplitterWindow_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxSplitterWindow_php*) _this)->phpObj);
			*((wxSplitterWindow_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxSplitterWindow_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxSplitterWindow_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxSplitterWindow, SplitVertically)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!z!|l!", &_argObj0 , &_argObj1 , &_argLong0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret0 =  ((wxSplitterWindow_php*)_this)->SplitVertically((wxWindow*) _ptrObj0 , (wxWindow*) _ptrObj1 , (int)_argLong0);
					break;
				case 2:
					ret0 =  ((wxSplitterWindow_php*)_this)->SplitVertically((wxWindow*) _ptrObj0 , (wxWindow*) _ptrObj1);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxSplitterWindow, SplitHorizontally)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!z!|l!", &_argObj0 , &_argObj1 , &_argLong0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret0 =  ((wxSplitterWindow_php*)_this)->SplitHorizontally((wxWindow*) _ptrObj0 , (wxWindow*) _ptrObj1 , (int)_argLong0);
					break;
				case 2:
					ret0 =  ((wxSplitterWindow_php*)_this)->SplitHorizontally((wxWindow*) _ptrObj0 , (wxWindow*) _ptrObj1);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxSplitterWindow, SetMinimumPaneSize)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxSplitterWindow_php*)_this)->SetMinimumPaneSize((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxSplitterWindow, SetSashSize)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxSplitterWindow_php*)_this)->SetSashSize((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxSplitterWindow, SetBorderSize)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxSplitterWindow_php*)_this)->SetBorderSize((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxSplitterWindow, GetSashSize)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxSplitterWindow_php*)_this)->GetSashSize();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxSplitterWindow, GetBorderSize)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxSplitterWindow_php*)_this)->GetBorderSize();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxSplitterWindow, SetSashPosition)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!|b!", &_argLong0 , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxSplitterWindow_php*)_this)->SetSashPosition((int)_argLong0 , _argBool0);
					break;
				case 1:
					 ((wxSplitterWindow_php*)_this)->SetSashPosition((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxSplitterWindow, GetSashPosition)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxSplitterWindow_php*)_this)->GetSashPosition();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxSplitterWindow, SetSashGravity)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxSplitterWindow_php*)_this)->SetSashGravity((double)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxSplitterWindow, GetSashGravity)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxSplitterWindow_php*)_this)->GetSashGravity();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxSplitterWindow, GetMinimumPaneSize)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxSplitterWindow_php*)_this)->GetMinimumPaneSize();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
void php_wxTreeCtrl_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxTreeCtrl, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	void *_ptrObj3 = 0;
	zval *_argObj3 = 0;
	int id_to_find3;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|l!z!z!l!z!s!", &_argObj0 , &_argLong0 , &_argObj1 , &_argObj2 , &_argLong1 , &_argObj3 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid && _argObj3)
		{
			if (_argObj3->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj3), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find3 = Z_RESVAL_P(*tmp);
				_ptrObj3 = zend_list_find(id_to_find3, &rsrc_type);
				if (!_ptrObj3 || (rsrc_type != le_wxValidator))
					valid = 0;
			}
			else if(_argObj3->type==IS_LONG)
				_ptrObj3= (void *)_argObj3->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 7:
					_this = new wxTreeCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , *(wxValidator *) _ptrObj3 , wxString(_argStr0, wxConvUTF8));
					break;
				case 6:
					_this = new wxTreeCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , *(wxValidator *) _ptrObj3);
					break;
				case 5:
					_this = new wxTreeCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1);
					break;
				case 4:
					_this = new wxTreeCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 3:
					_this = new wxTreeCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1);
					break;
				case 2:
					_this = new wxTreeCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				case 1:
					_this = new wxTreeCtrl_php((wxWindow*) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxTreeCtrl);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxTreeCtrl_php*) _this)->evnArray);
			array_init(((wxTreeCtrl_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxTreeCtrl_php*) _this)->phpObj);
			*((wxTreeCtrl_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxTreeCtrl_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxTreeCtrl_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, GetItemPHPData)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  wxTreeItemIdUserValue::GetUserValue(((wxTreeCtrl_php*)_this),*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, SetItemPHPData)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!", &_argObj0 , &_argLong0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 wxTreeItemIdUserValue::SetUserValue(((wxTreeCtrl_php*)_this),*(wxTreeItemId *) _ptrObj0 , (int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, AddRoot)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!|l!l!z!", &_argStr0 , &_argStr0_len , &_argLong0 , &_argLong1 , &_argObj0 ) == SUCCESS)
	{
		
		if(valid && _argObj0)
		{
			if (_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemData))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
		}
		if(valid)
		{
			wxTreeItemId ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 4:
					ret0 =  ((wxTreeCtrl_php*)_this)->AddRoot(wxString(_argStr0, wxConvUTF8) , (int)_argLong0 , (int)_argLong1 , (wxTreeItemData*) _ptrObj0);
					break;
				case 3:
					ret0 =  ((wxTreeCtrl_php*)_this)->AddRoot(wxString(_argStr0, wxConvUTF8) , (int)_argLong0 , (int)_argLong1);
					break;
				case 2:
					ret0 =  ((wxTreeCtrl_php*)_this)->AddRoot(wxString(_argStr0, wxConvUTF8) , (int)_argLong0);
					break;
				case 1:
					ret0 =  ((wxTreeCtrl_php*)_this)->AddRoot(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			void* ptr = safe_emalloc(1,sizeof(wxTreeItemId),0);memcpy(ptr,&ret0,sizeof(wxTreeItemId));object_init_ex(return_value,php_wxTreeItemId_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ptr, le_wxTreeItemId));return;			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, AppendItem)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!s!|l!l!z!", &_argObj0 , &_argStr0 , &_argStr0_len , &_argLong0 , &_argLong1 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxTreeItemData))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid)
		{
			wxTreeItemId ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 5:
					ret0 =  ((wxTreeCtrl_php*)_this)->AppendItem(*(wxTreeItemId *) _ptrObj0 , wxString(_argStr0, wxConvUTF8) , (int)_argLong0 , (int)_argLong1 , (wxTreeItemData*) _ptrObj1);
					break;
				case 4:
					ret0 =  ((wxTreeCtrl_php*)_this)->AppendItem(*(wxTreeItemId *) _ptrObj0 , wxString(_argStr0, wxConvUTF8) , (int)_argLong0 , (int)_argLong1);
					break;
				case 3:
					ret0 =  ((wxTreeCtrl_php*)_this)->AppendItem(*(wxTreeItemId *) _ptrObj0 , wxString(_argStr0, wxConvUTF8) , (int)_argLong0);
					break;
				case 2:
					ret0 =  ((wxTreeCtrl_php*)_this)->AppendItem(*(wxTreeItemId *) _ptrObj0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			void* ptr = safe_emalloc(1,sizeof(wxTreeItemId),0);memcpy(ptr,&ret0,sizeof(wxTreeItemId));object_init_ex(return_value,php_wxTreeItemId_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ptr, le_wxTreeItemId));return;			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, GetItemText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxTreeCtrl_php*)_this)->GetItemText(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, Delete)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxTreeCtrl_php*)_this)->Delete(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, DeleteChildren)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxTreeCtrl_php*)_this)->DeleteChildren(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, DeleteAllItems)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxTreeCtrl_php*)_this)->DeleteAllItems();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, Expand)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxTreeCtrl_php*)_this)->Expand(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, Collapse)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxTreeCtrl_php*)_this)->Collapse(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, CollapseAndReset)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxTreeCtrl_php*)_this)->CollapseAndReset(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, Toggle)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxTreeCtrl_php*)_this)->Toggle(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, Unselect)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxTreeCtrl_php*)_this)->Unselect();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, UnselectAll)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxTreeCtrl_php*)_this)->UnselectAll();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, SelectItem)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|b!", &_argObj0 , &_argBool0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxTreeCtrl_php*)_this)->SelectItem(*(wxTreeItemId *) _ptrObj0 , _argBool0);
					break;
				case 1:
					 ((wxTreeCtrl_php*)_this)->SelectItem(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, EnsureVisible)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxTreeCtrl_php*)_this)->EnsureVisible(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, ScrollTo)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxTreeCtrl_php*)_this)->ScrollTo(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, SetItemTextColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!z!", &_argObj0 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxTreeCtrl_php*)_this)->SetItemTextColour(*(wxTreeItemId *) _ptrObj0 , *(wxColour *) _ptrObj1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, SetItemBackgroundColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!z!", &_argObj0 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxTreeCtrl_php*)_this)->SetItemBackgroundColour(*(wxTreeItemId *) _ptrObj0 , *(wxColour *) _ptrObj1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, SetItemDropHighlight)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|b!", &_argObj0 , &_argBool0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxTreeCtrl_php*)_this)->SetItemDropHighlight(*(wxTreeItemId *) _ptrObj0 , _argBool0);
					break;
				case 1:
					 ((wxTreeCtrl_php*)_this)->SetItemDropHighlight(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, SetItemBold)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|b!", &_argObj0 , &_argBool0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxTreeCtrl_php*)_this)->SetItemBold(*(wxTreeItemId *) _ptrObj0 , _argBool0);
					break;
				case 1:
					 ((wxTreeCtrl_php*)_this)->SetItemBold(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, SetItemText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!s!", &_argObj0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxTreeCtrl_php*)_this)->SetItemText(*(wxTreeItemId *) _ptrObj0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, GetItemTextColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxColour ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxTreeCtrl_php*)_this)->GetItemTextColour(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			void* ptr = safe_emalloc(1,sizeof(wxColour),0);memcpy(ptr,&ret0,sizeof(wxColour));object_init_ex(return_value,php_wxColour_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ptr, le_wxColour));return;			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, GetItemBackgroundColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxColour ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxTreeCtrl_php*)_this)->GetItemBackgroundColour(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			void* ptr = safe_emalloc(1,sizeof(wxColour),0);memcpy(ptr,&ret0,sizeof(wxColour));object_init_ex(return_value,php_wxColour_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ptr, le_wxColour));return;			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, SetImageList)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxImageList))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxTreeCtrl_php*)_this)->SetImageList((wxImageList*) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, SetStateImageList)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxImageList))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxTreeCtrl_php*)_this)->SetStateImageList((wxImageList*) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, IsExpanded)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxTreeCtrl_php*)_this)->IsExpanded(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, IsSelected)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxTreeCtrl_php*)_this)->IsSelected(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, IsBold)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxTreeCtrl_php*)_this)->IsBold(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, SetIndent)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxTreeCtrl_php*)_this)->SetIndent((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, GetIndent)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			unsigned int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxTreeCtrl_php*)_this)->GetIndent();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, GetCount)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			unsigned int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxTreeCtrl_php*)_this)->GetCount();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, SetItemHasChildren)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|b!", &_argObj0 , &_argBool0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxTreeCtrl_php*)_this)->SetItemHasChildren(*(wxTreeItemId *) _ptrObj0 , _argBool0);
					break;
				case 1:
					 ((wxTreeCtrl_php*)_this)->SetItemHasChildren(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, IsVisible)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxTreeCtrl_php*)_this)->IsVisible(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, ItemHasChildren)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxTreeCtrl_php*)_this)->ItemHasChildren(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, GetChildrenCount)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|b!", &_argObj0 , &_argBool0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxTreeCtrl_php*)_this)->GetChildrenCount(*(wxTreeItemId *) _ptrObj0 , _argBool0);
					break;
				case 1:
					 ((wxTreeCtrl_php*)_this)->GetChildrenCount(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, GetRootItem)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxTreeItemId ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxTreeCtrl_php*)_this)->GetRootItem();
					break;
				default:
					break;
			}
			void* ptr = safe_emalloc(1,sizeof(wxTreeItemId),0);memcpy(ptr,&ret0,sizeof(wxTreeItemId));object_init_ex(return_value,php_wxTreeItemId_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ptr, le_wxTreeItemId));return;			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, GetSelection)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxTreeItemId ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxTreeCtrl_php*)_this)->GetSelection();
					break;
				default:
					break;
			}
			void* ptr = safe_emalloc(1,sizeof(wxTreeItemId),0);memcpy(ptr,&ret0,sizeof(wxTreeItemId));object_init_ex(return_value,php_wxTreeItemId_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ptr, le_wxTreeItemId));return;			
		}
	}
}
PHP_METHOD(php_wxTreeCtrl, GetItemParent)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxTreeItemId))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxTreeItemId ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxTreeCtrl_php*)_this)->GetItemParent(*(wxTreeItemId *) _ptrObj0);
					break;
				default:
					break;
			}
			void* ptr = safe_emalloc(1,sizeof(wxTreeItemId),0);memcpy(ptr,&ret0,sizeof(wxTreeItemId));object_init_ex(return_value,php_wxTreeItemId_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ptr, le_wxTreeItemId));return;			
		}
	}
}
void php_wxValidator_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxValidator, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxValidator_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxValidator);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxValidator_php*) _this)->evnArray);
			array_init(((wxValidator_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxValidator_php*) _this)->phpObj);
			*((wxValidator_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxValidator_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxValidator_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
void php_wxCheckListBox_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxCheckListBox, Check)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!|b!", &_argLong0 , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxCheckListBox_php*)_this)->Check((int)_argLong0 , _argBool0);
					break;
				case 1:
					 ((wxCheckListBox_php*)_this)->Check((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxCheckListBox, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	long _argLong2;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	void *_ptrObj3 = 0;
	zval *_argObj3 = 0;
	int id_to_find3;
	void *_ptrObj4 = 0;
	zval *_argObj4 = 0;
	int id_to_find4;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!|z!z!l!s!l!z!s!", &_argObj0 , &_argLong0 , &_argObj1 , &_argObj2 , &_argLong1 , &_argStr0 , &_argStr0_len , &_argLong2 , &_argObj3 , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid && _argObj3)
		{
			if (_argObj3->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj3), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find3 = Z_RESVAL_P(*tmp);
				_ptrObj3 = zend_list_find(id_to_find3, &rsrc_type);
				if (!_ptrObj3 || (rsrc_type != le_wxValidator))
					valid = 0;
			}
			else if(_argObj3->type==IS_LONG)
				_ptrObj3= (void *)_argObj3->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 9:
					_this = new wxCheckListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1 , &wxString(_argStr0, wxConvUTF8) , (long int)_argLong2 , *(wxValidator *) _ptrObj3 , wxString(_argStr1, wxConvUTF8));
					break;
				case 8:
					_this = new wxCheckListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1 , &wxString(_argStr0, wxConvUTF8) , (long int)_argLong2 , *(wxValidator *) _ptrObj3);
					break;
				case 7:
					_this = new wxCheckListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1 , &wxString(_argStr0, wxConvUTF8) , (long int)_argLong2);
					break;
				case 6:
					_this = new wxCheckListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1 , &wxString(_argStr0, wxConvUTF8));
					break;
				case 5:
					_this = new wxCheckListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1);
					break;
				case 4:
					_this = new wxCheckListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 3:
					_this = new wxCheckListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1);
					break;
				case 2:
					_this = new wxCheckListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxCheckListBox);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxCheckListBox_php*) _this)->evnArray);
			array_init(((wxCheckListBox_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxCheckListBox_php*) _this)->phpObj);
			*((wxCheckListBox_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxCheckListBox_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxCheckListBox_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!z!z!z!|l!z!s!", &_argObj0 , &_argLong0 , &_argObj1 , &_argObj2 , &_argObj3 , &_argLong1 , &_argObj4 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj2)
		if (valid) 
		{
			if(_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
			else if(_argObj2->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj3)
		if (valid) 
		{
			if(_argObj3->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj3), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find3 = Z_RESVAL_P(*tmp);
				_ptrObj3 = zend_list_find(id_to_find3, &rsrc_type);
				if (!_ptrObj3 || (rsrc_type != le_wxArrayString))
					valid = 0;
			}
			else if(_argObj3->type==IS_LONG)
				_ptrObj3= (void *)_argObj3->value.lval;
			else if(_argObj3->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj4)
		{
			if (_argObj4->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj4), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find4 = Z_RESVAL_P(*tmp);
				_ptrObj4 = zend_list_find(id_to_find4, &rsrc_type);
				if (!_ptrObj4 || (rsrc_type != le_wxValidator))
					valid = 0;
			}
			else if(_argObj4->type==IS_LONG)
				_ptrObj4= (void *)_argObj4->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 8:
					_this = new wxCheckListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , *(wxArrayString *) _ptrObj3 , (long int)_argLong1 , *(wxValidator *) _ptrObj4 , wxString(_argStr0, wxConvUTF8));
					break;
				case 7:
					_this = new wxCheckListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , *(wxArrayString *) _ptrObj3 , (long int)_argLong1 , *(wxValidator *) _ptrObj4);
					break;
				case 6:
					_this = new wxCheckListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , *(wxArrayString *) _ptrObj3 , (long int)_argLong1);
					break;
				case 5:
					_this = new wxCheckListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , *(wxArrayString *) _ptrObj3);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxCheckListBox);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxCheckListBox_php*) _this)->evnArray);
			array_init(((wxCheckListBox_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxCheckListBox_php*) _this)->phpObj);
			*((wxCheckListBox_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxCheckListBox_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxCheckListBox_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxCheckListBox, IsChecked)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxCheckListBox_php*)_this)->IsChecked((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
void php_wxTreeItemData_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxTreeItemData, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxTreeItemData_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxTreeItemData);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxTreeItemData_php*) _this)->evnArray);
			array_init(((wxTreeItemData_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxTreeItemData_php*) _this)->phpObj);
			*((wxTreeItemData_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxTreeItemData_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxTreeItemData_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
void php_wxTreeItemId_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxTreeItemId, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxTreeItemId_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxTreeItemId);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxTreeItemId_php*) _this)->evnArray);
			array_init(((wxTreeItemId_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxTreeItemId_php*) _this)->phpObj);
			*((wxTreeItemId_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxTreeItemId_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxTreeItemId_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxTreeItemId, IsOk)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxTreeItemId_php*)_this)->IsOk();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
void php_wxFrameBase_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxFrameBase, SetMenuBar)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxMenuBar))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxFrameBase_php*)_this)->SetMenuBar((wxMenuBar*) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxTreeEvent_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxTreeEvent, GetItem)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxTreeItemId ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxTreeEvent_php*)_this)->GetItem();
					break;
				default:
					break;
			}
			void* ptr = safe_emalloc(1,sizeof(wxTreeItemId),0);memcpy(ptr,&ret0,sizeof(wxTreeItemId));object_init_ex(return_value,php_wxTreeItemId_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ptr, le_wxTreeItemId));return;			
		}
	}
}
void php_wxArrayString_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxArrayString, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxArrayString_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxArrayString);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxArrayString_php*) _this)->evnArray);
			array_init(((wxArrayString_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxArrayString_php*) _this)->phpObj);
			*((wxArrayString_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxArrayString_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxArrayString_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxArrayString, Add)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!|l!", &_argStr0 , &_argStr0_len , &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			unsigned int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxArrayString_php*)_this)->Add(wxString(_argStr0, wxConvUTF8) , (unsigned int)_argLong0);
					break;
				case 1:
					ret0 =  ((wxArrayString_php*)_this)->Add(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxArrayString, Empty)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxArrayString_php*)_this)->Empty();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxArrayString, Clear)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxArrayString_php*)_this)->Clear();
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxCheckListBoxBase_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxCheckListBoxBase, Check)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!|b!", &_argLong0 , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxCheckListBoxBase_php*)_this)->Check((unsigned int)_argLong0 , _argBool0);
					break;
				case 1:
					 ((wxCheckListBoxBase_php*)_this)->Check((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxListBoxBase_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxListBoxBase, Set)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|l!", &_argObj0 , &_argLong0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxArrayString))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxListBoxBase_php*)_this)->Set(*(wxArrayString *) _ptrObj0 , (void**)_argLong0);
					break;
				case 1:
					 ((wxListBoxBase_php*)_this)->Set(*(wxArrayString *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxListBoxBase, Deselect)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxListBoxBase_php*)_this)->Deselect((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxListBoxBase, Insert)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!l!", &_argStr0 , &_argStr0_len , &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxListBoxBase_php*)_this)->Insert(wxString(_argStr0, wxConvUTF8) , (unsigned int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxListBoxBase, InsertItems)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!l!", &_argLong0 , &_argStr0 , &_argStr0_len , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					 ((wxListBoxBase_php*)_this)->InsertItems((unsigned int)_argLong0 , &wxString(_argStr0, wxConvUTF8) , (unsigned int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!", &_argObj0 , &_argLong0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxArrayString))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxListBoxBase_php*)_this)->InsertItems(*(wxArrayString *) _ptrObj0 , (unsigned int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxListBoxBase, DeselectAll)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxListBoxBase_php*)_this)->DeselectAll((int)_argLong0);
					break;
				case 0:
					 ((wxListBoxBase_php*)_this)->DeselectAll();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxListBoxBase, SetSelection)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxListBoxBase_php*)_this)->SetSelection((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!b!", &_argLong0 , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxListBoxBase_php*)_this)->SetSelection((int)_argLong0 , _argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxIcon_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxIcon, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxIcon_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxIcon);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxIcon_php*) _this)->evnArray);
			array_init(((wxIcon_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxIcon_php*) _this)->phpObj);
			*((wxIcon_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxIcon_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxIcon_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxIcon, CopyFromBitmap)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxIcon_php*)_this)->CopyFromBitmap(*(wxBitmap *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxTextCtrl_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxTextCtrl, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	void *_ptrObj3 = 0;
	zval *_argObj3 = 0;
	int id_to_find3;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!|s!z!z!l!z!s!", &_argObj0 , &_argLong0 , &_argStr0 , &_argStr0_len , &_argObj1 , &_argObj2 , &_argLong1 , &_argObj3 , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid && _argObj3)
		{
			if (_argObj3->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj3), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find3 = Z_RESVAL_P(*tmp);
				_ptrObj3 = zend_list_find(id_to_find3, &rsrc_type);
				if (!_ptrObj3 || (rsrc_type != le_wxValidator))
					valid = 0;
			}
			else if(_argObj3->type==IS_LONG)
				_ptrObj3= (void *)_argObj3->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 8:
					_this = new wxTextCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , *(wxValidator *) _ptrObj3 , wxString(_argStr1, wxConvUTF8));
					break;
				case 7:
					_this = new wxTextCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , *(wxValidator *) _ptrObj3);
					break;
				case 6:
					_this = new wxTextCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1);
					break;
				case 5:
					_this = new wxTextCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 4:
					_this = new wxTextCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1);
					break;
				case 3:
					_this = new wxTextCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				case 2:
					_this = new wxTextCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxTextCtrl);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxTextCtrl_php*) _this)->evnArray);
			array_init(((wxTextCtrl_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxTextCtrl_php*) _this)->phpObj);
			*((wxTextCtrl_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxTextCtrl_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxTextCtrl_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxTextCtrl, GetValue)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxTextCtrl_php*)_this)->GetValue();
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxTextCtrl, SetValue)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxTextCtrl_php*)_this)->SetValue(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTextCtrl, SetMaxLength)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxTextCtrl_php*)_this)->SetMaxLength((long unsigned int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxNotebook_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxNotebook, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!|z!z!l!s!", &_argObj0 , &_argLong0 , &_argObj1 , &_argObj2 , &_argLong1 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 6:
					_this = new wxNotebook_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , wxString(_argStr0, wxConvUTF8));
					break;
				case 5:
					_this = new wxNotebook_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1);
					break;
				case 4:
					_this = new wxNotebook_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 3:
					_this = new wxNotebook_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1);
					break;
				case 2:
					_this = new wxNotebook_php((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxNotebook);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxNotebook_php*) _this)->evnArray);
			array_init(((wxNotebook_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxNotebook_php*) _this)->phpObj);
			*((wxNotebook_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxNotebook_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxNotebook_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxNotebook, SetPageText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!", &_argLong0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxNotebook_php*)_this)->SetPageText((unsigned int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxNotebook, GetPageText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxNotebook_php*)_this)->GetPageText((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxNotebook, GetPageImage)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxNotebook_php*)_this)->GetPageImage((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxNotebook, SetPageImage)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxNotebook_php*)_this)->SetPageImage((unsigned int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxNotebook, SetPageSize)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxNotebook_php*)_this)->SetPageSize(*(wxSize *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxNotebook, SetPadding)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxNotebook_php*)_this)->SetPadding(*(wxSize *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxNotebook, SetTabSize)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxNotebook_php*)_this)->SetTabSize(*(wxSize *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxNotebook, DeleteAllPages)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxNotebook_php*)_this)->DeleteAllPages();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxNotebook, GetSelection)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxNotebook_php*)_this)->GetSelection();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxNotebook, SetSelection)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxNotebook_php*)_this)->SetSelection((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxNotebook, InsertPage)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!s!|b!l!", &_argLong0 , &_argObj0 , &_argStr0 , &_argStr0_len , &_argBool0 , &_argLong1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 5:
					ret0 =  ((wxNotebook_php*)_this)->InsertPage((unsigned int)_argLong0 , (wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8) , _argBool0 , (int)_argLong1);
					break;
				case 4:
					ret0 =  ((wxNotebook_php*)_this)->InsertPage((unsigned int)_argLong0 , (wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8) , _argBool0);
					break;
				case 3:
					ret0 =  ((wxNotebook_php*)_this)->InsertPage((unsigned int)_argLong0 , (wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
void php_wxBookCtrlBase_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxBookCtrlBase, AddPage)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!s!|b!l!", &_argObj0 , &_argStr0 , &_argStr0_len , &_argBool0 , &_argLong0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 4:
					ret0 =  ((wxBookCtrlBase_php*)_this)->AddPage((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8) , _argBool0 , (int)_argLong0);
					break;
				case 3:
					ret0 =  ((wxBookCtrlBase_php*)_this)->AddPage((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8) , _argBool0);
					break;
				case 2:
					ret0 =  ((wxBookCtrlBase_php*)_this)->AddPage((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxBookCtrlBase, SetSelection)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxBookCtrlBase_php*)_this)->SetSelection((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxBookCtrlBase, RemovePage)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxBookCtrlBase_php*)_this)->RemovePage((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxBookCtrlBase, DeletePage)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxBookCtrlBase_php*)_this)->DeletePage((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxBookCtrlBase, GetSelection)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxBookCtrlBase_php*)_this)->GetSelection();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxBookCtrlBase, SetPageText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!", &_argLong0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxBookCtrlBase_php*)_this)->SetPageText((unsigned int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxBookCtrlBase, GetPageText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxBookCtrlBase_php*)_this)->GetPageText((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxBookCtrlBase, GetPageCount)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			unsigned int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxBookCtrlBase_php*)_this)->GetPageCount();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxBookCtrlBase, GetPage)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxWindow* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxBookCtrlBase_php*)_this)->GetPage((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxWindow_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxWindow));return;			
		}
	}
}
PHP_METHOD(php_wxBookCtrlBase, GetCurrentPage)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxWindow* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxBookCtrlBase_php*)_this)->GetCurrentPage();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxWindow_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxWindow));return;			
		}
	}
}
void php_wxFlexGridSizer_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxFlexGridSizer, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	long _argLong2;
	long _argLong3;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!l!l!", &_argLong0 , &_argLong1 , &_argLong2 , &_argLong3 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 4:
					_this = new wxFlexGridSizer_php((int)_argLong0 , (int)_argLong1 , (int)_argLong2 , (int)_argLong3);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxFlexGridSizer);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxFlexGridSizer_php*) _this)->evnArray);
			array_init(((wxFlexGridSizer_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxFlexGridSizer_php*) _this)->phpObj);
			*((wxFlexGridSizer_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxFlexGridSizer_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxFlexGridSizer_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!|l!l!", &_argLong0 , &_argLong1 , &_argLong2 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					_this = new wxFlexGridSizer_php((int)_argLong0 , (int)_argLong1 , (int)_argLong2);
					break;
				case 2:
					_this = new wxFlexGridSizer_php((int)_argLong0 , (int)_argLong1);
					break;
				case 1:
					_this = new wxFlexGridSizer_php((int)_argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxFlexGridSizer);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxFlexGridSizer_php*) _this)->evnArray);
			array_init(((wxFlexGridSizer_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxFlexGridSizer_php*) _this)->phpObj);
			*((wxFlexGridSizer_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxFlexGridSizer_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxFlexGridSizer_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxFlexGridSizer, AddGrowableRow)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!|l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxFlexGridSizer_php*)_this)->AddGrowableRow((unsigned int)_argLong0 , (int)_argLong1);
					break;
				case 1:
					 ((wxFlexGridSizer_php*)_this)->AddGrowableRow((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxFlexGridSizer, RemoveGrowableRow)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxFlexGridSizer_php*)_this)->RemoveGrowableRow((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxFlexGridSizer, AddGrowableCol)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!|l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxFlexGridSizer_php*)_this)->AddGrowableCol((unsigned int)_argLong0 , (int)_argLong1);
					break;
				case 1:
					 ((wxFlexGridSizer_php*)_this)->AddGrowableCol((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxFlexGridSizer, RemoveGrowableCol)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxFlexGridSizer_php*)_this)->RemoveGrowableCol((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxFlexGridSizer, SetFlexibleDirection)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxFlexGridSizer_php*)_this)->SetFlexibleDirection((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxFlexGridSizer, GetFlexibleDirection)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxFlexGridSizer_php*)_this)->GetFlexibleDirection();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
void php_wxStaticText_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxStaticText, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!s!|z!z!l!s!", &_argObj0 , &_argLong0 , &_argStr0 , &_argStr0_len , &_argObj1 , &_argObj2 , &_argLong1 , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 7:
					_this = new wxStaticText_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , wxString(_argStr1, wxConvUTF8));
					break;
				case 6:
					_this = new wxStaticText_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1);
					break;
				case 5:
					_this = new wxStaticText_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 4:
					_this = new wxStaticText_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1);
					break;
				case 3:
					_this = new wxStaticText_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxStaticText);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxStaticText_php*) _this)->evnArray);
			array_init(((wxStaticText_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxStaticText_php*) _this)->phpObj);
			*((wxStaticText_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxStaticText_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxStaticText_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxStaticText, SetLabel)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStaticText_php*)_this)->SetLabel(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStaticText, GetLabel)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStaticText_php*)_this)->GetLabel();
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxStaticText, SetFont)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxFont))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxStaticText_php*)_this)->SetFont(*(wxFont *) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
void php_wxButton_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxButton, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	void *_ptrObj3 = 0;
	zval *_argObj3 = 0;
	int id_to_find3;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!|s!z!z!l!z!s!", &_argObj0 , &_argLong0 , &_argStr0 , &_argStr0_len , &_argObj1 , &_argObj2 , &_argLong1 , &_argObj3 , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid && _argObj3)
		{
			if (_argObj3->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj3), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find3 = Z_RESVAL_P(*tmp);
				_ptrObj3 = zend_list_find(id_to_find3, &rsrc_type);
				if (!_ptrObj3 || (rsrc_type != le_wxValidator))
					valid = 0;
			}
			else if(_argObj3->type==IS_LONG)
				_ptrObj3= (void *)_argObj3->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 8:
					_this = new wxButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , *(wxValidator *) _ptrObj3 , wxString(_argStr1, wxConvUTF8));
					break;
				case 7:
					_this = new wxButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , *(wxValidator *) _ptrObj3);
					break;
				case 6:
					_this = new wxButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1);
					break;
				case 5:
					_this = new wxButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 4:
					_this = new wxButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1);
					break;
				case 3:
					_this = new wxButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				case 2:
					_this = new wxButton_php((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxButton);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxButton_php*) _this)->evnArray);
			array_init(((wxButton_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxButton_php*) _this)->phpObj);
			*((wxButton_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxButton_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxButton_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxButton, SetLabel)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxButton_php*)_this)->SetLabel(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxButton, Enable)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxButton_php*)_this)->Enable(_argBool0);
					break;
				case 0:
					ret0 =  ((wxButton_php*)_this)->Enable();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxButton, SetDefault)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxButton_php*)_this)->SetDefault();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxButton, SetBackgroundColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxButton_php*)_this)->SetBackgroundColour(*(wxColour *) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxButton, SetForegroundColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxButton_php*)_this)->SetForegroundColour(*(wxColour *) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
void php_wxStaticBox_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxStaticBox, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!s!|z!z!l!s!", &_argObj0 , &_argLong0 , &_argStr0 , &_argStr0_len , &_argObj1 , &_argObj2 , &_argLong1 , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 7:
					_this = new wxStaticBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , wxString(_argStr1, wxConvUTF8));
					break;
				case 6:
					_this = new wxStaticBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1);
					break;
				case 5:
					_this = new wxStaticBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 4:
					_this = new wxStaticBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1);
					break;
				case 3:
					_this = new wxStaticBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxStaticBox);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxStaticBox_php*) _this)->evnArray);
			array_init(((wxStaticBox_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxStaticBox_php*) _this)->phpObj);
			*((wxStaticBox_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxStaticBox_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxStaticBox_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxStaticBox, SetLabel)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStaticBox_php*)_this)->SetLabel(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxStaticBoxSizer_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxStaticBoxSizer, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!", &_argObj0 , &_argLong0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxStaticBox))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					_this = new wxStaticBoxSizer_php((wxStaticBox*) _ptrObj0 , (int)_argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxStaticBoxSizer);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxStaticBoxSizer_php*) _this)->evnArray);
			array_init(((wxStaticBoxSizer_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxStaticBoxSizer_php*) _this)->phpObj);
			*((wxStaticBoxSizer_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxStaticBoxSizer_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxStaticBoxSizer_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!|s!", &_argLong0 , &_argObj0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					_this = new wxStaticBoxSizer_php((int)_argLong0 , (wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8));
					break;
				case 2:
					_this = new wxStaticBoxSizer_php((int)_argLong0 , (wxWindow*) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxStaticBoxSizer);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxStaticBoxSizer_php*) _this)->evnArray);
			array_init(((wxStaticBoxSizer_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxStaticBoxSizer_php*) _this)->phpObj);
			*((wxStaticBoxSizer_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxStaticBoxSizer_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxStaticBoxSizer_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
void php_wxListBox_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxListBox, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	long _argLong2;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	void *_ptrObj3 = 0;
	zval *_argObj3 = 0;
	int id_to_find3;
	void *_ptrObj4 = 0;
	zval *_argObj4 = 0;
	int id_to_find4;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!|z!z!l!s!l!z!s!", &_argObj0 , &_argLong0 , &_argObj1 , &_argObj2 , &_argLong1 , &_argStr0 , &_argStr0_len , &_argLong2 , &_argObj3 , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid && _argObj3)
		{
			if (_argObj3->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj3), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find3 = Z_RESVAL_P(*tmp);
				_ptrObj3 = zend_list_find(id_to_find3, &rsrc_type);
				if (!_ptrObj3 || (rsrc_type != le_wxValidator))
					valid = 0;
			}
			else if(_argObj3->type==IS_LONG)
				_ptrObj3= (void *)_argObj3->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 9:
					_this = new wxListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1 , &wxString(_argStr0, wxConvUTF8) , (long int)_argLong2 , *(wxValidator *) _ptrObj3 , wxString(_argStr1, wxConvUTF8));
					break;
				case 8:
					_this = new wxListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1 , &wxString(_argStr0, wxConvUTF8) , (long int)_argLong2 , *(wxValidator *) _ptrObj3);
					break;
				case 7:
					_this = new wxListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1 , &wxString(_argStr0, wxConvUTF8) , (long int)_argLong2);
					break;
				case 6:
					_this = new wxListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1 , &wxString(_argStr0, wxConvUTF8));
					break;
				case 5:
					_this = new wxListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1);
					break;
				case 4:
					_this = new wxListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 3:
					_this = new wxListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1);
					break;
				case 2:
					_this = new wxListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxListBox);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxListBox_php*) _this)->evnArray);
			array_init(((wxListBox_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxListBox_php*) _this)->phpObj);
			*((wxListBox_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxListBox_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxListBox_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!z!z!z!|l!z!s!", &_argObj0 , &_argLong0 , &_argObj1 , &_argObj2 , &_argObj3 , &_argLong1 , &_argObj4 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj2)
		if (valid) 
		{
			if(_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
			else if(_argObj2->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj3)
		if (valid) 
		{
			if(_argObj3->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj3), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find3 = Z_RESVAL_P(*tmp);
				_ptrObj3 = zend_list_find(id_to_find3, &rsrc_type);
				if (!_ptrObj3 || (rsrc_type != le_wxArrayString))
					valid = 0;
			}
			else if(_argObj3->type==IS_LONG)
				_ptrObj3= (void *)_argObj3->value.lval;
			else if(_argObj3->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj4)
		{
			if (_argObj4->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj4), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find4 = Z_RESVAL_P(*tmp);
				_ptrObj4 = zend_list_find(id_to_find4, &rsrc_type);
				if (!_ptrObj4 || (rsrc_type != le_wxValidator))
					valid = 0;
			}
			else if(_argObj4->type==IS_LONG)
				_ptrObj4= (void *)_argObj4->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 8:
					_this = new wxListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , *(wxArrayString *) _ptrObj3 , (long int)_argLong1 , *(wxValidator *) _ptrObj4 , wxString(_argStr0, wxConvUTF8));
					break;
				case 7:
					_this = new wxListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , *(wxArrayString *) _ptrObj3 , (long int)_argLong1 , *(wxValidator *) _ptrObj4);
					break;
				case 6:
					_this = new wxListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , *(wxArrayString *) _ptrObj3 , (long int)_argLong1);
					break;
				case 5:
					_this = new wxListBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , *(wxArrayString *) _ptrObj3);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxListBox);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxListBox_php*) _this)->evnArray);
			array_init(((wxListBox_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxListBox_php*) _this)->phpObj);
			*((wxListBox_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxListBox_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxListBox_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxListBox, GetString)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxListBox_php*)_this)->GetString((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxListBox, GetSelection)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxListBox_php*)_this)->GetSelection();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxListBox, IsSelected)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxListBox_php*)_this)->IsSelected((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxListBox, SetString)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!", &_argLong0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxListBox_php*)_this)->SetString((unsigned int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxListBox, Clear)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxListBox_php*)_this)->Clear();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxListBox, Delete)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxListBox_php*)_this)->Delete((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxListBox, GetCount)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			unsigned int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxListBox_php*)_this)->GetCount();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
void php_wxFileDialog_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxFileDialog, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	char* _argStr2;
	int _argStr2_len;
	char* _argStr3;
	int _argStr3_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|s!s!s!s!l!z!", &_argObj0 , &_argStr0 , &_argStr0_len , &_argStr1 , &_argStr1_len , &_argStr2 , &_argStr2_len , &_argStr3 , &_argStr3_len , &_argLong0 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 7:
					_this = new wxFileDialog_php((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8) , wxString(_argStr2, wxConvUTF8) , wxString(_argStr3, wxConvUTF8) , (long int)_argLong0 , *(wxPoint *) _ptrObj1);
					break;
				case 6:
					_this = new wxFileDialog_php((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8) , wxString(_argStr2, wxConvUTF8) , wxString(_argStr3, wxConvUTF8) , (long int)_argLong0);
					break;
				case 5:
					_this = new wxFileDialog_php((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8) , wxString(_argStr2, wxConvUTF8) , wxString(_argStr3, wxConvUTF8));
					break;
				case 4:
					_this = new wxFileDialog_php((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8) , wxString(_argStr2, wxConvUTF8));
					break;
				case 3:
					_this = new wxFileDialog_php((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8));
					break;
				case 2:
					_this = new wxFileDialog_php((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8));
					break;
				case 1:
					_this = new wxFileDialog_php((wxWindow*) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxFileDialog);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxFileDialog_php*) _this)->evnArray);
			array_init(((wxFileDialog_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxFileDialog_php*) _this)->phpObj);
			*((wxFileDialog_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxFileDialog_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxFileDialog_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxFileDialog, GetPath)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxFileDialog_php*)_this)->GetPath();
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxFileDialog, GetDirectory)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxFileDialog_php*)_this)->GetDirectory();
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxFileDialog, GetFilename)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxFileDialog_php*)_this)->GetFilename();
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxFileDialog, GetFilterIndex)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxFileDialog_php*)_this)->GetFilterIndex();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxFileDialog, SetMessage)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxFileDialog_php*)_this)->SetMessage(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxFileDialog, SetPath)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxFileDialog_php*)_this)->SetPath(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxFileDialog, SetDirectory)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxFileDialog_php*)_this)->SetDirectory(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxFileDialog, SetFilename)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxFileDialog_php*)_this)->SetFilename(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxFileDialog, SetWildcard)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxFileDialog_php*)_this)->SetWildcard(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxFileDialog, SetFilterIndex)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxFileDialog_php*)_this)->SetFilterIndex((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxFileDialog, ShowModal)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxFileDialog_php*)_this)->ShowModal();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxFileDialog, Show)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxFileDialog_php*)_this)->Show(_argBool0);
					break;
				case 0:
					ret0 =  ((wxFileDialog_php*)_this)->Show();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxFileDialog, GetPaths)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxArrayString))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxFileDialog_php*)_this)->GetPaths(*(wxArrayString *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxFileDialog, GetFilenames)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxArrayString))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxFileDialog_php*)_this)->GetFilenames(*(wxArrayString *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxDialog_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxDialog, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!s!|z!z!l!s!", &_argObj0 , &_argLong0 , &_argStr0 , &_argStr0_len , &_argObj1 , &_argObj2 , &_argLong1 , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 7:
					_this = new wxDialog_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , wxString(_argStr1, wxConvUTF8));
					break;
				case 6:
					_this = new wxDialog_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1);
					break;
				case 5:
					_this = new wxDialog_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 4:
					_this = new wxDialog_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1);
					break;
				case 3:
					_this = new wxDialog_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxDialog);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxDialog_php*) _this)->evnArray);
			array_init(((wxDialog_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxDialog_php*) _this)->phpObj);
			*((wxDialog_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxDialog_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxDialog_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxDialog, Show)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxDialog_php*)_this)->Show(_argBool0);
					break;
				case 0:
					ret0 =  ((wxDialog_php*)_this)->Show();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxDialog, ShowModal)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxDialog_php*)_this)->ShowModal();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxDialog, EndModal)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxDialog_php*)_this)->EndModal((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxDialog, IsModal)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxDialog_php*)_this)->IsModal();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
void php_wxMessageDialog_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxMessageDialog, ShowModal)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxMessageDialog_php*)_this)->ShowModal();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxMessageDialog, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!s!|s!l!z!", &_argObj0 , &_argStr0 , &_argStr0_len , &_argStr1 , &_argStr1_len , &_argLong0 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 5:
					_this = new wxMessageDialog_php((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8) , (long int)_argLong0 , *(wxPoint *) _ptrObj1);
					break;
				case 4:
					_this = new wxMessageDialog_php((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8) , (long int)_argLong0);
					break;
				case 3:
					_this = new wxMessageDialog_php((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8));
					break;
				case 2:
					_this = new wxMessageDialog_php((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxMessageDialog);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxMessageDialog_php*) _this)->evnArray);
			array_init(((wxMessageDialog_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxMessageDialog_php*) _this)->phpObj);
			*((wxMessageDialog_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxMessageDialog_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxMessageDialog_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxMessageDialog, Show)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxMessageDialog_php*)_this)->Show(_argBool0);
					break;
				case 0:
					ret0 =  ((wxMessageDialog_php*)_this)->Show();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
void php_wxStatusBarBase_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxStatusBarBase, PushStatusText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!|l!", &_argStr0 , &_argStr0_len , &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStatusBarBase_php*)_this)->PushStatusText(wxString(_argStr0, wxConvUTF8) , (int)_argLong0);
					break;
				case 1:
					 ((wxStatusBarBase_php*)_this)->PushStatusText(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStatusBarBase, SetStatusText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!|l!", &_argStr0 , &_argStr0_len , &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStatusBarBase_php*)_this)->SetStatusText(wxString(_argStr0, wxConvUTF8) , (int)_argLong0);
					break;
				case 1:
					 ((wxStatusBarBase_php*)_this)->SetStatusText(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStatusBarBase, GetStatusText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxStatusBarBase_php*)_this)->GetStatusText((int)_argLong0);
					break;
				case 0:
					ret0 =  ((wxStatusBarBase_php*)_this)->GetStatusText();
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxStatusBarBase, PopStatusText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStatusBarBase_php*)_this)->PopStatusText((int)_argLong0);
					break;
				case 0:
					 ((wxStatusBarBase_php*)_this)->PopStatusText();
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxListCtrl_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxListCtrl, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	void *_ptrObj3 = 0;
	zval *_argObj3 = 0;
	int id_to_find3;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|l!z!z!l!z!s!", &_argObj0 , &_argLong0 , &_argObj1 , &_argObj2 , &_argLong1 , &_argObj3 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid && _argObj3)
		{
			if (_argObj3->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj3), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find3 = Z_RESVAL_P(*tmp);
				_ptrObj3 = zend_list_find(id_to_find3, &rsrc_type);
				if (!_ptrObj3 || (rsrc_type != le_wxValidator))
					valid = 0;
			}
			else if(_argObj3->type==IS_LONG)
				_ptrObj3= (void *)_argObj3->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 7:
					_this = new wxListCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , *(wxValidator *) _ptrObj3 , wxString(_argStr0, wxConvUTF8));
					break;
				case 6:
					_this = new wxListCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , *(wxValidator *) _ptrObj3);
					break;
				case 5:
					_this = new wxListCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1);
					break;
				case 4:
					_this = new wxListCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 3:
					_this = new wxListCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1);
					break;
				case 2:
					_this = new wxListCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				case 1:
					_this = new wxListCtrl_php((wxWindow*) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxListCtrl);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxListCtrl_php*) _this)->evnArray);
			array_init(((wxListCtrl_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxListCtrl_php*) _this)->phpObj);
			*((wxListCtrl_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxListCtrl_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxListCtrl_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxListCtrl, DeleteAllItems)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxListCtrl_php*)_this)->DeleteAllItems();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxListCtrl, SetItemCount)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxListCtrl_php*)_this)->SetItemCount((long int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
wxString wxListCtrl_php::OnGetItemText(long int arg0 , long int arg1) const{
	zval *args[2];
	zval retval, funcname;
	ZVAL_STRING(&funcname, "OnGetItemText", 0);
	
		zval argLng0;
	ZVAL_LONG(&argLng0,arg0);
	args[0]= &argLng0;
		zval argLng1;
	ZVAL_LONG(&argLng1,arg1);
	args[1]= &argLng1;
		
	if (call_user_function(NULL, (zval**) &this->phpObj, &funcname, &retval, 2, args TSRMLS_CC) == FAILURE) {
		wxMessageBox(_T("Failed method Call!\n"));
	}
	else
		return wxString(retval.value.str.val,wxConvUTF8);}
PHP_METHOD(php_wxListCtrl, OnGetItemText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxListCtrl_php*)_this)->OnGetItemText((long int)_argLong0 , (long int)_argLong1);
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxListCtrl, GetColumnWidth)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxListCtrl_php*)_this)->GetColumnWidth((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxListCtrl, SetColumnWidth)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxListCtrl_php*)_this)->SetColumnWidth((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxListCtrl, InsertColumn)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	long _argLong2;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!|l!l!", &_argLong0 , &_argStr0 , &_argStr0_len , &_argLong1 , &_argLong2 ) == SUCCESS)
	{
		
		if(valid)
		{
			long int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 4:
					ret0 =  ((wxListCtrl_php*)_this)->InsertColumn((long int)_argLong0 , wxString(_argStr0, wxConvUTF8) , (int)_argLong1 , (int)_argLong2);
					break;
				case 3:
					ret0 =  ((wxListCtrl_php*)_this)->InsertColumn((long int)_argLong0 , wxString(_argStr0, wxConvUTF8) , (int)_argLong1);
					break;
				case 2:
					ret0 =  ((wxListCtrl_php*)_this)->InsertColumn((long int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxListCtrl, SetItemImage)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	long _argLong2;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!|l!", &_argLong0 , &_argLong1 , &_argLong2 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret0 =  ((wxListCtrl_php*)_this)->SetItemImage((long int)_argLong0 , (int)_argLong1 , (int)_argLong2);
					break;
				case 2:
					ret0 =  ((wxListCtrl_php*)_this)->SetItemImage((long int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxListCtrl, SetItemText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!", &_argLong0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxListCtrl_php*)_this)->SetItemText((long int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxListCtrl, GetItemText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxListCtrl_php*)_this)->GetItemText((long int)_argLong0);
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxListCtrl, GetItemCount)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxListCtrl_php*)_this)->GetItemCount();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxListCtrl, GetColumnCount)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxListCtrl_php*)_this)->GetColumnCount();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxListCtrl, DeleteItem)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxListCtrl_php*)_this)->DeleteItem((long int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxListCtrl, DeleteAllColumns)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxListCtrl_php*)_this)->DeleteAllColumns();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxListCtrl, DeleteColumn)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxListCtrl_php*)_this)->DeleteColumn((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxListCtrl, InsertItem)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!", &_argLong0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			long int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxListCtrl_php*)_this)->InsertItem((long int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			long int ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret1 =  ((wxListCtrl_php*)_this)->InsertItem((long int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret1)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!l!", &_argLong0 , &_argStr0 , &_argStr0_len , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			long int ret2;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret2 =  ((wxListCtrl_php*)_this)->InsertItem((long int)_argLong0 , wxString(_argStr0, wxConvUTF8) , (int)_argLong1);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret2)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxListItem))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			long int ret3;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret3 =  ((wxListCtrl_php*)_this)->InsertItem(*(wxListItem *) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret3)			
		}
	}
}
PHP_METHOD(php_wxListCtrl, GetSelectedItemCount)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxListCtrl_php*)_this)->GetSelectedItemCount();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxListCtrl, GetItemTextColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxColour ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxListCtrl_php*)_this)->GetItemTextColour((long int)_argLong0);
					break;
				default:
					break;
			}
			void* ptr = safe_emalloc(1,sizeof(wxColour),0);memcpy(ptr,&ret0,sizeof(wxColour));object_init_ex(return_value,php_wxColour_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ptr, le_wxColour));return;			
		}
	}
}
PHP_METHOD(php_wxListCtrl, SetTextColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxListCtrl_php*)_this)->SetTextColour(*(wxColour *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxListCtrl, SetItem)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	long _argLong2;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!s!|l!", &_argLong0 , &_argLong1 , &_argStr0 , &_argStr0_len , &_argLong2 ) == SUCCESS)
	{
		
		if(valid)
		{
			long int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 4:
					ret0 =  ((wxListCtrl_php*)_this)->SetItem((long int)_argLong0 , (int)_argLong1 , wxString(_argStr0, wxConvUTF8) , (int)_argLong2);
					break;
				case 3:
					ret0 =  ((wxListCtrl_php*)_this)->SetItem((long int)_argLong0 , (int)_argLong1 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxListCtrl, SetItemBackgroundColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!", &_argLong0 , &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxListCtrl_php*)_this)->SetItemBackgroundColour((long int)_argLong0 , *(wxColour *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxListCtrl, SetItemTextColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!", &_argLong0 , &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxListCtrl_php*)_this)->SetItemTextColour((long int)_argLong0 , *(wxColour *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxStaticBitmap_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxStaticBitmap, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	void *_ptrObj3 = 0;
	zval *_argObj3 = 0;
	int id_to_find3;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!z!|z!z!l!s!", &_argObj0 , &_argLong0 , &_argObj1 , &_argObj2 , &_argObj3 , &_argLong1 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid && _argObj3)
		{
			if (_argObj3->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj3), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find3 = Z_RESVAL_P(*tmp);
				_ptrObj3 = zend_list_find(id_to_find3, &rsrc_type);
				if (!_ptrObj3 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj3->type==IS_LONG)
				_ptrObj3= (void *)_argObj3->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 7:
					_this = new wxStaticBitmap_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxBitmap *) _ptrObj1 , *(wxPoint *) _ptrObj2 , *(wxSize *) _ptrObj3 , (long int)_argLong1 , wxString(_argStr0, wxConvUTF8));
					break;
				case 6:
					_this = new wxStaticBitmap_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxBitmap *) _ptrObj1 , *(wxPoint *) _ptrObj2 , *(wxSize *) _ptrObj3 , (long int)_argLong1);
					break;
				case 5:
					_this = new wxStaticBitmap_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxBitmap *) _ptrObj1 , *(wxPoint *) _ptrObj2 , *(wxSize *) _ptrObj3);
					break;
				case 4:
					_this = new wxStaticBitmap_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxBitmap *) _ptrObj1 , *(wxPoint *) _ptrObj2);
					break;
				case 3:
					_this = new wxStaticBitmap_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxBitmap *) _ptrObj1);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxStaticBitmap);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxStaticBitmap_php*) _this)->evnArray);
			array_init(((wxStaticBitmap_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxStaticBitmap_php*) _this)->phpObj);
			*((wxStaticBitmap_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxStaticBitmap_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxStaticBitmap_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxStaticBitmap, SetBitmap)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStaticBitmap_php*)_this)->SetBitmap(*(wxBitmap *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxGauge_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxGauge, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	long _argLong2;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	void *_ptrObj3 = 0;
	zval *_argObj3 = 0;
	int id_to_find3;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!l!|z!z!l!z!s!", &_argObj0 , &_argLong0 , &_argLong1 , &_argObj1 , &_argObj2 , &_argLong2 , &_argObj3 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid && _argObj3)
		{
			if (_argObj3->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj3), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find3 = Z_RESVAL_P(*tmp);
				_ptrObj3 = zend_list_find(id_to_find3, &rsrc_type);
				if (!_ptrObj3 || (rsrc_type != le_wxValidator))
					valid = 0;
			}
			else if(_argObj3->type==IS_LONG)
				_ptrObj3= (void *)_argObj3->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 8:
					_this = new wxGauge_php((wxWindow*) _ptrObj0 , (int)_argLong0 , (int)_argLong1 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong2 , *(wxValidator *) _ptrObj3 , wxString(_argStr0, wxConvUTF8));
					break;
				case 7:
					_this = new wxGauge_php((wxWindow*) _ptrObj0 , (int)_argLong0 , (int)_argLong1 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong2 , *(wxValidator *) _ptrObj3);
					break;
				case 6:
					_this = new wxGauge_php((wxWindow*) _ptrObj0 , (int)_argLong0 , (int)_argLong1 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong2);
					break;
				case 5:
					_this = new wxGauge_php((wxWindow*) _ptrObj0 , (int)_argLong0 , (int)_argLong1 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 4:
					_this = new wxGauge_php((wxWindow*) _ptrObj0 , (int)_argLong0 , (int)_argLong1 , *(wxPoint *) _ptrObj1);
					break;
				case 3:
					_this = new wxGauge_php((wxWindow*) _ptrObj0 , (int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxGauge);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxGauge_php*) _this)->evnArray);
			array_init(((wxGauge_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxGauge_php*) _this)->phpObj);
			*((wxGauge_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxGauge_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxGauge_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxGauge, SetShadowWidth)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxGauge_php*)_this)->SetShadowWidth((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxGauge, SetBezelFace)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxGauge_php*)_this)->SetBezelFace((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxGauge, SetRange)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxGauge_php*)_this)->SetRange((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxGauge, SetValue)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxGauge_php*)_this)->SetValue((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxGauge, GetShadowWidth)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxGauge_php*)_this)->GetShadowWidth();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxGauge, GetBezelFace)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxGauge_php*)_this)->GetBezelFace();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxGauge, GetRange)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxGauge_php*)_this)->GetRange();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxGauge, GetValue)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxGauge_php*)_this)->GetValue();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxGauge, IsVertical)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxGauge_php*)_this)->IsVertical();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
void php_wxListEvent_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxListEvent, GetIndex)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			long int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxListEvent_php*)_this)->GetIndex();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxListEvent, GetColumn)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxListEvent_php*)_this)->GetColumn();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
void php_wxComboBox_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxComboBox, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	long _argLong2;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	char* _argStr2;
	int _argStr2_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	void *_ptrObj3 = 0;
	zval *_argObj3 = 0;
	int id_to_find3;
	void *_ptrObj4 = 0;
	zval *_argObj4 = 0;
	int id_to_find4;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!|s!z!z!l!s!l!z!s!", &_argObj0 , &_argLong0 , &_argStr0 , &_argStr0_len , &_argObj1 , &_argObj2 , &_argLong1 , &_argStr1 , &_argStr1_len , &_argLong2 , &_argObj3 , &_argStr2 , &_argStr2_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid && _argObj3)
		{
			if (_argObj3->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj3), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find3 = Z_RESVAL_P(*tmp);
				_ptrObj3 = zend_list_find(id_to_find3, &rsrc_type);
				if (!_ptrObj3 || (rsrc_type != le_wxValidator))
					valid = 0;
			}
			else if(_argObj3->type==IS_LONG)
				_ptrObj3= (void *)_argObj3->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 10:
					_this = new wxComboBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1 , &wxString(_argStr1, wxConvUTF8) , (long int)_argLong2 , *(wxValidator *) _ptrObj3 , wxString(_argStr2, wxConvUTF8));
					break;
				case 9:
					_this = new wxComboBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1 , &wxString(_argStr1, wxConvUTF8) , (long int)_argLong2 , *(wxValidator *) _ptrObj3);
					break;
				case 8:
					_this = new wxComboBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1 , &wxString(_argStr1, wxConvUTF8) , (long int)_argLong2);
					break;
				case 7:
					_this = new wxComboBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1 , &wxString(_argStr1, wxConvUTF8));
					break;
				case 6:
					_this = new wxComboBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1);
					break;
				case 5:
					_this = new wxComboBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 4:
					_this = new wxComboBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1);
					break;
				case 3:
					_this = new wxComboBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				case 2:
					_this = new wxComboBox_php((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxComboBox);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxComboBox_php*) _this)->evnArray);
			array_init(((wxComboBox_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxComboBox_php*) _this)->phpObj);
			*((wxComboBox_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxComboBox_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxComboBox_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!s!z!z!z!|l!z!s!", &_argObj0 , &_argLong0 , &_argStr0 , &_argStr0_len , &_argObj1 , &_argObj2 , &_argObj3 , &_argLong1 , &_argObj4 , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj2)
		if (valid) 
		{
			if(_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
			else if(_argObj2->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj3)
		if (valid) 
		{
			if(_argObj3->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj3), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find3 = Z_RESVAL_P(*tmp);
				_ptrObj3 = zend_list_find(id_to_find3, &rsrc_type);
				if (!_ptrObj3 || (rsrc_type != le_wxArrayString))
					valid = 0;
			}
			else if(_argObj3->type==IS_LONG)
				_ptrObj3= (void *)_argObj3->value.lval;
			else if(_argObj3->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj4)
		{
			if (_argObj4->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj4), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find4 = Z_RESVAL_P(*tmp);
				_ptrObj4 = zend_list_find(id_to_find4, &rsrc_type);
				if (!_ptrObj4 || (rsrc_type != le_wxValidator))
					valid = 0;
			}
			else if(_argObj4->type==IS_LONG)
				_ptrObj4= (void *)_argObj4->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 9:
					_this = new wxComboBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , *(wxArrayString *) _ptrObj3 , (long int)_argLong1 , *(wxValidator *) _ptrObj4 , wxString(_argStr1, wxConvUTF8));
					break;
				case 8:
					_this = new wxComboBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , *(wxArrayString *) _ptrObj3 , (long int)_argLong1 , *(wxValidator *) _ptrObj4);
					break;
				case 7:
					_this = new wxComboBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , *(wxArrayString *) _ptrObj3 , (long int)_argLong1);
					break;
				case 6:
					_this = new wxComboBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , *(wxArrayString *) _ptrObj3);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxComboBox);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxComboBox_php*) _this)->evnArray);
			array_init(((wxComboBox_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxComboBox_php*) _this)->phpObj);
			*((wxComboBox_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxComboBox_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxComboBox_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxComboBox, SetSelection)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxComboBox_php*)_this)->SetSelection((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxComboBox, GetSelection)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxComboBox_php*)_this)->GetSelection();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxComboBox, SetEditable)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxComboBox_php*)_this)->SetEditable(_argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxComboBox, GetValue)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxComboBox_php*)_this)->GetValue();
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxComboBox, SetValue)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxComboBox_php*)_this)->SetValue(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxComboBox, Replace)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!s!", &_argLong0 , &_argLong1 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					 ((wxComboBox_php*)_this)->Replace((long int)_argLong0 , (long int)_argLong1 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxComboBox, Remove)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxComboBox_php*)_this)->Remove((long int)_argLong0 , (long int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxComboBox, SelectAll)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxComboBox_php*)_this)->SelectAll();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxComboBox, Clear)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxComboBox_php*)_this)->Clear();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxComboBox, Delete)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxComboBox_php*)_this)->Delete((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxComboBox, Append)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxComboBox_php*)_this)->Append(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxArrayString))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxComboBox_php*)_this)->Append(*(wxArrayString *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxComboBox, Insert)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!l!", &_argStr0 , &_argStr0_len , &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxComboBox_php*)_this)->Insert(wxString(_argStr0, wxConvUTF8) , (unsigned int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
void php_wxRect_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxRect, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	long _argLong2;
	long _argLong3;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!l!l!", &_argLong0 , &_argLong1 , &_argLong2 , &_argLong3 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 4:
					_this = new wxRect_php((int)_argLong0 , (int)_argLong1 , (int)_argLong2 , (int)_argLong3);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxRect);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxRect_php*) _this)->evnArray);
			array_init(((wxRect_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxRect_php*) _this)->phpObj);
			*((wxRect_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxRect_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxRect_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
void php_wxBrush_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxBrush, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxBrush_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxBrush);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxBrush_php*) _this)->evnArray);
			array_init(((wxBrush_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxBrush_php*) _this)->phpObj);
			*((wxBrush_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxBrush_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxBrush_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|l!", &_argObj0 , &_argLong0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					_this = new wxBrush_php(*(wxColour *) _ptrObj0 , (int)_argLong0);
					break;
				case 1:
					_this = new wxBrush_php(*(wxColour *) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxBrush);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxBrush_php*) _this)->evnArray);
			array_init(((wxBrush_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxBrush_php*) _this)->phpObj);
			*((wxBrush_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxBrush_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxBrush_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					_this = new wxBrush_php(*(wxBitmap *) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxBrush);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxBrush_php*) _this)->evnArray);
			array_init(((wxBrush_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxBrush_php*) _this)->phpObj);
			*((wxBrush_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxBrush_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxBrush_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxBrush, SetColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxBrush_php*)_this)->SetColour(*(wxColour *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxBrush, SetStyle)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxBrush_php*)_this)->SetStyle((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxBrush, SetStipple)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxBrush_php*)_this)->SetStipple(*(wxBitmap *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxSplashScreen_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxSplashScreen, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	long _argLong2;
	long _argLong3;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	void *_ptrObj3 = 0;
	zval *_argObj3 = 0;
	int id_to_find3;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!l!z!l!|z!z!l!", &_argObj0 , &_argLong0 , &_argLong1 , &_argObj1 , &_argLong2 , &_argObj2 , &_argObj3 , &_argLong3 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid && _argObj3)
		{
			if (_argObj3->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj3), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find3 = Z_RESVAL_P(*tmp);
				_ptrObj3 = zend_list_find(id_to_find3, &rsrc_type);
				if (!_ptrObj3 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj3->type==IS_LONG)
				_ptrObj3= (void *)_argObj3->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 8:
					_this = new wxSplashScreen_php(*(wxBitmap *) _ptrObj0 , (long int)_argLong0 , (int)_argLong1 , (wxWindow*) _ptrObj1 , (int)_argLong2 , *(wxPoint *) _ptrObj2 , *(wxSize *) _ptrObj3 , (long int)_argLong3);
					break;
				case 7:
					_this = new wxSplashScreen_php(*(wxBitmap *) _ptrObj0 , (long int)_argLong0 , (int)_argLong1 , (wxWindow*) _ptrObj1 , (int)_argLong2 , *(wxPoint *) _ptrObj2 , *(wxSize *) _ptrObj3);
					break;
				case 6:
					_this = new wxSplashScreen_php(*(wxBitmap *) _ptrObj0 , (long int)_argLong0 , (int)_argLong1 , (wxWindow*) _ptrObj1 , (int)_argLong2 , *(wxPoint *) _ptrObj2);
					break;
				case 5:
					_this = new wxSplashScreen_php(*(wxBitmap *) _ptrObj0 , (long int)_argLong0 , (int)_argLong1 , (wxWindow*) _ptrObj1 , (int)_argLong2);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxSplashScreen);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxSplashScreen_php*) _this)->evnArray);
			array_init(((wxSplashScreen_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxSplashScreen_php*) _this)->phpObj);
			*((wxSplashScreen_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxSplashScreen_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxSplashScreen_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxSplashScreen, GetTimeout)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxSplashScreen_php*)_this)->GetTimeout();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
void php_wxCalendarCtrl_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxCalendarCtrl, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	long _argLong2;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!|l!z!z!l!s!", &_argObj0 , &_argLong0 , &_argLong1 , &_argObj1 , &_argObj2 , &_argLong2 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 7:
					_this = new wxCalendarCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxDateTime(_argLong1) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong2 , wxString(_argStr0, wxConvUTF8));
					break;
				case 6:
					_this = new wxCalendarCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxDateTime(_argLong1) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong2);
					break;
				case 5:
					_this = new wxCalendarCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxDateTime(_argLong1) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 4:
					_this = new wxCalendarCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxDateTime(_argLong1) , *(wxPoint *) _ptrObj1);
					break;
				case 3:
					_this = new wxCalendarCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxDateTime(_argLong1));
					break;
				case 2:
					_this = new wxCalendarCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxCalendarCtrl);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxCalendarCtrl_php*) _this)->evnArray);
			array_init(((wxCalendarCtrl_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxCalendarCtrl_php*) _this)->phpObj);
			*((wxCalendarCtrl_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxCalendarCtrl_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxCalendarCtrl_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxCalendarCtrl, SetDate)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxCalendarCtrl_php*)_this)->SetDate(wxDateTime(_argLong0));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxCalendarCtrl, GetDate)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxDateTime ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCalendarCtrl_php*)_this)->GetDate();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0.GetTicks())			
		}
	}
}
PHP_METHOD(php_wxCalendarCtrl, SetLowerDateLimit)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxCalendarCtrl_php*)_this)->SetLowerDateLimit(wxDateTime(_argLong0));
					break;
				case 0:
					ret0 =  ((wxCalendarCtrl_php*)_this)->SetLowerDateLimit();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxCalendarCtrl, GetLowerDateLimit)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxDateTime ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCalendarCtrl_php*)_this)->GetLowerDateLimit();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0.GetTicks())			
		}
	}
}
PHP_METHOD(php_wxCalendarCtrl, SetUpperDateLimit)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxCalendarCtrl_php*)_this)->SetUpperDateLimit(wxDateTime(_argLong0));
					break;
				case 0:
					ret0 =  ((wxCalendarCtrl_php*)_this)->SetUpperDateLimit();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxCalendarCtrl, GetUpperDateLimit)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxDateTime ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCalendarCtrl_php*)_this)->GetUpperDateLimit();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0.GetTicks())			
		}
	}
}
PHP_METHOD(php_wxCalendarCtrl, SetDateRange)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxCalendarCtrl_php*)_this)->SetDateRange(wxDateTime(_argLong0) , wxDateTime(_argLong1));
					break;
				case 1:
					ret0 =  ((wxCalendarCtrl_php*)_this)->SetDateRange(wxDateTime(_argLong0));
					break;
				case 0:
					ret0 =  ((wxCalendarCtrl_php*)_this)->SetDateRange();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxCalendarCtrl, EnableYearChange)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxCalendarCtrl_php*)_this)->EnableYearChange(_argBool0);
					break;
				case 0:
					 ((wxCalendarCtrl_php*)_this)->EnableYearChange();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxCalendarCtrl, EnableMonthChange)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxCalendarCtrl_php*)_this)->EnableMonthChange(_argBool0);
					break;
				case 0:
					 ((wxCalendarCtrl_php*)_this)->EnableMonthChange();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxCalendarCtrl, EnableHolidayDisplay)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxCalendarCtrl_php*)_this)->EnableHolidayDisplay(_argBool0);
					break;
				case 0:
					 ((wxCalendarCtrl_php*)_this)->EnableHolidayDisplay();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxCalendarCtrl, SetHeaderColours)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!z!", &_argObj0 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxCalendarCtrl_php*)_this)->SetHeaderColours(*(wxColour *) _ptrObj0 , *(wxColour *) _ptrObj1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxCalendarCtrl, SetHighlightColours)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!z!", &_argObj0 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxCalendarCtrl_php*)_this)->SetHighlightColours(*(wxColour *) _ptrObj0 , *(wxColour *) _ptrObj1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxCalendarCtrl, SetHolidayColours)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!z!", &_argObj0 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxCalendarCtrl_php*)_this)->SetHolidayColours(*(wxColour *) _ptrObj0 , *(wxColour *) _ptrObj1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxCalendarCtrl, SetHoliday)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxCalendarCtrl_php*)_this)->SetHoliday((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxCalendarCtrl, Enable)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxCalendarCtrl_php*)_this)->Enable(_argBool0);
					break;
				case 0:
					ret0 =  ((wxCalendarCtrl_php*)_this)->Enable();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxCalendarCtrl, Show)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxCalendarCtrl_php*)_this)->Show(_argBool0);
					break;
				case 0:
					ret0 =  ((wxCalendarCtrl_php*)_this)->Show();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxCalendarCtrl, SetWindowStyleFlag)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxCalendarCtrl_php*)_this)->SetWindowStyleFlag((long int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxCalendarCtrl, GetAttr)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxCalendarDateAttr* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxCalendarCtrl_php*)_this)->GetAttr((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxCalendarDateAttr_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxCalendarDateAttr));return;			
		}
	}
}
PHP_METHOD(php_wxCalendarCtrl, SetAttr)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!", &_argLong0 , &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxCalendarDateAttr))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxCalendarCtrl_php*)_this)->SetAttr((unsigned int)_argLong0 , (wxCalendarDateAttr*) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxCalendarEvent_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxCalendarEvent, GetWeekDay)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxCalendarEvent_php*)_this)->GetWeekDay();
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxDateEvent_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxDateEvent, GetDate)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxDateTime ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxDateEvent_php*)_this)->GetDate();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0.GetTicks())			
		}
	}
}
PHP_METHOD(php_wxDateEvent, SetDate)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxDateEvent_php*)_this)->SetDate(wxDateTime(_argLong0));
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxDateTime_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxDateTime, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxDateTime_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxDateTime);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxDateTime_php*) _this)->evnArray);
			array_init(((wxDateTime_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxDateTime_php*) _this)->phpObj);
			*((wxDateTime_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxDateTime_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxDateTime_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
void php_wxCalendarDateAttr_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxCalendarDateAttr, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	void *_ptrObj3 = 0;
	zval *_argObj3 = 0;
	int id_to_find3;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxCalendarDateAttr_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxCalendarDateAttr);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxCalendarDateAttr_php*) _this)->evnArray);
			array_init(((wxCalendarDateAttr_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxCalendarDateAttr_php*) _this)->phpObj);
			*((wxCalendarDateAttr_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxCalendarDateAttr_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxCalendarDateAttr_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|z!z!z!l!", &_argObj0 , &_argObj1 , &_argObj2 , &_argObj3 , &_argLong0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid && _argObj3)
		{
			if (_argObj3->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj3), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find3 = Z_RESVAL_P(*tmp);
				_ptrObj3 = zend_list_find(id_to_find3, &rsrc_type);
				if (!_ptrObj3 || (rsrc_type != le_wxFont))
					valid = 0;
			}
			else if(_argObj3->type==IS_LONG)
				_ptrObj3= (void *)_argObj3->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 5:
					_this = new wxCalendarDateAttr_php(*(wxColour *) _ptrObj0 , *(wxColour *) _ptrObj1 , *(wxColour *) _ptrObj2 , *(wxFont *) _ptrObj3 , (wxCalendarDateBorder) _argLong0);
					break;
				case 4:
					_this = new wxCalendarDateAttr_php(*(wxColour *) _ptrObj0 , *(wxColour *) _ptrObj1 , *(wxColour *) _ptrObj2 , *(wxFont *) _ptrObj3);
					break;
				case 3:
					_this = new wxCalendarDateAttr_php(*(wxColour *) _ptrObj0 , *(wxColour *) _ptrObj1 , *(wxColour *) _ptrObj2);
					break;
				case 2:
					_this = new wxCalendarDateAttr_php(*(wxColour *) _ptrObj0 , *(wxColour *) _ptrObj1);
					break;
				case 1:
					_this = new wxCalendarDateAttr_php(*(wxColour *) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxCalendarDateAttr);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxCalendarDateAttr_php*) _this)->evnArray);
			array_init(((wxCalendarDateAttr_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxCalendarDateAttr_php*) _this)->phpObj);
			*((wxCalendarDateAttr_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxCalendarDateAttr_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxCalendarDateAttr_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!|z!", &_argLong0 , &_argObj0 ) == SUCCESS)
	{
		
		if(valid && _argObj0)
		{
			if (_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					_this = new wxCalendarDateAttr_php((wxCalendarDateBorder) _argLong0 , *(wxColour *) _ptrObj0);
					break;
				case 1:
					_this = new wxCalendarDateAttr_php((wxCalendarDateBorder) _argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxCalendarDateAttr);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxCalendarDateAttr_php*) _this)->evnArray);
			array_init(((wxCalendarDateAttr_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxCalendarDateAttr_php*) _this)->phpObj);
			*((wxCalendarDateAttr_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxCalendarDateAttr_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxCalendarDateAttr_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxCalendarDateAttr, SetTextColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxCalendarDateAttr_php*)_this)->SetTextColour(*(wxColour *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxCalendarDateAttr, SetBackgroundColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxCalendarDateAttr_php*)_this)->SetBackgroundColour(*(wxColour *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxCalendarDateAttr, SetBorderColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxCalendarDateAttr_php*)_this)->SetBorderColour(*(wxColour *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxCalendarDateAttr, SetFont)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxFont))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxCalendarDateAttr_php*)_this)->SetFont(*(wxFont *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxCalendarDateAttr, SetBorder)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxCalendarDateAttr_php*)_this)->SetBorder((wxCalendarDateBorder) _argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxCalendarDateAttr, SetHoliday)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxCalendarDateAttr_php*)_this)->SetHoliday(_argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxCalendarDateAttr, IsHoliday)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCalendarDateAttr_php*)_this)->IsHoliday();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxCalendarDateAttr, HasBorder)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCalendarDateAttr_php*)_this)->HasBorder();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxCalendarDateAttr, HasFont)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCalendarDateAttr_php*)_this)->HasFont();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxCalendarDateAttr, HasBorderColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCalendarDateAttr_php*)_this)->HasBorderColour();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxCalendarDateAttr, HasBackgroundColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCalendarDateAttr_php*)_this)->HasBackgroundColour();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxCalendarDateAttr, HasTextColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCalendarDateAttr_php*)_this)->HasTextColour();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxCalendarDateAttr, GetTextColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxColour ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCalendarDateAttr_php*)_this)->GetTextColour();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxColour_entry);add_property_resource(return_value, "wxResource", zend_list_insert(&ret0, le_wxColour));return;			
		}
	}
}
PHP_METHOD(php_wxCalendarDateAttr, GetBackgroundColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxColour ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCalendarDateAttr_php*)_this)->GetBackgroundColour();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxColour_entry);add_property_resource(return_value, "wxResource", zend_list_insert(&ret0, le_wxColour));return;			
		}
	}
}
PHP_METHOD(php_wxCalendarDateAttr, GetBorderColour)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxColour ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCalendarDateAttr_php*)_this)->GetBorderColour();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxColour_entry);add_property_resource(return_value, "wxResource", zend_list_insert(&ret0, le_wxColour));return;			
		}
	}
}
PHP_METHOD(php_wxCalendarDateAttr, GetFont)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxFont ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCalendarDateAttr_php*)_this)->GetFont();
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxFont_entry);add_property_resource(return_value, "wxResource", zend_list_insert(&ret0, le_wxFont));return;			
		}
	}
}
PHP_METHOD(php_wxCalendarDateAttr, GetBorder)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxCalendarDateBorder ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCalendarDateAttr_php*)_this)->GetBorder();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
void php_wxTimer_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxTimer, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxTimer_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxTimer);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxTimer_php*) _this)->evnArray);
			array_init(((wxTimer_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxTimer_php*) _this)->phpObj);
			*((wxTimer_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxTimer_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxTimer_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|l!", &_argObj0 , &_argLong0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxEvtHandler(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					_this = new wxTimer_php((wxEvtHandler*) _ptrObj0 , (int)_argLong0);
					break;
				case 1:
					_this = new wxTimer_php((wxEvtHandler*) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxTimer);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxTimer_php*) _this)->evnArray);
			array_init(((wxTimer_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxTimer_php*) _this)->phpObj);
			*((wxTimer_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxTimer_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxTimer_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxTimer, Start)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|l!b!", &_argLong0 , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxTimer_php*)_this)->Start((int)_argLong0 , _argBool0);
					break;
				case 1:
					ret0 =  ((wxTimer_php*)_this)->Start((int)_argLong0);
					break;
				case 0:
					ret0 =  ((wxTimer_php*)_this)->Start();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxTimer, Stop)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxTimer_php*)_this)->Stop();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxTimer, IsRunning)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxTimer_php*)_this)->IsRunning();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
void php_wxEvtHandler_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxEvtHandler, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxEvtHandler_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxEvtHandler);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxEvtHandler_php*) _this)->evnArray);
			array_init(((wxEvtHandler_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxEvtHandler_php*) _this)->phpObj);
			*((wxEvtHandler_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxEvtHandler_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxEvtHandler_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}

void wxEvtHandler_php::onEvent(wxEvent& evnt)
{
	zval *arg[1];
	MAKE_STD_ZVAL(arg[0]);
	char _wxResource[] = "wxResource";
	TSRMLS_FETCH();

	if(0)
	{}
	
	else if(!tcscmp(evnt.GetClassInfo()->GetClassName(),wxT("wxEvent")))
	{
		object_init_ex(arg[0],php_wxEvent_entry);
		add_property_resource(arg[0], _wxResource, zend_list_insert(&evnt, le_wxEvent));
	}
	
	else if(!tcscmp(evnt.GetClassInfo()->GetClassName(),wxT("wxCommandEvent")))
	{
		object_init_ex(arg[0],php_wxCommandEvent_entry);
		add_property_resource(arg[0], _wxResource, zend_list_insert(&evnt, le_wxCommandEvent));
	}
	
	else if(!tcscmp(evnt.GetClassInfo()->GetClassName(),wxT("wxTreeEvent")))
	{
		object_init_ex(arg[0],php_wxTreeEvent_entry);
		add_property_resource(arg[0], _wxResource, zend_list_insert(&evnt, le_wxTreeEvent));
	}
	
	else if(!tcscmp(evnt.GetClassInfo()->GetClassName(),wxT("wxListEvent")))
	{
		object_init_ex(arg[0],php_wxListEvent_entry);
		add_property_resource(arg[0], _wxResource, zend_list_insert(&evnt, le_wxListEvent));
	}
	
	else if(!tcscmp(evnt.GetClassInfo()->GetClassName(),wxT("wxCalendarEvent")))
	{
		object_init_ex(arg[0],php_wxCalendarEvent_entry);
		add_property_resource(arg[0], _wxResource, zend_list_insert(&evnt, le_wxCalendarEvent));
	}
	
	else if(!tcscmp(evnt.GetClassInfo()->GetClassName(),wxT("wxSplitterEvent")))
	{
		object_init_ex(arg[0],php_wxSplitterEvent_entry);
		add_property_resource(arg[0], _wxResource, zend_list_insert(&evnt, le_wxSplitterEvent));
	}
	
	else if(!tcscmp(evnt.GetClassInfo()->GetClassName(),wxT("wxSpinEvent")))
	{
		object_init_ex(arg[0],php_wxSpinEvent_entry);
		add_property_resource(arg[0], _wxResource, zend_list_insert(&evnt, le_wxSpinEvent));
	}
	
	else if(!tcscmp(evnt.GetClassInfo()->GetClassName(),wxT("wxScrollEvent")))
	{
		object_init_ex(arg[0],php_wxScrollEvent_entry);
		add_property_resource(arg[0], _wxResource, zend_list_insert(&evnt, le_wxScrollEvent));
	}
	
	else if(!tcscmp(evnt.GetClassInfo()->GetClassName(),wxT("wxTimerEvent")))
	{
		object_init_ex(arg[0],php_wxTimerEvent_entry);
		add_property_resource(arg[0], _wxResource, zend_list_insert(&evnt, le_wxTimerEvent));
	}
	
	else if(!tcscmp(evnt.GetClassInfo()->GetClassName(),wxT("wxIdleEvent")))
	{
		object_init_ex(arg[0],php_wxIdleEvent_entry);
		add_property_resource(arg[0], _wxResource, zend_list_insert(&evnt, le_wxIdleEvent));
	}
	
	else if(!tcscmp(evnt.GetClassInfo()->GetClassName(),wxT("wxCloseEvent")))
	{
		object_init_ex(arg[0],php_wxCloseEvent_entry);
		add_property_resource(arg[0], _wxResource, zend_list_insert(&evnt, le_wxCloseEvent));
	}

        char* wxname;
        zval dummy;
        zval* fc_name;
        wxCommandEvent* ce;
        wxPhpClientData* co;

        ce = (wxCommandEvent*)evnt.m_callbackUserData;
        co = (wxPhpClientData*)ce->GetClientObject();

        MAKE_STD_ZVAL(fc_name);
        wxname = (char*)ce->GetString().c_str();
        ZVAL_STRING(fc_name, wxname,1);

        if (call_user_function(NULL, &(co->phpObj), fc_name, &dummy, 1, arg TSRMLS_CC) == FAILURE) {
                wxMessageBox(_T("Failed method Call!\n"));
        }	
	
}
PHP_METHOD(php_wxEvtHandler, Connect)
{
        zval **tmp;
        int rsrc_type;
        int id_to_find;
        int valid = 1;
        char _wxResource[] = "wxResource";
        wxEvtHandler *_this;

        if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE)
                return;
        id_to_find = Z_RESVAL_P(*tmp);
        _this = (wxEvtHandler*)zend_list_find(id_to_find, &rsrc_type);

        zval* fc;
        int flag,id0 = 0,id1 = 0;

        zval** fc_obj;
        zval** fc_name;
        char* ct;
        int args;
        args = ZEND_NUM_ARGS();

        if(
                zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, args TSRMLS_CC, "lllz", &id0, &id1, &flag , (void**)&fc) == SUCCESS   ||
                zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, args TSRMLS_CC, "llz" , &id0, &flag , (void**)&fc) == SUCCESS ||
                zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, args TSRMLS_CC, "lz"  , &flag , (void**)&fc) == SUCCESS
                )
        {
                zend_hash_index_find(HASH_OF(fc),0,(void**)&fc_obj);
                zend_hash_index_find(HASH_OF(fc),1,(void**)&fc_name);
                Z_ADDREF_P(*fc_obj);


                ct = (*fc_name)->value.str.val;

                wxCommandEvent* ce = new wxCommandEvent();
                ce->SetString(wxString::Format(wxT("%s"),ct));
                ce->SetClientObject(new wxPhpClientData(*fc_obj));

                switch(args){
                        case 4:
                                _this->Connect(id0, id1, flag, wxEventHandler(wxEvtHandler_php::onEvent),ce);
                                break;
                        case 3:
                                _this->Connect(id0, flag, wxEventHandler(wxEvtHandler_php::onEvent),ce);
                                break;
                        case 2:
                                _this->Connect(flag, wxEventHandler(wxEvtHandler_php::onEvent),ce);
                                break;
                        default:
                                wxMessageBox(_T("Failed to create event\n"));
                                break;
                }
        }
}
void php_wxTimerEvent_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxTimerEvent, GetInterval)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxTimerEvent_php*)_this)->GetInterval();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
void php_wxIPV4address_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxIPV4address, Hostname)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxIPV4address_php*)_this)->Hostname(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxIPV4address, Service)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxIPV4address_php*)_this)->Service(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxIPV4address, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxIPV4address_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxIPV4address);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxIPV4address_php*) _this)->evnArray);
			array_init(((wxIPV4address_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxIPV4address_php*) _this)->phpObj);
			*((wxIPV4address_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxIPV4address_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxIPV4address_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
void php_wxSockAddress_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxSockAddress, Clear)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxSockAddress_php*)_this)->Clear();
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxCheckBox_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxCheckBox, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	void *_ptrObj3 = 0;
	zval *_argObj3 = 0;
	int id_to_find3;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!s!|z!z!l!z!s!", &_argObj0 , &_argLong0 , &_argStr0 , &_argStr0_len , &_argObj1 , &_argObj2 , &_argLong1 , &_argObj3 , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid && _argObj3)
		{
			if (_argObj3->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj3), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find3 = Z_RESVAL_P(*tmp);
				_ptrObj3 = zend_list_find(id_to_find3, &rsrc_type);
				if (!_ptrObj3 || (rsrc_type != le_wxValidator))
					valid = 0;
			}
			else if(_argObj3->type==IS_LONG)
				_ptrObj3= (void *)_argObj3->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 8:
					_this = new wxCheckBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , *(wxValidator *) _ptrObj3 , wxString(_argStr1, wxConvUTF8));
					break;
				case 7:
					_this = new wxCheckBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , *(wxValidator *) _ptrObj3);
					break;
				case 6:
					_this = new wxCheckBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1);
					break;
				case 5:
					_this = new wxCheckBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 4:
					_this = new wxCheckBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1);
					break;
				case 3:
					_this = new wxCheckBox_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxCheckBox);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxCheckBox_php*) _this)->evnArray);
			array_init(((wxCheckBox_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxCheckBox_php*) _this)->phpObj);
			*((wxCheckBox_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxCheckBox_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxCheckBox_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxCheckBox, SetValue)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxCheckBox_php*)_this)->SetValue(_argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxCheckBox, GetValue)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCheckBox_php*)_this)->GetValue();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
void php_wxDirDialog_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxDirDialog, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	char* _argStr2;
	int _argStr2_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|s!s!l!z!z!s!", &_argObj0 , &_argStr0 , &_argStr0_len , &_argStr1 , &_argStr1_len , &_argLong0 , &_argObj1 , &_argObj2 , &_argStr2 , &_argStr2_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 7:
					_this = new wxDirDialog_php((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8) , (long int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , wxString(_argStr2, wxConvUTF8));
					break;
				case 6:
					_this = new wxDirDialog_php((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8) , (long int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 5:
					_this = new wxDirDialog_php((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8) , (long int)_argLong0 , *(wxPoint *) _ptrObj1);
					break;
				case 4:
					_this = new wxDirDialog_php((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8) , (long int)_argLong0);
					break;
				case 3:
					_this = new wxDirDialog_php((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8));
					break;
				case 2:
					_this = new wxDirDialog_php((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8));
					break;
				case 1:
					_this = new wxDirDialog_php((wxWindow*) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxDirDialog);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxDirDialog_php*) _this)->evnArray);
			array_init(((wxDirDialog_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxDirDialog_php*) _this)->phpObj);
			*((wxDirDialog_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxDirDialog_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxDirDialog_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxDirDialog, SetPath)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxDirDialog_php*)_this)->SetPath(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxDirDialog, ShowModal)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxDirDialog_php*)_this)->ShowModal();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxDirDialog, GetPath)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxDirDialog_php*)_this)->GetPath();
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
void php_wxBitmapButton_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxBitmapButton, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	void *_ptrObj3 = 0;
	zval *_argObj3 = 0;
	int id_to_find3;
	void *_ptrObj4 = 0;
	zval *_argObj4 = 0;
	int id_to_find4;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!z!|z!z!l!z!s!", &_argObj0 , &_argLong0 , &_argObj1 , &_argObj2 , &_argObj3 , &_argLong1 , &_argObj4 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid && _argObj3)
		{
			if (_argObj3->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj3), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find3 = Z_RESVAL_P(*tmp);
				_ptrObj3 = zend_list_find(id_to_find3, &rsrc_type);
				if (!_ptrObj3 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj3->type==IS_LONG)
				_ptrObj3= (void *)_argObj3->value.lval;
		}
		if(valid && _argObj4)
		{
			if (_argObj4->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj4), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find4 = Z_RESVAL_P(*tmp);
				_ptrObj4 = zend_list_find(id_to_find4, &rsrc_type);
				if (!_ptrObj4 || (rsrc_type != le_wxValidator))
					valid = 0;
			}
			else if(_argObj4->type==IS_LONG)
				_ptrObj4= (void *)_argObj4->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 8:
					_this = new wxBitmapButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxBitmap *) _ptrObj1 , *(wxPoint *) _ptrObj2 , *(wxSize *) _ptrObj3 , (long int)_argLong1 , *(wxValidator *) _ptrObj4 , wxString(_argStr0, wxConvUTF8));
					break;
				case 7:
					_this = new wxBitmapButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxBitmap *) _ptrObj1 , *(wxPoint *) _ptrObj2 , *(wxSize *) _ptrObj3 , (long int)_argLong1 , *(wxValidator *) _ptrObj4);
					break;
				case 6:
					_this = new wxBitmapButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxBitmap *) _ptrObj1 , *(wxPoint *) _ptrObj2 , *(wxSize *) _ptrObj3 , (long int)_argLong1);
					break;
				case 5:
					_this = new wxBitmapButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxBitmap *) _ptrObj1 , *(wxPoint *) _ptrObj2 , *(wxSize *) _ptrObj3);
					break;
				case 4:
					_this = new wxBitmapButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxBitmap *) _ptrObj1 , *(wxPoint *) _ptrObj2);
					break;
				case 3:
					_this = new wxBitmapButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxBitmap *) _ptrObj1);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxBitmapButton);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxBitmapButton_php*) _this)->evnArray);
			array_init(((wxBitmapButton_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxBitmapButton_php*) _this)->phpObj);
			*((wxBitmapButton_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxBitmapButton_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxBitmapButton_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
void php_wxToggleButton_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxToggleButton, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	void *_ptrObj3 = 0;
	zval *_argObj3 = 0;
	int id_to_find3;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!s!|z!z!l!z!s!", &_argObj0 , &_argLong0 , &_argStr0 , &_argStr0_len , &_argObj1 , &_argObj2 , &_argLong1 , &_argObj3 , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid && _argObj3)
		{
			if (_argObj3->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj3), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find3 = Z_RESVAL_P(*tmp);
				_ptrObj3 = zend_list_find(id_to_find3, &rsrc_type);
				if (!_ptrObj3 || (rsrc_type != le_wxValidator))
					valid = 0;
			}
			else if(_argObj3->type==IS_LONG)
				_ptrObj3= (void *)_argObj3->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 8:
					_this = new wxToggleButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , *(wxValidator *) _ptrObj3 , wxString(_argStr1, wxConvUTF8));
					break;
				case 7:
					_this = new wxToggleButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , *(wxValidator *) _ptrObj3);
					break;
				case 6:
					_this = new wxToggleButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1);
					break;
				case 5:
					_this = new wxToggleButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 4:
					_this = new wxToggleButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1);
					break;
				case 3:
					_this = new wxToggleButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxToggleButton);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxToggleButton_php*) _this)->evnArray);
			array_init(((wxToggleButton_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxToggleButton_php*) _this)->phpObj);
			*((wxToggleButton_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxToggleButton_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxToggleButton_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxToggleButton, SetValue)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxToggleButton_php*)_this)->SetValue(_argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxToggleButton, GetValue)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxToggleButton_php*)_this)->GetValue();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
void php_wxChoice_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxChoice, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	long _argLong2;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	void *_ptrObj3 = 0;
	zval *_argObj3 = 0;
	int id_to_find3;
	void *_ptrObj4 = 0;
	zval *_argObj4 = 0;
	int id_to_find4;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!|z!z!l!s!l!z!s!", &_argObj0 , &_argLong0 , &_argObj1 , &_argObj2 , &_argLong1 , &_argStr0 , &_argStr0_len , &_argLong2 , &_argObj3 , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid && _argObj3)
		{
			if (_argObj3->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj3), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find3 = Z_RESVAL_P(*tmp);
				_ptrObj3 = zend_list_find(id_to_find3, &rsrc_type);
				if (!_ptrObj3 || (rsrc_type != le_wxValidator))
					valid = 0;
			}
			else if(_argObj3->type==IS_LONG)
				_ptrObj3= (void *)_argObj3->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 9:
					_this = new wxChoice_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1 , &wxString(_argStr0, wxConvUTF8) , (long int)_argLong2 , *(wxValidator *) _ptrObj3 , wxString(_argStr1, wxConvUTF8));
					break;
				case 8:
					_this = new wxChoice_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1 , &wxString(_argStr0, wxConvUTF8) , (long int)_argLong2 , *(wxValidator *) _ptrObj3);
					break;
				case 7:
					_this = new wxChoice_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1 , &wxString(_argStr0, wxConvUTF8) , (long int)_argLong2);
					break;
				case 6:
					_this = new wxChoice_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1 , &wxString(_argStr0, wxConvUTF8));
					break;
				case 5:
					_this = new wxChoice_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1);
					break;
				case 4:
					_this = new wxChoice_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 3:
					_this = new wxChoice_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1);
					break;
				case 2:
					_this = new wxChoice_php((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxChoice);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxChoice_php*) _this)->evnArray);
			array_init(((wxChoice_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxChoice_php*) _this)->phpObj);
			*((wxChoice_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxChoice_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxChoice_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!z!z!z!|l!z!s!", &_argObj0 , &_argLong0 , &_argObj1 , &_argObj2 , &_argObj3 , &_argLong1 , &_argObj4 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj2)
		if (valid) 
		{
			if(_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
			else if(_argObj2->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj3)
		if (valid) 
		{
			if(_argObj3->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj3), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find3 = Z_RESVAL_P(*tmp);
				_ptrObj3 = zend_list_find(id_to_find3, &rsrc_type);
				if (!_ptrObj3 || (rsrc_type != le_wxArrayString))
					valid = 0;
			}
			else if(_argObj3->type==IS_LONG)
				_ptrObj3= (void *)_argObj3->value.lval;
			else if(_argObj3->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj4)
		{
			if (_argObj4->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj4), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find4 = Z_RESVAL_P(*tmp);
				_ptrObj4 = zend_list_find(id_to_find4, &rsrc_type);
				if (!_ptrObj4 || (rsrc_type != le_wxValidator))
					valid = 0;
			}
			else if(_argObj4->type==IS_LONG)
				_ptrObj4= (void *)_argObj4->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 8:
					_this = new wxChoice_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , *(wxArrayString *) _ptrObj3 , (long int)_argLong1 , *(wxValidator *) _ptrObj4 , wxString(_argStr0, wxConvUTF8));
					break;
				case 7:
					_this = new wxChoice_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , *(wxArrayString *) _ptrObj3 , (long int)_argLong1 , *(wxValidator *) _ptrObj4);
					break;
				case 6:
					_this = new wxChoice_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , *(wxArrayString *) _ptrObj3 , (long int)_argLong1);
					break;
				case 5:
					_this = new wxChoice_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , *(wxArrayString *) _ptrObj3);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxChoice);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxChoice_php*) _this)->evnArray);
			array_init(((wxChoice_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxChoice_php*) _this)->phpObj);
			*((wxChoice_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxChoice_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxChoice_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxChoice, GetCount)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			unsigned int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxChoice_php*)_this)->GetCount();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxChoice, Clear)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxChoice_php*)_this)->Clear();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxChoice, GetSelection)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxChoice_php*)_this)->GetSelection();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxChoice, GetCurrentSelection)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxChoice_php*)_this)->GetCurrentSelection();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxChoice, SetSelection)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxChoice_php*)_this)->SetSelection((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxChoice, FindString)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!|b!", &_argStr0 , &_argStr0_len , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxChoice_php*)_this)->FindString(wxString(_argStr0, wxConvUTF8) , _argBool0);
					break;
				case 1:
					ret0 =  ((wxChoice_php*)_this)->FindString(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxChoice, GetString)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxChoice_php*)_this)->GetString((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxChoice, SetString)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!", &_argLong0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxChoice_php*)_this)->SetString((unsigned int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxChoice, Delete)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxChoice_php*)_this)->Delete((unsigned int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxChoice, Append)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxChoice_php*)_this)->Append(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxArrayString))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxChoice_php*)_this)->Append(*(wxArrayString *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxChoice, Insert)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!l!", &_argStr0 , &_argStr0_len , &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxChoice_php*)_this)->Insert(wxString(_argStr0, wxConvUTF8) , (unsigned int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
void php_wxStyledTextCtrl_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxStyledTextCtrl, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|l!z!z!l!s!", &_argObj0 , &_argLong0 , &_argObj1 , &_argObj2 , &_argLong1 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 6:
					_this = new wxStyledTextCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , wxString(_argStr0, wxConvUTF8));
					break;
				case 5:
					_this = new wxStyledTextCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1);
					break;
				case 4:
					_this = new wxStyledTextCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 3:
					_this = new wxStyledTextCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1);
					break;
				case 2:
					_this = new wxStyledTextCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				case 1:
					_this = new wxStyledTextCtrl_php((wxWindow*) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxStyledTextCtrl);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxStyledTextCtrl_php*) _this)->evnArray);
			array_init(((wxStyledTextCtrl_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxStyledTextCtrl_php*) _this)->phpObj);
			*((wxStyledTextCtrl_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxStyledTextCtrl_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxStyledTextCtrl_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, AddText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->AddText(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetAnchor)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetAnchor();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, Redo)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxStyledTextCtrl_php*)_this)->Redo();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SelectAll)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxStyledTextCtrl_php*)_this)->SelectAll();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetSavePoint)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxStyledTextCtrl_php*)_this)->SetSavePoint();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, CanRedo)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->CanRedo();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetViewWhiteSpace)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetViewWhiteSpace();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetViewWhiteSpace)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetViewWhiteSpace((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GotoLine)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->GotoLine((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GotoPos)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->GotoPos((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetAnchor)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetAnchor((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, ConvertEOLs)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->ConvertEOLs((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetEOLMode)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetEOLMode();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetEOLMode)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetEOLMode((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetTabWidth)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetTabWidth((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetTabWidth)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetTabWidth();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetCodePage)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetCodePage((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, MarkerDefine)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!|z!z!", &_argLong0 , &_argLong1 , &_argObj0 , &_argObj1 ) == SUCCESS)
	{
		
		if(valid && _argObj0)
		{
			if (_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
		}
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 4:
					 ((wxStyledTextCtrl_php*)_this)->MarkerDefine((int)_argLong0 , (int)_argLong1 , *(wxColour *) _ptrObj0 , *(wxColour *) _ptrObj1);
					break;
				case 3:
					 ((wxStyledTextCtrl_php*)_this)->MarkerDefine((int)_argLong0 , (int)_argLong1 , *(wxColour *) _ptrObj0);
					break;
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->MarkerDefine((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, MarkerSetForeground)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!", &_argLong0 , &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->MarkerSetForeground((int)_argLong0 , *(wxColour *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, MarkerSetBackground)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!", &_argLong0 , &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->MarkerSetBackground((int)_argLong0 , *(wxColour *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, MarkerAdd)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->MarkerAdd((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, MarkerDelete)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->MarkerDelete((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, MarkerDeleteAll)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->MarkerDeleteAll((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, MarkerGet)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->MarkerGet((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, MarkerNext)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->MarkerNext((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, MarkerPrevious)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->MarkerPrevious((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, MarkerDefineBitmap)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!", &_argLong0 , &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->MarkerDefineBitmap((int)_argLong0 , *(wxBitmap *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, MarkerAddSet)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->MarkerAddSet((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, MarkerSetAlpha)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->MarkerSetAlpha((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetMarginType)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->SetMarginType((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetMarginType)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetMarginType((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetMarginWidth)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->SetMarginWidth((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetMarginWidth)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetMarginWidth((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetMarginMask)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->SetMarginMask((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetMarginMask)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetMarginMask((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetMarginSensitive)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!b!", &_argLong0 , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->SetMarginSensitive((int)_argLong0 , _argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetMarginSensitive)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetMarginSensitive((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, StyleResetDefault)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxStyledTextCtrl_php*)_this)->StyleResetDefault();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, StyleSetUnderline)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!b!", &_argLong0 , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->StyleSetUnderline((int)_argLong0 , _argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetCaretPeriod)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetCaretPeriod();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetCaretPeriod)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetCaretPeriod((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetIndent)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetIndent((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetIndent)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetIndent();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetUseTabs)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetUseTabs(_argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetUseTabs)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetUseTabs();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetUseHorizontalScrollBar)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetUseHorizontalScrollBar(_argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetUseHorizontalScrollBar)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetUseHorizontalScrollBar();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetIndentationGuides)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetIndentationGuides();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetHighlightGuide)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetHighlightGuide((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetLineEndPosition)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetLineEndPosition((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetHighlightGuide)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetHighlightGuide();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetCodePage)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetCodePage();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetCurrentPos)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetCurrentPos((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetSelectionStart)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetSelectionStart((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetSelectionStart)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetSelectionStart();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetSelectionEnd)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetSelectionEnd((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetSelectionEnd)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetSelectionEnd();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, FindText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	long _argLong2;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!s!|l!", &_argLong0 , &_argLong1 , &_argStr0 , &_argStr0_len , &_argLong2 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 4:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->FindText((int)_argLong0 , (int)_argLong1 , wxString(_argStr0, wxConvUTF8) , (int)_argLong2);
					break;
				case 3:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->FindText((int)_argLong0 , (int)_argLong1 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetFirstVisibleLine)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetFirstVisibleLine();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetLine)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetLine((int)_argLong0);
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetLineCount)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetLineCount();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetMarginLeft)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetMarginLeft((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetMarginLeft)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetMarginLeft();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetMarginRight)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetMarginRight((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetMarginRight)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetMarginRight();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetModify)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetModify();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetSelection)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->SetSelection((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetSelectedText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetSelectedText();
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetTextRange)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetTextRange((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, HideSelection)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->HideSelection(_argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, LineFromPosition)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->LineFromPosition((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, PositionFromLine)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->PositionFromLine((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, LineScroll)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->LineScroll((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, EnsureCaretVisible)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxStyledTextCtrl_php*)_this)->EnsureCaretVisible();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, ReplaceSelection)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->ReplaceSelection(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetReadOnly)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetReadOnly(_argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, CanPaste)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->CanPaste();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, CanUndo)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->CanUndo();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, EmptyUndoBuffer)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxStyledTextCtrl_php*)_this)->EmptyUndoBuffer();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, Undo)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxStyledTextCtrl_php*)_this)->Undo();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, Cut)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxStyledTextCtrl_php*)_this)->Cut();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, Copy)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxStyledTextCtrl_php*)_this)->Copy();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, Paste)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxStyledTextCtrl_php*)_this)->Paste();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, Clear)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxStyledTextCtrl_php*)_this)->Clear();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetText(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetText();
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetTextLength)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetTextLength();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetOvertype)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetOvertype(_argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetOvertype)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetOvertype();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetCaretWidth)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetCaretWidth((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetCaretWidth)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetCaretWidth();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, ReplaceTarget)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->ReplaceTarget(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, ReplaceTargetRE)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->ReplaceTargetRE(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SearchInTarget)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->SearchInTarget(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetSearchFlags)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetSearchFlags((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetSearchFlags)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetSearchFlags();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, ShowLines)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->ShowLines((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, HideLines)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->HideLines((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetLineVisible)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetLineVisible((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, EnsureVisible)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->EnsureVisible((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetTabIndents)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetTabIndents(_argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetTabIndents)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetTabIndents();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetBackSpaceUnIndents)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetBackSpaceUnIndents(_argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetBackSpaceUnIndents)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetBackSpaceUnIndents();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetMouseDwellTime)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetMouseDwellTime((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetMouseDwellTime)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetMouseDwellTime();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetEndAtLastLine)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetEndAtLastLine(_argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetEndAtLastLine)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetEndAtLastLine();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetUseVerticalScrollBar)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetUseVerticalScrollBar(_argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetUseVerticalScrollBar)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetUseVerticalScrollBar();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, AppendText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->AppendText(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, LineLength)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->LineLength((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, LinesOnScreen)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->LinesOnScreen();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, UsePopUp)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->UsePopUp(_argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetLexer)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetLexer((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetLexer)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetLexer();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetProperty)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!s!", &_argStr0 , &_argStr0_len , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->SetProperty(wxString(_argStr0, wxConvUTF8) , wxString(_argStr1, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetKeyWords)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!", &_argLong0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->SetKeyWords((int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetLexerLanguage)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetLexerLanguage(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetIndentationGuides)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetIndentationGuides(_argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetWrapMode)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetWrapMode((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetWrapMode)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetWrapMode();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SaveFile)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->SaveFile(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, LoadFile)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->LoadFile(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, StyleClearAll)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxStyledTextCtrl_php*)_this)->StyleClearAll();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, StyleSetForeground)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!", &_argLong0 , &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->StyleSetForeground((int)_argLong0 , *(wxColour *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, StyleSetBackground)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!", &_argLong0 , &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->StyleSetBackground((int)_argLong0 , *(wxColour *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, StyleSetBold)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!b!", &_argLong0 , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->StyleSetBold((int)_argLong0 , _argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, StyleSetItalic)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!b!", &_argLong0 , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->StyleSetItalic((int)_argLong0 , _argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, StyleSetSize)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->StyleSetSize((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, StyleSetFaceName)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!s!", &_argLong0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->StyleSetFaceName((int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, StyleSetEOLFilled)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!b!", &_argLong0 , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->StyleSetEOLFilled((int)_argLong0 , _argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, StyleSetCase)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->StyleSetCase((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, StyleSetHotSpot)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!b!", &_argLong0 , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->StyleSetHotSpot((int)_argLong0 , _argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, StyleSetVisible)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!b!", &_argLong0 , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->StyleSetVisible((int)_argLong0 , _argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetWhitespaceForeground)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "b!z!", &_argBool0 , &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->SetWhitespaceForeground(_argBool0 , *(wxColour *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetWhitespaceBackground)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "b!z!", &_argBool0 , &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->SetWhitespaceBackground(_argBool0 , *(wxColour *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetProperty)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetProperty(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetPropertyInt)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetPropertyInt(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, Colourise)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxStyledTextCtrl_php*)_this)->Colourise((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, SetStyleBits)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxStyledTextCtrl_php*)_this)->SetStyleBits((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxStyledTextCtrl, GetStyleBits)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxStyledTextCtrl_php*)_this)->GetStyleBits();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
void php_wxImageList_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxImageList, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	bool _argBool0;
	long _argLong0;
	long _argLong1;
	long _argLong2;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxImageList_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxImageList);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxImageList_php*) _this)->evnArray);
			array_init(((wxImageList_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxImageList_php*) _this)->phpObj);
			*((wxImageList_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxImageList_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxImageList_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!|b!l!", &_argLong0 , &_argLong1 , &_argBool0 , &_argLong2 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 4:
					_this = new wxImageList_php((int)_argLong0 , (int)_argLong1 , _argBool0 , (int)_argLong2);
					break;
				case 3:
					_this = new wxImageList_php((int)_argLong0 , (int)_argLong1 , _argBool0);
					break;
				case 2:
					_this = new wxImageList_php((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxImageList);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxImageList_php*) _this)->evnArray);
			array_init(((wxImageList_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxImageList_php*) _this)->phpObj);
			*((wxImageList_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxImageList_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxImageList_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxImageList, Add)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxImageList_php*)_this)->Add(*(wxBitmap *) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!z!", &_argObj0 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret1 =  ((wxImageList_php*)_this)->Add(*(wxBitmap *) _ptrObj0 , *(wxBitmap *) _ptrObj1);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret1)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!z!", &_argObj0 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxColour))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int ret2;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret2 =  ((wxImageList_php*)_this)->Add(*(wxBitmap *) _ptrObj0 , *(wxColour *) _ptrObj1);
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret2)			
		}
	}
}
PHP_METHOD(php_wxImageList, GetBitmap)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxBitmap ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxImageList_php*)_this)->GetBitmap((int)_argLong0);
					break;
				default:
					break;
			}
			void* ptr = safe_emalloc(1,sizeof(wxBitmap),0);memcpy(ptr,&ret0,sizeof(wxBitmap));object_init_ex(return_value,php_wxBitmap_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ptr, le_wxBitmap));return;			
		}
	}
}
PHP_METHOD(php_wxImageList, GetIcon)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			wxIcon ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxImageList_php*)_this)->GetIcon((int)_argLong0);
					break;
				default:
					break;
			}
			void* ptr = safe_emalloc(1,sizeof(wxIcon),0);memcpy(ptr,&ret0,sizeof(wxIcon));object_init_ex(return_value,php_wxIcon_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ptr, le_wxIcon));return;			
		}
	}
}
PHP_METHOD(php_wxImageList, Replace)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!", &_argLong0 , &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxImageList_php*)_this)->Replace((int)_argLong0 , *(wxBitmap *) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!z!z!", &_argLong0 , &_argObj0 , &_argObj1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxBitmap && rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret1 =  ((wxImageList_php*)_this)->Replace((int)_argLong0 , *(wxBitmap *) _ptrObj0 , *(wxBitmap *) _ptrObj1);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret1)			
		}
	}
}
PHP_METHOD(php_wxImageList, Remove)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxImageList_php*)_this)->Remove((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxImageList, RemoveAll)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxImageList_php*)_this)->RemoveAll();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxImageList, GetImageCount)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxImageList_php*)_this)->GetImageCount();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
void php_wxXmlResource_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxXmlResource, LoadToolBar)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!s!", &_argObj0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxToolBar* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxXmlResource_php*)_this)->LoadToolBar((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxToolBar_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxToolBar));return;			
		}
	}
}
PHP_METHOD(php_wxXmlResource, LoadDialog)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!s!", &_argObj0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxDialog* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxXmlResource_php*)_this)->LoadDialog((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxDialog_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxDialog));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!z!s!", &_argObj0 , &_argObj1 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxDialog(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret1 =  ((wxXmlResource_php*)_this)->LoadDialog((wxDialog*) _ptrObj0 , (wxWindow*) _ptrObj1 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret1)			
		}
	}
}
PHP_METHOD(php_wxXmlResource, LoadPanel)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!s!", &_argObj0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxPanel* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxXmlResource_php*)_this)->LoadPanel((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxPanel_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxPanel));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!z!s!", &_argObj0 , &_argObj1 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxPanel && rsrc_type != le_wxScrolledWindow))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret1 =  ((wxXmlResource_php*)_this)->LoadPanel((wxPanel*) _ptrObj0 , (wxWindow*) _ptrObj1 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret1)			
		}
	}
}
PHP_METHOD(php_wxXmlResource, LoadFrame)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!s!", &_argObj0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxFrame* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxXmlResource_php*)_this)->LoadFrame((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxFrame_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxFrame));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!z!s!", &_argObj0 , &_argObj1 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxFrame && rsrc_type != le_wxSplashScreen))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(_argObj1)
		if (valid) 
		{
			if(_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
			else if(_argObj1->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret1 =  ((wxXmlResource_php*)_this)->LoadFrame((wxFrame*) _ptrObj0 , (wxWindow*) _ptrObj1 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret1)			
		}
	}
}
PHP_METHOD(php_wxXmlResource, LoadBitmap)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			wxBitmap ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxXmlResource_php*)_this)->LoadBitmap(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			void* ptr = safe_emalloc(1,sizeof(wxBitmap),0);memcpy(ptr,&ret0,sizeof(wxBitmap));object_init_ex(return_value,php_wxBitmap_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ptr, le_wxBitmap));return;			
		}
	}
}
PHP_METHOD(php_wxXmlResource, LoadIcon)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			wxIcon ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxXmlResource_php*)_this)->LoadIcon(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			void* ptr = safe_emalloc(1,sizeof(wxIcon),0);memcpy(ptr,&ret0,sizeof(wxIcon));object_init_ex(return_value,php_wxIcon_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ptr, le_wxIcon));return;			
		}
	}
}
PHP_METHOD(php_wxXmlResource, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|l!s!", &_argLong0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					_this = new wxXmlResource_php((int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				case 1:
					_this = new wxXmlResource_php((int)_argLong0);
					break;
				case 0:
					_this = new wxXmlResource_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxXmlResource);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxXmlResource_php*) _this)->evnArray);
			array_init(((wxXmlResource_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxXmlResource_php*) _this)->phpObj);
			*((wxXmlResource_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxXmlResource_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxXmlResource_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!|l!s!", &_argStr0 , &_argStr0_len , &_argLong0 , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					_this = new wxXmlResource_php(wxString(_argStr0, wxConvUTF8) , (int)_argLong0 , wxString(_argStr1, wxConvUTF8));
					break;
				case 2:
					_this = new wxXmlResource_php(wxString(_argStr0, wxConvUTF8) , (int)_argLong0);
					break;
				case 1:
					_this = new wxXmlResource_php(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxXmlResource);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxXmlResource_php*) _this)->evnArray);
			array_init(((wxXmlResource_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxXmlResource_php*) _this)->phpObj);
			*((wxXmlResource_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxXmlResource_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxXmlResource_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxXmlResource, Load)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxXmlResource_php*)_this)->Load(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxXmlResource, Unload)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxXmlResource_php*)_this)->Unload(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxXmlResource, InitAllHandlers)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxXmlResource_php*)_this)->InitAllHandlers();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxXmlResource, ClearHandlers)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxXmlResource_php*)_this)->ClearHandlers();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxXmlResource, LoadMenu)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			wxMenu* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxXmlResource_php*)_this)->LoadMenu(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenu_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxMenu));return;			
		}
	}
}
PHP_METHOD(php_wxXmlResource, LoadMenuBar)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!s!", &_argObj0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			wxMenuBar* ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxXmlResource_php*)_this)->LoadMenuBar((wxWindow*) _ptrObj0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenuBar_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret0, le_wxMenuBar));return;			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			wxMenuBar* ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret1 =  ((wxXmlResource_php*)_this)->LoadMenuBar(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			object_init_ex(return_value,php_wxMenuBar_entry);add_property_resource(return_value, "wxResource", zend_list_insert(ret1, le_wxMenuBar));return;			
		}
	}
}
PHP_METHOD(php_wxXmlResource, GetXRCID)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!|l!", &_argStr0 , &_argStr0_len , &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxXmlResource_php*)_this)->GetXRCID(wxString(_argStr0, wxConvUTF8) , (int)_argLong0);
					break;
				case 1:
					ret0 =  ((wxXmlResource_php*)_this)->GetXRCID(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxXmlResource, GetDomain)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxChar * ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxXmlResource_php*)_this)->GetDomain();
					break;
				default:
					break;
			}
			RETURN_STRING((char *)wxString(ret0).c_str(),1)			
		}
	}
}
PHP_METHOD(php_wxXmlResource, SetDomain)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxXmlResource_php*)_this)->SetDomain(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxLocale_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxLocale, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxLocale_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxLocale);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxLocale_php*) _this)->evnArray);
			array_init(((wxLocale_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxLocale_php*) _this)->phpObj);
			*((wxLocale_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxLocale_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxLocale_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!|l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					_this = new wxLocale_php((int)_argLong0 , (int)_argLong1);
					break;
				case 1:
					_this = new wxLocale_php((int)_argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxLocale);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxLocale_php*) _this)->evnArray);
			array_init(((wxLocale_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxLocale_php*) _this)->phpObj);
			*((wxLocale_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxLocale_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxLocale_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxLocale, Init)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxLocale_php*)_this)->Init((int)_argLong0 , (int)_argLong1);
					break;
				case 1:
					ret0 =  ((wxLocale_php*)_this)->Init((int)_argLong0);
					break;
				case 0:
					ret0 =  ((wxLocale_php*)_this)->Init();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxLocale, IsAvailable)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxLocale_php*)_this)->IsAvailable((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxLocale, IsLoaded)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxLocale_php*)_this)->IsLoaded(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxLocale, AddCatalogLookupPathPrefix)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxLocale_php*)_this)->AddCatalogLookupPathPrefix(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxLocale, AddCatalog)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxLocale_php*)_this)->AddCatalog(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!l!s!", &_argStr0 , &_argStr0_len , &_argLong0 , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 3:
					ret1 =  ((wxLocale_php*)_this)->AddCatalog(wxString(_argStr0, wxConvUTF8) , (wxLanguage) _argLong0 , wxString(_argStr1, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret1)			
		}
	}
}
PHP_METHOD(php_wxLocale, GetName)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxLocale_php*)_this)->GetName();
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxLocale, GetLocale)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			const wxChar * ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxLocale_php*)_this)->GetLocale();
					break;
				default:
					break;
			}
			RETURN_STRING((char *)wxString(ret0).c_str(),1)			
		}
	}
}
PHP_METHOD(php_wxLocale, GetLanguage)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxLocale_php*)_this)->GetLanguage();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxLocale, GetCanonicalName)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxLocale_php*)_this)->GetCanonicalName();
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxLocale, GetSystemLanguage)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxLocale_php*)_this)->GetSystemLanguage();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxLocale, GetSystemEncoding)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxLocale_php*)_this)->GetSystemEncoding();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxLocale, GetSystemEncodingName)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxLocale_php*)_this)->GetSystemEncodingName();
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
void php_wxTreeCtrlBase_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxTreeCtrlBase, AssignImageList)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxImageList))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxTreeCtrlBase_php*)_this)->AssignImageList((wxImageList*) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxRadioBox_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
void php_wxRadioButton_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxRadioButton, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	char* _argStr1;
	int _argStr1_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	void *_ptrObj3 = 0;
	zval *_argObj3 = 0;
	int id_to_find3;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!s!|z!z!l!z!s!", &_argObj0 , &_argLong0 , &_argStr0 , &_argStr0_len , &_argObj1 , &_argObj2 , &_argLong1 , &_argObj3 , &_argStr1 , &_argStr1_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid && _argObj3)
		{
			if (_argObj3->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj3), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find3 = Z_RESVAL_P(*tmp);
				_ptrObj3 = zend_list_find(id_to_find3, &rsrc_type);
				if (!_ptrObj3 || (rsrc_type != le_wxValidator))
					valid = 0;
			}
			else if(_argObj3->type==IS_LONG)
				_ptrObj3= (void *)_argObj3->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 8:
					_this = new wxRadioButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , *(wxValidator *) _ptrObj3 , wxString(_argStr1, wxConvUTF8));
					break;
				case 7:
					_this = new wxRadioButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , *(wxValidator *) _ptrObj3);
					break;
				case 6:
					_this = new wxRadioButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1);
					break;
				case 5:
					_this = new wxRadioButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 4:
					_this = new wxRadioButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1);
					break;
				case 3:
					_this = new wxRadioButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxRadioButton);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxRadioButton_php*) _this)->evnArray);
			array_init(((wxRadioButton_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxRadioButton_php*) _this)->phpObj);
			*((wxRadioButton_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxRadioButton_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxRadioButton_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxRadioButton, SetValue)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxRadioButton_php*)_this)->SetValue(_argBool0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxRadioButton, GetValue)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxRadioButton_php*)_this)->GetValue();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxRadioButton, Enable)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxRadioButton_php*)_this)->Enable(_argBool0);
					break;
				case 0:
					ret0 =  ((wxRadioButton_php*)_this)->Enable();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxRadioButton, SetLabel)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxRadioButton_php*)_this)->SetLabel(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxListItem_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxListItem, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxListItem_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxListItem);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxListItem_php*) _this)->evnArray);
			array_init(((wxListItem_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxListItem_php*) _this)->phpObj);
			*((wxListItem_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxListItem_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxListItem_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxListItem))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					_this = new wxListItem_php(*(wxListItem *) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxListItem);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxListItem_php*) _this)->evnArray);
			array_init(((wxListItem_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxListItem_php*) _this)->phpObj);
			*((wxListItem_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxListItem_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxListItem_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxListItem, Clear)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxListItem_php*)_this)->Clear();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxListItem, ClearAttributes)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					 ((wxListItem_php*)_this)->ClearAttributes();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxListItem, SetMask)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxListItem_php*)_this)->SetMask((long int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxListItem, SetId)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxListItem_php*)_this)->SetId((long int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxListItem, SetColumn)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxListItem_php*)_this)->SetColumn((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxListItem, SetImage)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxListItem_php*)_this)->SetImage((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxListItem, SetText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxListItem_php*)_this)->SetText(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxListItem, SetWidth)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxListItem_php*)_this)->SetWidth((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxListItem, GetId)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			long int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxListItem_php*)_this)->GetId();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxListItem, GetColumn)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxListItem_php*)_this)->GetColumn();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxListItem, GetText)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			wxString ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxListItem_php*)_this)->GetText();
					break;
				default:
					break;
			}
			char * ro2;ro2 = (char*)malloc(sizeof(wxChar)*(ret0.size()+1));strcpy ( ro2, (const char *) ret0.char_str() );RETURN_STRING( ro2 ,1)			
		}
	}
}
PHP_METHOD(php_wxListItem, GetWidth)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxListItem_php*)_this)->GetWidth();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
void php_wxHtmlHelpController_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxHtmlHelpController, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|l!z!", &_argLong0 , &_argObj0 ) == SUCCESS)
	{
		
		if(valid && _argObj0)
		{
			if (_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					_this = new wxHtmlHelpController_php((int)_argLong0 , (wxWindow*) _ptrObj0);
					break;
				case 1:
					_this = new wxHtmlHelpController_php((int)_argLong0);
					break;
				case 0:
					_this = new wxHtmlHelpController_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxHtmlHelpController);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxHtmlHelpController_php*) _this)->evnArray);
			array_init(((wxHtmlHelpController_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxHtmlHelpController_php*) _this)->phpObj);
			*((wxHtmlHelpController_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxHtmlHelpController_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxHtmlHelpController_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxHtmlHelpController, AddBook)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!|b!", &_argStr0 , &_argStr0_len , &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxHtmlHelpController_php*)_this)->AddBook(wxString(_argStr0, wxConvUTF8) , _argBool0);
					break;
				case 1:
					ret0 =  ((wxHtmlHelpController_php*)_this)->AddBook(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxHtmlHelpController, Display)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxHtmlHelpController_php*)_this)->Display(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			bool ret1;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret1 =  ((wxHtmlHelpController_php*)_this)->Display((int)_argLong0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret1)			
		}
	}
}
PHP_METHOD(php_wxHtmlHelpController, DisplayContents)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxHtmlHelpController_php*)_this)->DisplayContents();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxHtmlHelpController, DisplayIndex)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxHtmlHelpController_php*)_this)->DisplayIndex();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxHtmlHelpController, SetTempDir)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxHtmlHelpController_php*)_this)->SetTempDir(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxHtmlHelpController, SetTitleFormat)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxHtmlHelpController_php*)_this)->SetTitleFormat(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxTaskBarIcon_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxTaskBarIcon, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxTaskBarIcon_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxTaskBarIcon);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxTaskBarIcon_php*) _this)->evnArray);
			array_init(((wxTaskBarIcon_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxTaskBarIcon_php*) _this)->phpObj);
			*((wxTaskBarIcon_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxTaskBarIcon_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxTaskBarIcon_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxTaskBarIcon, SetIcon)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|s!", &_argObj0 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					ret0 =  ((wxTaskBarIcon_php*)_this)->SetIcon(*(wxIcon *) _ptrObj0 , wxString(_argStr0, wxConvUTF8));
					break;
				case 1:
					ret0 =  ((wxTaskBarIcon_php*)_this)->SetIcon(*(wxIcon *) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxTaskBarIcon, IsIconInstalled)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxTaskBarIcon_php*)_this)->IsIconInstalled();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxTaskBarIcon, RemoveIcon)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxTaskBarIcon_php*)_this)->RemoveIcon();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxTaskBarIcon, PopupMenu)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxMenu))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					ret0 =  ((wxTaskBarIcon_php*)_this)->PopupMenu((wxMenu*) _ptrObj0);
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
PHP_METHOD(php_wxTaskBarIcon, IsOk)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxTaskBarIcon_php*)_this)->IsOk();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
void php_wxScrolledWindow_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxScrolledWindow, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxScrolledWindow_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxScrolledWindow);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxScrolledWindow_php*) _this)->evnArray);
			array_init(((wxScrolledWindow_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxScrolledWindow_php*) _this)->phpObj);
			*((wxScrolledWindow_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxScrolledWindow_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxScrolledWindow_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!|l!z!z!l!s!", &_argObj0 , &_argLong0 , &_argObj1 , &_argObj2 , &_argLong1 , &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 6:
					_this = new wxScrolledWindow_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1 , wxString(_argStr0, wxConvUTF8));
					break;
				case 5:
					_this = new wxScrolledWindow_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (long int)_argLong1);
					break;
				case 4:
					_this = new wxScrolledWindow_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 3:
					_this = new wxScrolledWindow_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1);
					break;
				case 2:
					_this = new wxScrolledWindow_php((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				case 1:
					_this = new wxScrolledWindow_php((wxWindow*) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxScrolledWindow);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxScrolledWindow_php*) _this)->evnArray);
			array_init(((wxScrolledWindow_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxScrolledWindow_php*) _this)->phpObj);
			*((wxScrolledWindow_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxScrolledWindow_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxScrolledWindow_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxScrolledWindow, SetScrollRate)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxScrolledWindow_php*)_this)->SetScrollRate((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxIdleEvent_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxIdleEvent, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxIdleEvent_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxIdleEvent);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxIdleEvent_php*) _this)->evnArray);
			array_init(((wxIdleEvent_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxIdleEvent_php*) _this)->phpObj);
			*((wxIdleEvent_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxIdleEvent_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxIdleEvent_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
void php_wxIconBundle_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxIconBundle, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					_this = new wxIconBundle_php();
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxIconBundle);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxIconBundle_php*) _this)->evnArray);
			array_init(((wxIconBundle_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxIconBundle_php*) _this)->phpObj);
			*((wxIconBundle_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxIconBundle_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxIconBundle_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!l!", &_argStr0 , &_argStr0_len , &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					_this = new wxIconBundle_php(wxString(_argStr0, wxConvUTF8) , (long int)_argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxIconBundle);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxIconBundle_php*) _this)->evnArray);
			array_init(((wxIconBundle_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxIconBundle_php*) _this)->phpObj);
			*((wxIconBundle_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxIconBundle_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxIconBundle_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					_this = new wxIconBundle_php(*(wxIcon *) _ptrObj0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxIconBundle);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxIconBundle_php*) _this)->evnArray);
			array_init(((wxIconBundle_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxIconBundle_php*) _this)->phpObj);
			*((wxIconBundle_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxIconBundle_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxIconBundle_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxIconBundle, AddIcon)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!l!", &_argStr0 , &_argStr0_len , &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxIconBundle_php*)_this)->AddIcon(wxString(_argStr0, wxConvUTF8) , (long int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!", &_argObj0 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (rsrc_type != le_wxIcon))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxIconBundle_php*)_this)->AddIcon(*(wxIcon *) _ptrObj0);
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxCloseEvent_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxCloseEvent, Veto)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	bool _argBool0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "|b!", &_argBool0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxCloseEvent_php*)_this)->Veto(_argBool0);
					break;
				case 0:
					 ((wxCloseEvent_php*)_this)->Veto();
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxCloseEvent, CanVeto)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			bool ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxCloseEvent_php*)_this)->CanVeto();
					break;
				default:
					break;
			}
			RETURN_BOOL(ret0)			
		}
	}
}
void php_wxSplitterEvent_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxSplitterEvent, SetSashPosition)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxSplitterEvent_php*)_this)->SetSashPosition((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxSplitterEvent, GetSashPosition)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxSplitterEvent_php*)_this)->GetSashPosition();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
void php_wxStringInputStream_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxStringInputStream, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!", &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					_this = new wxStringInputStream_php(wxString(_argStr0, wxConvUTF8));
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxStringInputStream);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxStringInputStream_php*) _this)->evnArray);
			array_init(((wxStringInputStream_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxStringInputStream_php*) _this)->phpObj);
			*((wxStringInputStream_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxStringInputStream_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxStringInputStream_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
void php_wxMemoryInputStream_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxMemoryInputStream, __construct)
{
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	char* _argStr0;
	int _argStr0_len;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s!l!", &_argStr0 , &_argStr0_len , &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					_this = new wxMemoryInputStream_php(_argStr0 , (int)_argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxMemoryInputStream);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxMemoryInputStream_php*) _this)->evnArray);
			array_init(((wxMemoryInputStream_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxMemoryInputStream_php*) _this)->phpObj);
			*((wxMemoryInputStream_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxMemoryInputStream_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxMemoryInputStream_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
void php_wxSpinEvent_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxSpinEvent, GetPosition)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxSpinEvent_php*)_this)->GetPosition();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
void php_wxScrollEvent_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxScrollEvent, GetPosition)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxScrollEvent_php*)_this)->GetPosition();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
void php_wxSpinButton_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxSpinButton, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!|z!z!l!", &_argObj0 , &_argLong0 , &_argObj1 , &_argObj2 , &_argLong1 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 5:
					_this = new wxSpinButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1);
					break;
				case 4:
					_this = new wxSpinButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 3:
					_this = new wxSpinButton_php((wxWindow*) _ptrObj0 , (int)_argLong0 , *(wxPoint *) _ptrObj1);
					break;
				case 2:
					_this = new wxSpinButton_php((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxSpinButton);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxSpinButton_php*) _this)->evnArray);
			array_init(((wxSpinButton_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxSpinButton_php*) _this)->phpObj);
			*((wxSpinButton_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxSpinButton_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxSpinButton_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxSpinButton, GetValue)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxSpinButton_php*)_this)->GetValue();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxSpinButton, SetRange)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxSpinButton_php*)_this)->SetRange((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxSpinButton, SetValue)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxSpinButton_php*)_this)->SetValue((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
void php_wxSpinCtrl_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	}			
PHP_METHOD(php_wxSpinCtrl, __construct)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	long _argLong0;
	long _argLong1;
	long _argLong2;
	long _argLong3;
	long _argLong4;
	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	void *_ptrObj1 = 0;
	zval *_argObj1 = 0;
	int id_to_find1;
	void *_ptrObj2 = 0;
	zval *_argObj2 = 0;
	int id_to_find2;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!l!|s!z!z!l!l!l!l!", &_argObj0 , &_argLong0 , &_argStr0 , &_argStr0_len , &_argObj1 , &_argObj2 , &_argLong1 , &_argLong2 , &_argLong3 , &_argLong4 ) == SUCCESS)
	{
		
		if(_argObj0)
		if (valid) 
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				if (!_ptrObj0 || (isInvalidDer_wxWindow(rsrc_type)))
					valid = 0;
			}
			else if(_argObj0->type==IS_LONG)
				_ptrObj0= (void *)_argObj0->value.lval;
			else if(_argObj0->type!=IS_NULL)
				valid = 0;
		}
		else
			valid = 0;
		if(valid && _argObj1)
		{
			if (_argObj1->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find1 = Z_RESVAL_P(*tmp);
				_ptrObj1 = zend_list_find(id_to_find1, &rsrc_type);
				if (!_ptrObj1 || (rsrc_type != le_wxPoint))
					valid = 0;
			}
			else if(_argObj1->type==IS_LONG)
				_ptrObj1= (void *)_argObj1->value.lval;
		}
		if(valid && _argObj2)
		{
			if (_argObj2->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj2), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS) 
			{
				id_to_find2 = Z_RESVAL_P(*tmp);
				_ptrObj2 = zend_list_find(id_to_find2, &rsrc_type);
				if (!_ptrObj2 || (rsrc_type != le_wxSize))
					valid = 0;
			}
			else if(_argObj2->type==IS_LONG)
				_ptrObj2= (void *)_argObj2->value.lval;
		}
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 9:
					_this = new wxSpinCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1 , (int)_argLong2 , (int)_argLong3 , (int)_argLong4);
					break;
				case 8:
					_this = new wxSpinCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1 , (int)_argLong2 , (int)_argLong3);
					break;
				case 7:
					_this = new wxSpinCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1 , (int)_argLong2);
					break;
				case 6:
					_this = new wxSpinCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2 , (int)_argLong1);
					break;
				case 5:
					_this = new wxSpinCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1 , *(wxSize *) _ptrObj2);
					break;
				case 4:
					_this = new wxSpinCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8) , *(wxPoint *) _ptrObj1);
					break;
				case 3:
					_this = new wxSpinCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0 , wxString(_argStr0, wxConvUTF8));
					break;
				case 2:
					_this = new wxSpinCtrl_php((wxWindow*) _ptrObj0 , (int)_argLong0);
					break;
				default:
					break;
			}
			long id_to_find = zend_list_insert(_this, le_wxSpinCtrl);
			add_property_resource(getThis(), _wxResource, id_to_find);					
			MAKE_STD_ZVAL(((wxSpinCtrl_php*) _this)->evnArray);
			array_init(((wxSpinCtrl_php*) _this)->evnArray);
			MAKE_STD_ZVAL(((wxSpinCtrl_php*) _this)->phpObj);
			*((wxSpinCtrl_php*) _this)->phpObj = *getThis();
			zval_copy_ctor(((wxSpinCtrl_php*) _this)->phpObj);
			#ifdef ZTS 
			((wxSpinCtrl_php*) _this)->TSRMLS_C = TSRMLS_C;
			#endif
			
		}
	}
}
PHP_METHOD(php_wxSpinCtrl, GetMin)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxSpinCtrl_php*)_this)->GetMin();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxSpinCtrl, GetMax)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxSpinCtrl_php*)_this)->GetMax();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxSpinCtrl, SetRange)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	long _argLong1;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!l!", &_argLong0 , &_argLong1 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 2:
					 ((wxSpinCtrl_php*)_this)->SetRange((int)_argLong0 , (int)_argLong1);
					break;
				default:
					break;
			}
			
		}
	}
}
PHP_METHOD(php_wxSpinCtrl, GetValue)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	valid=1;
	if (ZEND_NUM_ARGS()==0)
	{
		
		if(valid)
		{
			int ret0;
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 0:
					ret0 =  ((wxSpinCtrl_php*)_this)->GetValue();
					break;
				default:
					break;
			}
			RETURN_LONG((long)ret0)			
		}
	}
}
PHP_METHOD(php_wxSpinCtrl, SetValue)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	int valid = 1;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	long _argLong0;
	valid=1;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "l!", &_argLong0 ) == SUCCESS)
	{
		
		if(valid)
		{
			int gr = ZEND_NUM_ARGS(); 
			switch(gr)
			{
				case 1:
					 ((wxSpinCtrl_php*)_this)->SetValue((int)_argLong0);
					break;
				default:
					break;
			}
			
		}
	}
}
