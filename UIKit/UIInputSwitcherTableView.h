/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableView.h"


@class UIKeyboardMenuView;



__attribute__((visibility("hidden")))

@interface UIInputSwitcherTableView : UITableView

{

    UIKeyboardMenuView *_menu;

}



- (void)deselectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2;

@property(nonatomic) UIKeyboardMenuView *menu; // @synthesize menu=_menu;

- (void)selectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(long long)arg3;



@end

