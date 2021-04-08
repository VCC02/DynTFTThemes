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

  CL_MATRIX01 = {$IFDEF IsDesktop} $008CFF8C; {$ELSE} $8FF1; {$ENDIF}
  CL_MATRIX02 = {$IFDEF IsDesktop} $006AFF6A; {$ELSE} $6FED; {$ENDIF}
  CL_MATRIX03 = {$IFDEF IsDesktop} $009FE890; {$ELSE} $9753; {$ENDIF}
  CL_MATRIX04 = {$IFDEF IsDesktop} $0066FF33; {$ELSE} $37EC; {$ENDIF}
  CL_MATRIX05 = {$IFDEF IsDesktop} $00B7D2B7; {$ELSE} $B696; {$ENDIF}
  CL_MATRIX06 = {$IFDEF IsDesktop} $0015FF15; {$ELSE} $17E2; {$ENDIF}
  CL_MATRIX07 = {$IFDEF IsDesktop} $0000CC00; {$ELSE} $0660; {$ENDIF}
  CL_MATRIX08 = {$IFDEF IsDesktop} $00008E00; {$ELSE} $0460; {$ENDIF}
  CL_MATRIX09 = {$IFDEF IsDesktop} $00004A00; {$ELSE} $0240; {$ENDIF}
  CL_MATRIX10 = {$IFDEF IsDesktop} $00B1FFB1; {$ELSE} $B7F6; {$ENDIF}
  CL_SCREENBK = {$IFDEF IsDesktop} $00000500; {$ELSE} $0020; {$ENDIF}
