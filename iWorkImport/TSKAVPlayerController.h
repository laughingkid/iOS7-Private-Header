/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVPlayer;



__attribute__((visibility("hidden")))

@interface TSKAVPlayerController : NSObject

{

    AVPlayer *mPlayer;

    id <TSKAVPlayerControllerDelegate> mDelegate;

    long long mRepeatMode;

    float mVolume;

    float mRateBeforeScrubbing;

    unsigned long long mScrubbingCount;

    _Bool mCanPlay;

    _Bool mPlaying;

    _Bool mFastReversing;

    _Bool mFastForwarding;

    _Bool mIsObservingStatus;

    double _absoluteCurrentTime;

}



+ (_Bool)automaticallyNotifiesObserversOfEndTime;

+ (_Bool)automaticallyNotifiesObserversOfStartTime;

+ (id)keyPathsForValuesAffectingAbsoluteDuration;

+ (id)keyPathsForValuesAffectingDuration;

+ (id)keyPathsForValuesAffectingEndTime;

+ (id)keyPathsForValuesAffectingStartTime;

@property(nonatomic) double absoluteCurrentTime; // @synthesize absoluteCurrentTime=_absoluteCurrentTime;

@property(readonly, nonatomic) double absoluteDuration;

- (void)beginScrubbing;

@property(readonly, nonatomic) _Bool canPlay; // @synthesize canPlay=mCanPlay;

@property(readonly, nonatomic) double currentTime;

- (void)dealloc;

@property(readonly, nonatomic) id <TSKAVPlayerControllerDelegate> delegate; // @synthesize delegate=mDelegate;

@property(readonly, nonatomic) double duration;

- (void)endScrubbing;

@property(nonatomic) double endTime;

- (id)init;

- (id)initWithPlayer:(id)arg1 delegate:(id)arg2;

@property(nonatomic, getter=isFastForwarding) _Bool fastForwarding; // @synthesize fastForwarding=mFastForwarding;

@property(nonatomic, getter=isFastReversing) _Bool fastReversing; // @synthesize fastReversing=mFastReversing;

@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=mPlaying;

@property(readonly, nonatomic, getter=isScrubbing) _Bool scrubbing;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

- (void)p_applyVolumeToPlayerItem;

- (_Bool)p_canFastForward;

- (_Bool)p_canFastReverse;

- (void)p_closedCaptioningStatusDidChange:(id)arg1;

- (void)p_playbackDidFailWithError:(id)arg1;

- (void)p_playerItemDidPlayToEndTime:(id)arg1;

- (void)p_startObservingClosedCaptionDisplayEnabled;

- (void)p_stopObservingClosedCaptionDisplayEnabled;

- (void)p_updateClosedCaptionDisplayEnabled;

@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=mPlayer;

- (void)playerItemDidPlayToEndTimeAtRate:(float)arg1;

@property(readonly, nonatomic) double remainingTime;

@property(nonatomic) long long repeatMode; // @synthesize repeatMode=mRepeatMode;

- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2;

- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(id)arg3;

- (void)seekBackwardByOneFrame;

- (void)seekForwardByOneFrame;

- (void)seekToBeginning;

- (void)seekToEnd;

@property(nonatomic) double startTime;

@property(nonatomic) float volume; // @synthesize volume=mVolume;

- (void)teardown;



@end


