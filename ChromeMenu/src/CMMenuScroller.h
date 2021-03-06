//
//  CMMenuScroller.h
//  ChromeMenu
//
//  Created by Maksym on 9/7/13.
//  Copyright (c) 2013 Maksym Stefanchuk. All rights reserved.
//


enum {
	CMMenuScrollerTop = 1,
	CMMenuScrollerBottom = 2
};
typedef NSUInteger CMMenuScrollerType;



@interface CMMenuScroller : NSView
{
	@private
	CMMenuScrollerType _scrollerType;
}

- (id)initWithScrollerType:(CMMenuScrollerType)scrollerType;

- (CMMenuScrollerType)scrollerType;

@end
