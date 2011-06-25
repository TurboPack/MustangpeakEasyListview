
[Setup]
AppName=Mustangpeak EasyListview
#include "Version.txt"
; (use an include file for the AppVerName key for dynamic version number creation.)
DefaultDirName={commondocs}\Mustangpeak\EasyListview
DefaultGroupName=EasyNSE
LicenseFile=..\Docs\Licence.txt
UsePreviousAppDir=true
UsePreviousGroup=true
ShowLanguageDialog=yes
OutputDir=.\

OutputBaseFilename=EasyListviewSetup
AppCopyright=©Jim Kueneman, Mustangpeak
AllowNoIcons=true

WizardSmallImageFile=..\..\InnoSetup\Shared\SantaRitasSmall.bmp
;WizardImageFile=D:\Program Data\Delphi Projects\3rd Party Components\InnoSetup\Shared\mustangpeak.bmp
WizardImageStretch=false

[Messages]
BeveledLabel=© Jim Kueneman, Mustangpeak.net

[Files]
Source: ..\..\InnoSetup\MustangpeakComponentInstaller.dll; DestDir: {app}; Flags: uninsneveruninstall
Source: Setup.ini; DestDir: {app}
Source: ..\CBuilder\EasyListViewC5.bpk; DestDir: {app}\CBuilder
Source: ..\CBuilder\EasyListViewC5.cpp; DestDir: {app}\CBuilder
Source: ..\CBuilder\EasyListViewC5.res; DestDir: {app}\CBuilder
Source: ..\CBuilder\EasyListViewC5D.bpk; DestDir: {app}\CBuilder
Source: ..\CBuilder\EasyListViewC5D.cpp; DestDir: {app}\CBuilder
Source: ..\CBuilder\EasyListViewC5D.res; DestDir: {app}\CBuilder
Source: ..\CBuilder\EasyListviewC5G.bpg; DestDir: {app}\CBuilder
Source: ..\CBuilder\EasyListviewC6.bpk; DestDir: {app}\CBuilder
Source: ..\CBuilder\EasyListViewC6.cpp; DestDir: {app}\CBuilder
Source: ..\CBuilder\EasyListViewC6.res; DestDir: {app}\CBuilder
Source: ..\CBuilder\EasyListViewC6D.bpk; DestDir: {app}\CBuilder
Source: ..\CBuilder\EasyListViewC6D.cpp; DestDir: {app}\CBuilder
Source: ..\CBuilder\EasyListViewC6D.res; DestDir: {app}\CBuilder
Source: ..\CBuilder\EasyListviewC6G.bpg; DestDir: {app}\CBuilder
Source: ..\CBuilder\Demos\BCB5\DemoBCB5.bpr; DestDir: {app}\CBuilder\Demos\BCB5
Source: ..\CBuilder\Demos\BCB5\DemoBCB5.cpp; DestDir: {app}\CBuilder\Demos\BCB5
Source: ..\CBuilder\Demos\BCB5\DemoBCB5.res; DestDir: {app}\CBuilder\Demos\BCB5
Source: ..\CBuilder\Demos\BCB5\Unit1.cpp; DestDir: {app}\CBuilder\Demos\BCB5
Source: ..\CBuilder\Demos\BCB5\Unit1.dfm; DestDir: {app}\CBuilder\Demos\BCB5
Source: ..\CBuilder\Demos\BCB5\Unit1.h; DestDir: {app}\CBuilder\Demos\BCB5
Source: ..\CBuilder\Demos\BCB6\Basic\DemoBCB6.bpr; DestDir: {app}\CBuilder\Demos\BCB6\Basic
Source: ..\CBuilder\Demos\BCB6\Basic\DemoBCB6.cpp; DestDir: {app}\CBuilder\Demos\BCB6\Basic
Source: ..\CBuilder\Demos\BCB6\Basic\DemoBCB6.res; DestDir: {app}\CBuilder\Demos\BCB6\Basic
Source: ..\CBuilder\Demos\BCB6\Basic\Unit1.cpp; DestDir: {app}\CBuilder\Demos\BCB6\Basic
Source: ..\CBuilder\Demos\BCB6\Basic\Unit1.dfm; DestDir: {app}\CBuilder\Demos\BCB6\Basic
Source: ..\CBuilder\Demos\BCB6\Basic\Unit1.h; DestDir: {app}\CBuilder\Demos\BCB6\Basic
Source: ..\CBuilder\Demos\BCB6\TaskPanel\TaskPanelProject.bpr; DestDir: {app}\CBuilder\Demos\BCB6\TaskPanel
Source: ..\CBuilder\Demos\BCB6\TaskPanel\TaskPanelProject.cpp; DestDir: {app}\CBuilder\Demos\BCB6\TaskPanel
Source: ..\CBuilder\Demos\BCB6\TaskPanel\TaskPanelProject.res; DestDir: {app}\CBuilder\Demos\BCB6\TaskPanel
Source: ..\CBuilder\Demos\BCB6\TaskPanel\Unit1.cpp; DestDir: {app}\CBuilder\Demos\BCB6\TaskPanel
Source: ..\CBuilder\Demos\BCB6\TaskPanel\Unit1.dfm; DestDir: {app}\CBuilder\Demos\BCB6\TaskPanel
Source: ..\CBuilder\Demos\BCB6\TaskPanel\Unit1.h; DestDir: {app}\CBuilder\Demos\BCB6\TaskPanel
Source: ..\CBuilder\Demos\BCB6\TaskPanel\Unit2.cpp; DestDir: {app}\CBuilder\Demos\BCB6\TaskPanel
Source: ..\CBuilder\Demos\BCB6\TaskPanel\Unit2.dfm; DestDir: {app}\CBuilder\Demos\BCB6\TaskPanel
Source: ..\CBuilder\Demos\BCB6\TaskPanel\Unit2.h; DestDir: {app}\CBuilder\Demos\BCB6\TaskPanel
Source: ..\CBuilder\Demos\BCB6\TaskPanel\Unit3.cpp; DestDir: {app}\CBuilder\Demos\BCB6\TaskPanel
Source: ..\CBuilder\Demos\BCB6\TaskPanel\Unit3.dfm; DestDir: {app}\CBuilder\Demos\BCB6\TaskPanel
Source: ..\CBuilder\Demos\BCB6\TaskPanel\Unit3.h; DestDir: {app}\CBuilder\Demos\BCB6\TaskPanel
Source: ..\CBuilder\Demos\BDS 4.0\TaskPanel\TaskPanelProject.bdsproj; DestDir: {app}\CBuilder\Demos\BDS 4.0\TaskPanel
Source: ..\CBuilder\Demos\BDS 4.0\TaskPanel\TaskPanelProject.cpp; DestDir: {app}\CBuilder\Demos\BDS 4.0\TaskPanel
Source: ..\CBuilder\Demos\BDS 4.0\TaskPanel\TaskPanelProject.res; DestDir: {app}\CBuilder\Demos\BDS 4.0\TaskPanel
Source: ..\CBuilder\Demos\BDS 4.0\TaskPanel\Unit1.cpp; DestDir: {app}\CBuilder\Demos\BDS 4.0\TaskPanel
Source: ..\CBuilder\Demos\BDS 4.0\TaskPanel\Unit1.dfm; DestDir: {app}\CBuilder\Demos\BDS 4.0\TaskPanel
Source: ..\CBuilder\Demos\BDS 4.0\TaskPanel\Unit1.h; DestDir: {app}\CBuilder\Demos\BDS 4.0\TaskPanel
Source: ..\CBuilder\Demos\BDS 4.0\TaskPanel\Unit2.cpp; DestDir: {app}\CBuilder\Demos\BDS 4.0\TaskPanel
Source: ..\CBuilder\Demos\BDS 4.0\TaskPanel\Unit2.dfm; DestDir: {app}\CBuilder\Demos\BDS 4.0\TaskPanel
Source: ..\CBuilder\Demos\BDS 4.0\TaskPanel\Unit2.h; DestDir: {app}\CBuilder\Demos\BDS 4.0\TaskPanel
Source: ..\CBuilder\Demos\BDS 4.0\TaskPanel\Unit3.cpp; DestDir: {app}\CBuilder\Demos\BDS 4.0\TaskPanel
Source: ..\CBuilder\Demos\BDS 4.0\TaskPanel\Unit3.dfm; DestDir: {app}\CBuilder\Demos\BDS 4.0\TaskPanel
Source: ..\CBuilder\Demos\BDS 4.0\TaskPanel\Unit3.h; DestDir: {app}\CBuilder\Demos\BDS 4.0\TaskPanel
Source: ..\Delphi\EasyListviewD4.dpk; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD4.res; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD4D.dpk; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD4D.res; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD5.dpk; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD5D.dpk; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD5.res; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD5D.res; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD6.dpk; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD6D.dpk; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD7.dpk; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD7D.dpk; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD7.res; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD7D.res; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD9.dpk; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD9D.dpk; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD9.res; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD9D.res; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD10.dpk; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD10D.dpk; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD10.res; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD10D.res; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD11.dpk; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD11D.dpk; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD11.res; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD11D.res; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD12.dpk; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD12.res; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD12D.dpk; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD12D.res; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD14.dpk; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD14.res; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD14D.dpk; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD14D.res; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD15.dpk; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD15.res; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD15D.dpk; DestDir: {app}\Delphi\
Source: ..\Delphi\EasyListviewD15D.res; DestDir: {app}\Delphi\
Source: ..\Design\Compilers.inc; DestDir: {app}\Design\
Source: ..\Design\EasyCollectionEditor.dfm; DestDir: {app}\Design\
Source: ..\Design\EasyCollectionEditor.pas; DestDir: {app}\Design\
Source: ..\Design\EasyListviewReg.dcr; DestDir: {app}\Design\
Source: ..\Design\EasyListviewReg.pas; DestDir: {app}\Design\
Source: ..\Design\EasyCollectionEditor.dfm; DestDir: {app}\Design\
Source: ..\Design\EasyCollectionEditor.pas; DestDir: {app}\Design\
Source: ..\Design\EasyCollectionEditorD4.dfm; DestDir: {app}\Design\
Source: ..\Design\EasyCollectionEditorD4.pas; DestDir: {app}\Design\
Source: ..\Docs\Licence.txt; DestDir: {app}\Docs\
Source: ..\Docs\Mustangpeak.net.url; DestDir: {app}\Docs\
Source: ..\Docs\Whats New.txt; DestDir: {app}\Docs\
Source: ..\Docs\Unicode Compatibility.txt; DestDir: {app}\Docs\
;Source: ..\Documentation\EasyListview.chm; DestDir: {app}\Docs\
Source: ..\Demos\Basic\Interfaced (Jim)\Data.txt; DestDir: {app}\Demos\Basic\Interfaced (Jim)
Source: ..\Demos\Basic\Interfaced (Jim)\Unit1.dfm; DestDir: {app}\Demos\Basic\Interfaced (Jim)
Source: ..\Demos\Basic\Interfaced (Jim)\Unit1.pas; DestDir: {app}\Demos\Basic\Interfaced (Jim)
Source: ..\Demos\Basic\Interfaced (Jim)\UserInterfaceDataProject.dpr; DestDir: {app}\Demos\Basic\Interfaced (Jim)
Source: ..\Demos\Basic\Simple\SimpleProject.dpr; DestDir: {app}\Demos\Basic\Simple
Source: ..\Demos\Basic\Simple\Unit1.dfm; DestDir: {app}\Demos\Basic\Simple
Source: ..\Demos\Basic\Simple\Unit1.pas; DestDir: {app}\Demos\Basic\Simple
Source: ..\Demos\Basic\Virtual\VirtualProject.dpr; DestDir: {app}\Demos\Basic\Virtual
Source: ..\Demos\Basic\Virtual\Unit1.dfm; DestDir: {app}\Demos\Basic\Virtual
Source: ..\Demos\Basic\Virtual\Unit1.pas; DestDir: {app}\Demos\Basic\Virtual
Source: ..\Demos\Basic\Interfaced Part Two\InterfacedPartTwoProject.dpr; DestDir: {app}\Demos\Basic\Interfaced Part Two\
Source: ..\Demos\Basic\Interfaced Part Two\Unit1.dfm; DestDir: {app}\Demos\Basic\Interfaced Part Two\
Source: ..\Demos\Basic\Interfaced Part Two\Unit1.pas; DestDir: {app}\Demos\Basic\Interfaced Part Two\
Source: ..\Demos\Basic\Interfaced Part Two\Unit2.pas; DestDir: {app}\Demos\Basic\Interfaced Part Two\
Source: ..\Demos\Basic\Interfaced Part One\InterfacedPartOneProject.dpr; DestDir: {app}\Demos\Basic\Interfaced Part One\
Source: ..\Demos\Basic\Interfaced Part One\Unit1.dfm; DestDir: {app}\Demos\Basic\Interfaced Part One\
Source: ..\Demos\Basic\Interfaced Part One\Unit1.pas; DestDir: {app}\Demos\Basic\Interfaced Part One\
Source: ..\Demos\Basic\Interfaced Part One\Unit2.pas; DestDir: {app}\Demos\Basic\Interfaced Part One\
Source: ..\Demos\Context Menus\ContextMenuProject.dpr; DestDir: {app}\Demos\Context Menus\
Source: ..\Demos\Context Menus\README-WIN.TXT; DestDir: {app}\Demos\Context Menus\
Source: ..\Demos\Context Menus\Unit1.dfm; DestDir: {app}\Demos\Context Menus\
Source: ..\Demos\Context Menus\Unit1.pas; DestDir: {app}\Demos\Context Menus\
Source: ..\Demos\DragDrop\OLE DragDrop\OLEDragDropProject.dpr; DestDir: {app}\Demos\DragDrop\OLE DragDrop
Source: ..\Demos\DragDrop\OLE DragDrop\Unit1.dfm; DestDir: {app}\Demos\DragDrop\OLE DragDrop
Source: ..\Demos\DragDrop\OLE DragDrop\Unit1.pas; DestDir: {app}\Demos\DragDrop\OLE DragDrop
Source: ..\Demos\DragDrop\OLE DragDrop Explorer\OLEDragDropExplorerProject.dpr; DestDir: {app}\Demos\DragDrop\OLE DragDrop Explorer
Source: ..\Demos\DragDrop\OLE DragDrop Explorer\Unit1.dfm; DestDir: {app}\Demos\DragDrop\OLE DragDrop Explorer
Source: ..\Demos\DragDrop\OLE DragDrop Explorer\Unit1.pas; DestDir: {app}\Demos\DragDrop\OLE DragDrop Explorer
Source: ..\Demos\DragDrop\VCL DragDrop\Unit1.dfm; DestDir: {app}\Demos\DragDrop\VCL DragDrop
Source: ..\Demos\DragDrop\VCL DragDrop\Unit1.pas; DestDir: {app}\Demos\DragDrop\VCL DragDrop
Source: ..\Demos\DragDrop\VCL DragDrop\VCLDragDropProject.dpr; DestDir: {app}\Demos\DragDrop\VCL DragDrop
Source: ..\Demos\Fulldemo\FullDemoProject.dpr; DestDir: {app}\Demos\Fulldemo
Source: ..\Demos\Fulldemo\Unit1.dfm; DestDir: {app}\Demos\Fulldemo
Source: ..\Demos\Fulldemo\Unit1.pas; DestDir: {app}\Demos\Fulldemo
Source: ..\Demos\Grid\GridProject.dpr; DestDir: {app}\Demos\Grid
Source: ..\Demos\Grid\Unit1.dfm; DestDir: {app}\Demos\Grid
Source: ..\Demos\Grid\Unit1.pas; DestDir: {app}\Demos\Grid
Source: ..\Demos\Hints\HintProject.dpr; DestDir: {app}\Demos\Hints
Source: ..\Demos\Hints\Unit1.dfm; DestDir: {app}\Demos\Hints
Source: ..\Demos\Hints\Unit1.pas; DestDir: {app}\Demos\Hints
Source: ..\Demos\Item CustomDraw Advanced\Unit1.dfm; DestDir: {app}\Demos\Item CustomDraw Advanced
Source: ..\Demos\Item CustomDraw Advanced\Unit1.pas; DestDir: {app}\Demos\Item CustomDraw Advanced
Source: ..\Demos\Item CustomDraw Advanced\ItemCustomDrawProjectAdv.dpr; DestDir: {app}\Demos\Item CustomDraw Advanced
Source: ..\Demos\Item CustomDraw Advanced\Donkey.bmp; DestDir: {app}\Demos\Item CustomDraw Advanced
Source: ..\Demos\Image CustomDraw\ImageCustomDrawProject.dpr; DestDir: {app}\Demos\Image CustomDraw
Source: ..\Demos\Image CustomDraw\Unit1.dfm; DestDir: {app}\Demos\Image CustomDraw
Source: ..\Demos\Image CustomDraw\Unit1.pas; DestDir: {app}\Demos\Image CustomDraw
Source: ..\Demos\Image CustomDraw\XPSearch.bmp; DestDir: {app}\Demos\Image CustomDraw
Source: ..\Demos\Image CustomDraw\XPSearch_Small.bmp; DestDir: {app}\Demos\Image CustomDraw
Source: ..\Demos\Item CustomDraw\ItemCustomDrawProject.dpr; DestDir: {app}\Demos\Item CustomDraw
Source: ..\Demos\Item CustomDraw\Unit1.dfm; DestDir: {app}\Demos\Item CustomDraw
Source: ..\Demos\Item CustomDraw\Unit1.pas; DestDir: {app}\Demos\Item CustomDraw
Source: ..\Demos\ScrollButton\ScrollButtonProject.dpr; DestDir: {app}\Demos\ScrollButton
Source: ..\Demos\ScrollButton\Unit1.dfm; DestDir: {app}\Demos\ScrollButton
Source: ..\Demos\ScrollButton\Unit1.pas; DestDir: {app}\Demos\ScrollButton
Source: ..\Demos\Shared Demo Data\DatamoduleImagelists.dfm; DestDir: {app}\Demos\Shared Demo Data
Source: ..\Demos\Shared Demo Data\DatamoduleImagelists.pas; DestDir: {app}\Demos\Shared Demo Data
Source: ..\Demos\Sorting\SortingProject.dpr; DestDir: {app}\Demos\Sorting
Source: ..\Demos\Sorting\Unit1.dfm; DestDir: {app}\Demos\Sorting
Source: ..\Demos\Sorting\Unit1.pas; DestDir: {app}\Demos\Sorting
Source: ..\Demos\Taskband\TaskbandProject.dpr; DestDir: {app}\Demos\Taskband
Source: ..\Demos\Taskband\Unit1.dfm; DestDir: {app}\Demos\Taskband
Source: ..\Demos\Taskband\Unit1.pas; DestDir: {app}\Demos\Taskband
Source: ..\Demos\TaskPanel\SearchPanel.dfm; DestDir: {app}\Demos\TaskPanel
Source: ..\Demos\TaskPanel\SearchPanel.pas; DestDir: {app}\Demos\TaskPanel
Source: ..\Demos\TaskPanel\ReplacePanel.dfm; DestDir: {app}\Demos\TaskPanel
Source: ..\Demos\TaskPanel\ReplacePanel.pas; DestDir: {app}\Demos\TaskPanel
Source: ..\Demos\TaskPanel\TaskPanelProject.dpr; DestDir: {app}\Demos\TaskPanel
Source: ..\Demos\TaskPanel\TaskPanelProject.dpr; DestDir: {app}\Demos\TaskPanel
Source: ..\Demos\TaskPanel\Unit1.dfm; DestDir: {app}\Demos\TaskPanel
Source: ..\Demos\TaskPanel\Unit1.pas; DestDir: {app}\Demos\TaskPanel
Source: ..\Demos\Threaded Thumbnails\ProjectThreadedThumbnails.dpr; DestDir: {app}\Demos\Threaded Thumbnails
Source: ..\Demos\Threaded Thumbnails\Unit1.dfm; DestDir: {app}\Demos\Threaded Thumbnails
Source: ..\Demos\Threaded Thumbnails\Unit1.pas; DestDir: {app}\Demos\Threaded Thumbnails
Source: ..\Demos\ThumbScroller\ThumbScrollerProject.dpr; DestDir: {app}\Demos\ThumbScroller
Source: ..\Demos\ThumbScroller\Unit1.dfm; DestDir: {app}\Demos\ThumbScroller
Source: ..\Demos\ThumbScroller\Unit1.pas; DestDir: {app}\Demos\ThumbScroller
Source: ..\Demos\DemoBuildProjectGroup.bpg; DestDir: {app}\Demos
Source: ..\Include\Debug.inc; DestDir: {app}\Include\
Source: ..\Include\AddIns.inc; DestDir: {app}\Include\
Source: ..\Source\Compilers.inc; DestDir: {app}\Source\
Source: ..\Source\EasyListview.pas; DestDir: {app}\Source\
Source: ..\Source\EasyLVResources.pas; DestDir: {app}\Source\
Source: ..\Source\EasyScrollFrame.pas; DestDir: {app}\Source\
Source: ..\Source\EasyTaskPanelForm.pas; DestDir: {app}\Source\
Source: ..\Source\EasyMSAAIntf.pas; DestDir: {app}\Source\
Source: ..\Source\EasyListviewAccessible.pas; DestDir: {app}\Source\
Source: ..\Source\EasyRes.res; DestDir: {app}\Source\
Source: ..\Source\Options.inc; DestDir: {app}\Source\


