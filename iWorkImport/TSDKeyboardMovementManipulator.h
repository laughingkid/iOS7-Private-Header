/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSDTrackerManipulator.h"



@class TSDInteractiveCanvasController, TSDRepDragTracker;



__attribute__((visibility("hidden")))

@interface TSDKeyboardMovementManipulator : NSObject <TSDTrackerManipulator>

{

    TSDInteractiveCanvasController *mICC;

    TSDRepDragTracker *mTracker;

}



- (_Bool)allowTrackerManipulatorToTakeControl:(id)arg1;

- (void)dealloc;

- (id)initWithInteractiveCanvasController:(id)arg1;

- (void)moveBackward:(id)arg1;

- (void)moveDown:(id)arg1;

- (void)moveDownAndModifySelection:(id)arg1;

- (void)moveForward:(id)arg1;

- (void)moveLeft:(id)arg1;

- (void)moveLeftAndModifySelection:(id)arg1;

- (void)moveParagraphBackwardAndModifySelection:(id)arg1;

- (void)moveParagraphForwardAndModifySelection:(id)arg1;

- (void)moveRight:(id)arg1;

- (void)moveRightAndModifySelection:(id)arg1;

- (void)moveSelectionByDelta:(struct CGPoint)arg1;

- (void)moveToBeginningOfParagraph:(id)arg1;

- (void)moveToEndOfParagraph:(id)arg1;

- (void)moveUp:(id)arg1;

- (void)moveUpAndModifySelection:(id)arg1;

- (void)moveWordLeft:(id)arg1;

- (void)moveWordLeftAndModifySelection:(id)arg1;

- (void)moveWordRight:(id)arg1;

- (void)moveWordRightAndModifySelection:(id)arg1;

- (void)operationDidEnd;

- (double)p_movementFactorInPixelSpace:(long long)arg1;

- (_Bool)readyToEndOperation;

- (id)tracker;



@end


