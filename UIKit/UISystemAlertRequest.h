/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "UIModalViewDelegate.h"



@class UIModalView;



__attribute__((visibility("hidden")))

@interface UISystemAlertRequest : NSObject <UIModalViewDelegate>

{

    int _alertID;

    UIModalView *_sheet;

    id _target;

    SEL _action;

}



- (void)_willBeReleasedOnDismiss;

- (void)alertSheet:(id)arg1 buttonClicked:(int)arg2;

- (void)dealloc;

- (id)initWithAlertID:(int)arg1 sheet:(id)arg2 target:(id)arg3 action:(SEL)arg4;



@end


