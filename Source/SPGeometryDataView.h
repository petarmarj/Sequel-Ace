//
//  SPGeometryDataView.h
//  sequel-pro
//
//  Created by Hans-Jörg Bibiko on October 8, 2010.
//  Copyright (c) 2010 Hans-Jörg Bibiko. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation
//  files (the "Software"), to deal in the Software without
//  restriction, including without limitation the rights to use,
//  copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following
//  conditions:
//
//  The above copyright notice and this permission notice shall be
//  included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
//  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.
//
//  More info at <http://code.google.com/p/sequel-pro/>

@interface SPGeometryDataView : NSView
{
	NSWindow *geometryDataWindow;
	
	NSString *type;
	NSArray *coordinates;
	CGFloat x_min;
	CGFloat x_max;
	CGFloat y_min;
	CGFloat y_max;
	CGFloat width;
	CGFloat height;
	CGFloat zoom_factor;
	CGFloat margin_offset;
	CGFloat lineWidth;

	NSColor *lineColor;
	NSColor *borderLineColor;
	NSColor *backgroundColor;
	NSColor *pointFillColor;
	NSColor *pointStrokeColor;
	NSColor *polygonFillColor1;
	NSColor *polygonFillColor2;
	NSColor *polygonFillColor3;

}

- (id)initWithCoordinates:(NSDictionary*)coord targetDimension:(CGFloat)targetDimension;
- (id)initWithCoordinates:(NSDictionary*)coord;
- (NSImage*)thumbnailImage;
- (NSData*)pdfData;

@end
