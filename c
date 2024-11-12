import board
import terminalio
import displayio
from fourwire import FourWire
from adafruit_display_text import label
from adafruit_st7789 import ST7789
BORDER = 20
FONTSCALE = 2
BACKGROUND_COLOR = 0xFFFFF
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


rect = Rect(99, 55, 41, 41, fill=0x964B00, outline = 0x0)
splash.append(rect)

circle = Circle(117, 60, 15, fill=0x964B00, outline=0x0)
splash.append(circle)

circle = Circle(110, 58, 5, fill=0xFFFF, outline=0x0)

circle1 = Circle(125, 58, 5, fill=0xFFFF, outline=0x0)

splash.append(circle)
splash.append(circle1)s

triangle = Triangle(120, 55,55, 5, 0, 0, fill=0x00FF00, outline=0xFF00FF)
splash.append(triangle)



while True:
    pass
s
