{$I Compilers.inc}

{$IFDEF COMPILER_7_UP}
  {$DEFINE USETHEMES}
  {$UNDEF JCL_THEME}
{$ENDIF}

{$IFDEF JCL_THEME}
  {$DEFINE USETHEMES}
{$ENDIF}

// Uncomment to support Themes in D4-D6 with Soft Gems ThemeManager (www.soft-gems.net)
{.$DEFINE USETHEMES}

// Uncomment to support SpTBX Themes
{$DEFINE SpTBX}

// -----------------------------------------------------------------------------
// Use unicode-aware inplace editors. This implementation uses Troy Wolbrink's
// TNT controls, which can be found at: www.tntware.com
{.$DEFINE TNTSUPPORT}

