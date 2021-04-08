{   DynTFT  - graphic components for microcontrollers
    Copyright (C) 2017 VCC
    release date: 29 Dec 2017
    author: VCC

    This file is part of DynTFT project.

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

  CL_LAVA01 = {$IFDEF IsDesktop} $005176F6; {$ELSE} $F3AA; {$ENDIF}
  CL_LAVA02 = {$IFDEF IsDesktop} $000045FF; {$ELSE} $FA20; {$ENDIF}
  CL_LAVA03 = {$IFDEF IsDesktop} $00002DFF; {$ELSE} $F960; {$ENDIF}
  CL_LAVA04 = {$IFDEF IsDesktop} $001438C8; {$ELSE} $C9C2; {$ENDIF}
  CL_LAVA05 = {$IFDEF IsDesktop} $001414D4; {$ELSE} $D0A2; {$ENDIF}
  CL_LAVA06 = {$IFDEF IsDesktop} $004C5DFF; {$ELSE} $FAE9; {$ENDIF}
  CL_LAVA07 = {$IFDEF IsDesktop} $00002BEA; {$ELSE} $E940; {$ENDIF}
  CL_LAVA08 = {$IFDEF IsDesktop} $000075E0; {$ELSE} $E3A0; {$ENDIF}
  CL_LAVA09 = {$IFDEF IsDesktop} $00000057; {$ELSE} $5000; {$ENDIF}
  CL_LAVA10 = {$IFDEF IsDesktop} $0095B7FF; {$ELSE} $FDB2; {$ENDIF}
  CL_SCREENBK = {$IFDEF IsDesktop} $0000000A; {$ELSE} $0800; {$ENDIF}
