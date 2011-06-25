unit DatamoduleImagelists;

interface

{$I ..\..\Source\Compilers.inc}

uses
  SysUtils,
  Classes,
  ImgList,
  Controls,
  {$IFNDEF COMPILER_6_UP}
  Forms,
  {$ENDIF}
  EasyListview;

type
  TImagelists = class(TDataModule)
    ImageListSmall: TImageList;
    ImageListLarge: TImageList;
    ImageListExLarge: TImageList;
    ImageListGroups: TImageList;
  private
    { Private declarations }
  public
    procedure UseImagesForListview(Listview: TEasyListview);
  end;

var
  Imagelists: TImagelists;

implementation

{$R *.dfm}

{ TImagelists }

procedure TImagelists.UseImagesForListview(Listview: TEasyListview);
begin
  Listview.ImagesGroup := ImageListGroups;
  Listview.ImagesSmall := ImageListSmall;
  Listview.ImagesLarge := ImageListLarge;
  Listview.ImagesExLarge := ImageListExLarge;
end;

end.

