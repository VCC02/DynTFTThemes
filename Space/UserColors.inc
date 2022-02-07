{   DynTFT  - graphic components for microcontrollers
    Copyright (C) 2017, 2022 VCC
    initial release date: 29 Dec 2017
    author: VCC

    This file is part of DynTFT project.

    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this file,
    You can obtain one at https://mozilla.org/MPL/2.0/.

    Copyright (c) 2022, VCC  https://github.com/VCC02

    Alternatively, the contents of this file may be used under the terms
    of the GNU Lesser General Public License Version 3, as described below:

    DynTFT is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, version 3 of the License.

    DynTFT is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with DynTFT, in COPYING.LESSER file.
    If not, see <http://www.gnu.org/licenses/>.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
    IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
    DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
    TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
    OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
}

  CL_SPACE01 = {$IFDEF IsDesktop} $00FFC284; {$ELSE} $861F; {$ENDIF}
  CL_SPACE02 = {$IFDEF IsDesktop} $00FFAA55; {$ELSE} $555F; {$ENDIF}
  CL_SPACE03 = {$IFDEF IsDesktop} $00F0E491; {$ELSE} $973E; {$ENDIF}
  CL_SPACE04 = {$IFDEF IsDesktop} $00E8D153; {$ELSE} $569D; {$ENDIF}
  CL_SPACE05 = {$IFDEF IsDesktop} $00FF9980; {$ELSE} $84DF; {$ENDIF}
  CL_SPACE06 = {$IFDEF IsDesktop} $00E76425; {$ELSE} $233C; {$ENDIF}
  CL_SPACE07 = {$IFDEF IsDesktop} $00FF4915; {$ELSE} $125F; {$ENDIF}
  CL_SPACE08 = {$IFDEF IsDesktop} $00C62700; {$ELSE} $0138; {$ENDIF}
  CL_SPACE09 = {$IFDEF IsDesktop} $006A0000; {$ELSE} $000D; {$ENDIF}
  CL_SPACE10 = {$IFDEF IsDesktop} $00FFC5B7; {$ELSE} $B63F; {$ENDIF}
  CL_SCREENBK = {$IFDEF IsDesktop} $000A0000; {$ELSE} $0001; {$ENDIF}
