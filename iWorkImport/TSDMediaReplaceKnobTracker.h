/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDKnobTracker.h"


__attribute__((visibility("hidden")))

@interface TSDMediaReplaceKnobTracker : TSDKnobTracker

{

}



- (_Bool)allowHUDToDisplay;

- (void)endMovingKnob;

- (id)initWithRep:(id)arg1 knob:(id)arg2;

- (id)mediaRep;

- (void)moveKnobToRepPosition:(struct CGPoint)arg1;

- (_Bool)operationShouldBeDynamic;

- (void)p_setTapToReplaceButtonHighlighted:(_Bool)arg1;

- (_Bool)shouldHideOtherKnobs;

- (_Bool)shouldHideSelectionHighlight;

- (void)showReplaceImageUI;



@end

