unit ReplacePanel;

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
  EasyTaskPanelForm, StdCtrls, MPCommonObjects, EasyListview, ExtCtrls;
                                                    
                                                                  
type                                                              
  TEasyTaskPanelFormReplace = class(TEasyTaskPanelForm)
    Label1: TLabel;
    Button1: TButton;
    Edit1: TEdit;
    RadioGroup1: TRadioGroup;
    Label2: TLabel;
  private                                                         
    { Private declarations }                                      
  public                                                          
    { Public declarations }                                       
  end;                                                            
                                                                  
var                                                               
  EasyTaskPanelFormReplace: TEasyTaskPanelFormReplace;
                                                                  
implementation                                                    
                                                                 
{$R *.dfm}                                                        
                                                                  
                                                                  
end.
