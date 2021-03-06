/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class MPAVController, NSObject<OS_dispatch_queue>;



@interface MPSystemNowPlayingController : NSObject

{

    _Bool _hasSeenAnyItem;

    MPAVController *_player;

    NSObject<OS_dispatch_queue> *_serialQueue;

    NSObject<OS_dispatch_queue> *_statusBarQueue;

}



- (void).cxx_destruct;

- (int)_MRRepeatModeForMPRepeatType:(unsigned long long)arg1;

- (int)_MRShuffleModeForMPShuffleType:(unsigned long long)arg1;

- (unsigned long long)_chapterIndexForItem:(id)arg1 atTime:(double)arg2;

- (id)_progressInfoForItem:(id)arg1;

- (id)init;

@property(nonatomic) __weak MPAVController *player; // @synthesize player=_player;

- (void)postNowPlayingInfoForItem:(id)arg1;

- (void)postProgressUpdateForItem:(id)arg1;



@end


