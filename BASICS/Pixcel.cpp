/*
//------------------------------------------------------------------------------------------------//
//                                      PIXCEL
//------------------------------------------------------------------------------------------------//

    Pixcel : 
            1)  A pixel is the smallest unit of a digital image. 
                It's a tiny square or dot that carries information about color and brightness.

            2)  Imagine the photo is made up of tiny dots. Each dot is a pixel. The more pixels, the clearer and more detailed the photo is.    

    Pixelation:
            1)  Pixelation occurs when individual pixels become noticeable, often due to image enlargement without maintaining image quality.
            2)  Imagine zooming in on a small photo – at some point, the pixels become visible, creating a blocky effect.

    Resolution :
            1)  Resolution is the number of pixels in an image, usually expressed as width x height (e.g., 1920x1080 pixels).
            2)  The resolution of an image refers to how many pixels are packed into it. Higher resolution means more pixels, and therefore, a clearer picture.
            3)  Think of it like a puzzle. A small puzzle with big pieces might represent low resolution, and a big puzzle with small pieces is high resolution.

    DPI(Dot Per Inch):
            1)  DPI refers to the density of pixels in a printed image, representing how many dots of ink are used per inch.
            2)  Consider a printed photo where a higher DPI means more ink dots per inch, leading to a finer and more detailed print.

    Megapixcel :
            1)  A megapixel is a million pixels. It's often used to describe the resolution of digital cameras.
            2)  For example, a camera with a 12-megapixel sensor captures images with a resolution of 12 million pixels. Higher megapixel counts generally result in images with more detail and higher resolution, 
                but other factors like sensor size, lens quality, and image processing also play crucial roles in determining overall image quality.        

    BitDepth:
            1)  Bit depth is the number of bits used to represent the color of a single pixel.
            2)  let's imagine you're an artist creating a painting. In this analogy, the canvas represents the total range of colors and shades you can use. Bit depth, then, is like the number of different color tones you have available to paint with.
            3)  The use of "2" in these calculations is based on the binary system, which is the foundation of digital computing. In the binary system, there are only two possible digits: 0 and 1.
                 When we say "2^n," it reflects the number of combinations or possibilities you can have with n bits, each of which can be either 0 or 1.
            4)  With 1 bit, you have 2^1 = 2 possible combinations (0 or 1).
                With 2 bits, you have 2^2 = 4 possible combinations (00, 01, 10, 11).
                With 3 bits, you have 2^3 = 8 possible combinations (000, 001, 010, 011, 100, 101, 110, 111).

                    1-bit depth: Each pixel is represented using 1 bit. With 1 bit, you can have 2^1 = 2 possible values (usually black and white).
                    8-bit depth: Each pixel is represented using 8 bits. With 8 bits, you can have 2^8 = 256 possible values, giving you a palette of 256 colors.
                    16-bit depth: Each pixel is represented using 16 bits, providing 2^16 = 65,536 possible values. This allows for a much larger range of colors.
                    24-bit depth: Each pixel is represented using 24 bits, resulting in 2^24 = 16,777,216 possible values. This is commonly referred to as "true color" and provides millions of colors.
                    32-bit depth: Similar to 24-bit depth, but with an additional 8 bits often used for an alpha channel (transparency information). This provides an even wider range of colors and effects.

    RGB(RED / GREEN / BLUE):
            1)  RGB is a color model where colors are created by combining varying intensities of red, green, and blue light.
            2)  These three primary colors of light can be mixed together in various proportions to create a wide spectrum of colors.

    CMYK :  
            1) Cyan, Magenta, Yellow, and Key (black)

    Pixel Art:
            1)  Pixel art is a form of digital art that uses tiny square-shaped pixels as the building blocks for creating images. 
            2)  Each pixel represents a single point of color in a grid, and when combined, they form detailed and often retro-style images. 
                Pixel art is known for its simplicity, blocky appearance, and a limited color palette.              

    Retina Display:
            1)  Retina display is a high-resolution screen developed by Apple, providing pixel density so high that individual pixels are hard to distinguish.
            2)  The concept of a Retina display focuses on improving the visual experience by packing more pixels into a display, resulting in sharper and more detailed images.
            3)  Retina displays are found across various Apple products, including iPhones, iPads, MacBooks, and iMacs. The technology involves not just increasing resolution but also optimizing other display factors, such as color accuracy, contrast, and brightness, to provide an enhanced visual experience. 
                The goal is to make on-screen content look more natural and lifelike. 

    Pixcel Pipeline:
            1)  The pixel pipeline refers to the series of processes that an image goes through, from capture to display. It involves tasks like sensor processing, color correction, and rendering.
            2)  Think of it as a production line for images – each step contributes to the final result that you see on your screen.            

//------------------------------------------------------------------------------------------------//
*/