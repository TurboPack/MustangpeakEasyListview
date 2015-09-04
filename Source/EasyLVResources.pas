unit EasyLVResources;

// Version 2.1.0
//
// The contents of this file are subject to the Mozilla Public License
// Version 1.1 (the "License"); you may not use this file except in compliance
// with the License. You may obtain a copy of the License at http://www.mozilla.org/MPL/
//
// Alternatively, you may redistribute this library, use and/or modify it under the terms of the
// GNU Lesser General Public License as published by the Free Software Foundation;
// either version 2.1 of the License, or (at your option) any later version.
// You may obtain a copy of the LGPL at http://www.gnu.org/copyleft/.
//
// Software distributed under the License is distributed on an "AS IS" basis,
// WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License for the
// specific language governing rights and limitations under the License.
//
// The initial developer of this code is Jim Kueneman <jimdk@mindspring.com>
// Special thanks to the following in no particular order for their help/support/code
//    Danijel Malik, Robert Lee, Werner Lehmann, Alexey Torgashin, Milan Vandrovec
//
//----------------------------------------------------------------------------

interface

{$I ..\Include\Debug.inc}

{$B-}

const
  STR_NONEXISTENTCOLUMN = 'ERROR: Accessing a non-existent column index';
  STR_NONEXISTENTCOLUMNBANDROW = 'ERROR: Accessing a non-existent Column Band Row';
  STR_NONEXISTENTGROUP = 'ERROR: Accessing a non-existent Group ID';
  STR_BACKGROUNDALPHABLEND = 'Error: Background AlphaBlend mode requires an AlphaImage';

implementation

end.
