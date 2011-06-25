
// The packages must be rebuilt to make the changes in this file active



// -----------------------------------------------------------------------------
//
//  TNT (TMS) Unicode Controls
//
// If you are using Tnt Unicode controls use this define to enable unicode support
// in the VSTools package.
//
//  If using TNT you MUST include the TNT package for your specific compiler in the
//  Requires section of this package.  It may be possible to compile without doing
//  this but you WILL eventually have strange crashes in your application that will
//  be difficult to understand.  The best way to do this in my opinion is to create
//  a new folder in the package install directory called "Delphi_TNT" (or CBuilder_TNT)
//  and copy all the files from the Delphi (or CBuilder) folder into it.  Now open the
//  VirtualShellToolsDx.dpk (or bpk) file in the "Delphi_TNT" (or CBuilder_TNT) based on your compiler
//  version in a text editor.  In the "Requires" section add "TNTUnicodeVcl_Rx0", where
//  the "x" is the version of Delphi you are using.  Open the dpk (bpk) file in your
//  IDE. Select the menu option Projects>Options>Directories/Conditionals>Conditional
//  and enter TNTSUPPORT. Compile the package, then open the VirtualShellToolsDxD.dpk (or bpk)
//  and compile and press the Install button.
//  Now when you update the packages you won't have to redo all this.  Just install
//  the update then compile the packages in the "Delphi_TNT" (or CBuilder_TNT) folders
//  an you are done.
//
//{$DEFINE TNTSUPPORT}

