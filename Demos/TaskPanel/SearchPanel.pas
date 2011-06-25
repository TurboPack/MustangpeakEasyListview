unit SearchPanel;

// **********************************************************************
//
// Create a new Task Panel from the Object Repository.
//
// File > New > Other...
//   The select the "New" tab and double click on the "EasyListview TaskPanel" icon
//
// **********************************************************************

interface                                                         
                                                                  
                                                                  
uses                                                              
  Windows,
  Messages,
  SysUtils,
  Classes,
  Controls,
  Forms,
  Dialogs,
  Graphics,
  EasyTaskPanelForm,
  StdCtrls,
  ExtCtrls;
                                                    
                                                                  
type                                                              
  TEasyTaskPanelFormSearch = class(TEasyTaskPanelForm)
    Edit1: TEdit;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    ComboBox1: TComboBox;
    Button1: TButton;
    Button2: TButton;
    procedure EasyTaskPanelFormShow(Sender: TObject);
  private                                                         
    { Private declarations }                                      
  public                                                          
    { Public declarations }                                       
  end;                                                            
                                                                  
var                                                               
  EasyTaskPanelFormSearch: TEasyTaskPanelFormSearch;
                                                                  
implementation                                                    
                                                                 
{$R *.dfm}                                                        
                                                                  
                                                                  
procedure TEasyTaskPanelFormSearch.EasyTaskPanelFormShow(Sender: TObject);
begin
  ComboBox1.ItemIndex := 0;
end;

end.