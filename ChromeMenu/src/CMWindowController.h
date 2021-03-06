//
//  CMMenuWindowController.h
//  ChromeMenu
//
//  Created by Maksym on 7/12/13.
//  Copyright (c) 2013 Maksym Stefanchuk. All rights reserved.
//

#import "CMMenu+InternalMethods.h"

@class CMMenu, CMMenuScroller;

@interface CMWindowController : NSWindowController <NSWindowDelegate>


/* The designated initializer. This window controller creates its own custom suggestions window. */
- (id)initWithOwner:(CMMenu *)owner;

- (void)setBorderRadiuses:(NSArray *)radiuses;

- (void)layoutViews:(NSMutableArray *)viewControllers;

/**
 * @function displayInFrame: ignoreMouse:
 * @abstract Show underlying window in frame.
 * @param frame Rect in which to show a menu.
 * @param options Ignore mouse option is of most interest.
 *	When menu is first displayed, tracking areas for its menu items are being created.
 *	This option regulates whether we will capture the current mouse position and highlight according menu item
 *	underneath it. In some situations, for example when use keyboard navigation and open submenu with right arrow,
 *	you do not expect a menu item underneath mouse to be selected. It will get selected if mouse moves however.
 */
- (void)displayInFrame:(NSRect)frame options:(CMMenuOptions)options;
- (void)hide;
- (void)fadeOutWithComplitionHandler:(void (^)(void))handler;

- (void)insertView:(NSViewController *)viewController atIndex:(NSUInteger)index animate:(BOOL)animate;
- (void)addView:(NSViewController *)viewController animate:(BOOL)animate;
- (void)removeViewAtIndex:(NSUInteger)index;
- (void)removeViewAtIndex:(NSUInteger)index animate:(BOOL)animate complitionHandler:(void (^)(void))handler;
- (void)removeAllViews;

- (void)updateDocumentView;

- (BOOL)isTracking;
- (void)beginTrackingWithEvent:(NSEvent *)event options:(CMMenuOptions)options;
- (void)endTracking;

- (NSSize)intrinsicContentSize;

/**
 * @function verticalPadding
 * @abstract The top and bottom padding for the menu.
 */
- (CGFloat)verticalPadding;

/**
 * @function viewController:
 * @abastract Returns the view controller at a given point.
 * @discussion Point should be coordinates relative to Menu.
 * @param aPoint Point in NSWindow (Menu) coordinates.
 */
- (NSViewController *)viewAtPoint:(NSPoint)aPoint;


- (CMMenuScroller *)scrollerAtPoint:(NSPoint)aPoint;
- (void)scrollWithActiveScroller:(CMMenuScroller *)scroller;

- (void)moveVisibleRectToRect:(NSRect)rect ignoreMouse:(BOOL)ignoreMouse updateTrackingPrimitives:(BOOL)updateTrackingPrimitives;

/**
 * @abstract When certain menu item changes its needsTracking value (for example
 *	when item is enabled or disabled) add or remove tracking area to/from the documentView of scrollView
 *	for this item view only. It does not update tracking area literally if it already exists.
 */
- (void)updateTrackingPrimitiveForView:(NSViewController *)viewController ignoreMouse:(BOOL)ignoreMouse;

@end
