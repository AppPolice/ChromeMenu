//
//  CMScrollView.h
//  ChromeMenu
//
//  Created by Maksym on 7/15/13.
//  Copyright (c) 2013 Maksym Stefanchuk. All rights reserved.
//


@interface CMScrollView : NSScrollView

- (void)scrollWithEvent:(NSEvent *)theEvent;
- (void)scrollUpByAmount:(CGFloat)amount;
- (void)scrollDownByAmount:(CGFloat)amount;

@end
