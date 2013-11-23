//
//  ChromMenuUnderlyingView.h
//  ChromeMenu
//
//  Created by Maksym on 7/3/13.
//  Copyright (c) 2013 Maksym Stefanchuk. All rights reserved.
//


@interface CMUnderlyingView : NSView
{
	NSArray *_borderRadiuses;
}

/**
 * @abstract Designated initializer
 * @param radius Array of four radiuses for bottom left, top left, top right and bottom right radiuses.
 */
- (id)initWithFrame:(NSRect)frameRect borderRadiuses:(NSArray *)radiuses;

- (void)setBorderRadiuses:(NSArray *)radiuses;

@end