[Registry]
Root: HKCU; Subkey: Software\Mustangpeak\EasyListview; ValueType: string; ValueName: InstallPath; ValueData: {app}; Flags: uninsdeletekey
Root: HKCU; Subkey: Software\Mustangpeak\EasyListview; ValueType: string; ValueName: SourcePath; ValueData: {app}\Source\; Flags: uninsdeletekey
Root: HKCU; Subkey: Software\Mustangpeak\EasyListview; ValueType: string; ValueName: DelphiPackagePath; ValueData: {app}\Delphi\; Flags: uninsdeletekey
Root: HKCU; Subkey: Software\Mustangpeak\EasyListview; ValueType: string; ValueName: CBuilderPackagePath; ValueData: {app}\CBuilder\; Flags: uninsdeletekey

[Dirs]
Name: {app}\Include
Name: {app}\Delphi
Name: {app}\Demos
Name: {app}\Design
Name: {app}\Docs
Name: {app}\Resources
Name: {app}\Source
Name: {app}\Demos
Name: {app}\CBuilder
Name: {app}\CBuilder\Demos\BCB5
Name: {app}\CBuilder\Demos\BCB6


[Code]
const
  SetupFile = 'Setup.ini';
  WaitForIDEs = False;

#include "..\..\InnoSetup\Templates\IDE Install.txt"
