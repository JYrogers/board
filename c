import board
import terminalio
import displayio
from fourwire import FourWire
from adafruit_display_text import label
from adafruit_st7789 import ST7789
BORDER = 20
FONTSCALE = 2
BACKGROUND_COLOR = 0x0FF00
FOREGROUND_COLOR = 0xAA0088
TEXT_COLOR = 0xFFFF00
displayio.release_displays()
spi = board.SPI()
tft_cs = board.D1
tft_dc = board.D2
dbuss = FourWire(spi, command = tft_dc, chip_select = tft_cs)
display = ST7789(dbuss, rotation = 270, width = 240, height = 135, rowstart =40, colstart = 53)
splash = displayio.Group()
display.root_group = splash
color_bitmap = displayio.Bitmap(display.width, display.height, 1)
color_palette = displayio.Palette(1)
color_palette[0] = BACKGROUND_COLOR
bg_sprite = displayio.TileGrid(color_bitmap, pixel_shader = color_palette, x =0, y= 0)
splash.append(bg_sprite)
from adafruit_display_shapes.rect import Rect
from adafruit_display_shapes.circle import Circle
from adafruit_display_shapes.roundrect import RoundRect
from adafruit_display_shapes.triangle import Triangle
from adafruit_display_shapes.line import Line
from adafruit_display_shapes.polygon import Polygon

