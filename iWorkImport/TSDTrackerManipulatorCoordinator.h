/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableSet, NSObject<TSDTrackerManipulator>;



__attribute__((visibility("hidden")))

@interface TSDTrackerManipulatorCoordinator : NSObject

{

    NSMutableSet *mRegisteredTMs;

    NSObject<TSDTrackerManipulator> *mControllingTM;

}



+ (void)p_dynamicallySubclassGRForNotification:(id)arg1;

+ (void)p_removeDynamicSubclass:(id)arg1;

@property(readonly, nonatomic) NSObject<TSDTrackerManipulator> *controllingTM; // @synthesize controllingTM=mControllingTM;

- (void)dealloc;

- (_Bool)hasRegisteredTrackerManipulator:(id)arg1;

- (id)init;

- (void)operationDidEnd;

- (void)operationWillEnd;

- (void)p_notifyControlChange;

- (void)registerTrackerManipulator:(id)arg1;

- (_Bool)relinquishTrackerManipulatorControl:(id)arg1;

- (_Bool)takeControlWithTrackerManipulator:(id)arg1;

- (void)unregisterTrackerManipulator:(id)arg1;



@end


