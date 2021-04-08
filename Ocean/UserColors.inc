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

  CL_OCEAN01 = {$IFDEF IsDesktop} $00FF6060; {$ELSE} $631F; {$ENDIF}
  CL_OCEAN02 = {$IFDEF IsDesktop} $00FF0C0C; {$ELSE} $087F; {$ENDIF}
  CL_OCEAN03 = {$IFDEF IsDesktop} $00FB7D00; {$ELSE} $03FF; {$ENDIF}
  CL_OCEAN04 = {$IFDEF IsDesktop} $00AE5200; {$ELSE} $0295; {$ENDIF}
  CL_OCEAN05 = {$IFDEF IsDesktop} $00FF8484; {$ELSE} $843F; {$ENDIF}
  CL_OCEAN06 = {$IFDEF IsDesktop} $00E3A689; {$ELSE} $8D3C; {$ENDIF}
  CL_OCEAN07 = {$IFDEF IsDesktop} $00FFCA95; {$ELSE} $965F; {$ENDIF}
  CL_OCEAN08 = {$IFDEF IsDesktop} $00BC6636; {$ELSE} $3337; {$ENDIF}
  CL_OCEAN09 = {$IFDEF IsDesktop} $00550000; {$ELSE} $000A; {$ENDIF}
  CL_OCEAN10 = {$IFDEF IsDesktop} $00FFCAAD; {$ELSE} $AE5F; {$ENDIF}
  CL_SCREENBK = {$IFDEF IsDesktop} $00FFAB60; {$ELSE} $655F; {$ENDIF}
