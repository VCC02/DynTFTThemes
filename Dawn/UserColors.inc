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

  CL_DAWN01 = {$IFDEF IsDesktop} $00F7B3BA; {$ELSE} $BD9E; {$ENDIF}
  CL_DAWN02 = {$IFDEF IsDesktop} $00F49FA9; {$ELSE} $ACFE; {$ENDIF}
  CL_DAWN03 = {$IFDEF IsDesktop} $00CBA6E2; {$ELSE} $E539; {$ENDIF}
  CL_DAWN04 = {$IFDEF IsDesktop} $00A585B7; {$ELSE} $B434; {$ENDIF}
  CL_DAWN05 = {$IFDEF IsDesktop} $00BCE3F9; {$ELSE} $FF17; {$ENDIF}
  CL_DAWN06 = {$IFDEF IsDesktop} $0021BEF4; {$ELSE} $F5E4; {$ENDIF}
  CL_DAWN07 = {$IFDEF IsDesktop} $0083C0E9; {$ELSE} $EE10; {$ENDIF}
  CL_DAWN08 = {$IFDEF IsDesktop} $00628DA6; {$ELSE} $A46C; {$ENDIF}
  CL_DAWN09 = {$IFDEF IsDesktop} $00404D50; {$ELSE} $5268; {$ENDIF}
  CL_DAWN10 = {$IFDEF IsDesktop} $00D8BCE9; {$ELSE} $EDFB; {$ENDIF}
  CL_SCREENBK = {$IFDEF IsDesktop} $00F0848C; {$ELSE} $8C3E; {$ENDIF}