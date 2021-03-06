/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class KNBuild, KNBuildChunk, KNBuildRenderer;



__attribute__((visibility("hidden")))

@interface KNAnimatedBuild : NSObject

{

    KNBuildChunk *mBuildStage;

    long long mEventIndex;

    long long mStageIndex;

    KNBuildRenderer *mRenderer;

    double mStartTime;

    double mEventStartTime;

    double mDuration;

    double mEndTime;

    double mEventEndTime;

    _Bool mAutomatic;

    _Bool mAnimateAtEndOfPreviousBuild;

    _Bool mIsVisibleAtBeginning;

    _Bool mIsVisibleAtEnd;

}



+ (id)createWithBuildStage:(id)arg1 eventIndex:(long long)arg2 stageIndex:(long long)arg3 startTime:(double)arg4 eventStartTime:(double)arg5 duration:(double)arg6 automatic:(_Bool)arg7 renderer:(id)arg8 animateAtEndOfPreviousBuild:(_Bool)arg9;

@property(nonatomic) _Bool animateAtEndOfPreviousBuild; // @synthesize animateAtEndOfPreviousBuild=mAnimateAtEndOfPreviousBuild;

- (id)applyActionEffectToAttributes:(id)arg1;

@property(readonly, nonatomic) _Bool automatic; // @synthesize automatic=mAutomatic;

@property(readonly, nonatomic) KNBuild *buildDescription;

@property(readonly, nonatomic) KNBuildChunk *buildStage; // @synthesize buildStage=mBuildStage;

@property(readonly, nonatomic) int buildType;

- (void)dealloc;

- (id)description;

@property(nonatomic) double duration; // @synthesize duration=mDuration;

@property(readonly, nonatomic) double endTime; // @synthesize endTime=mEndTime;

@property(readonly, nonatomic) double eventEndTime; // @synthesize eventEndTime=mEventEndTime;

@property(nonatomic) long long eventIndex; // @synthesize eventIndex=mEventIndex;

@property(readonly, nonatomic) double eventStartTime; // @synthesize eventStartTime=mEventStartTime;

- (id)initWithBuildStage:(id)arg1 eventIndex:(long long)arg2 stageIndex:(long long)arg3 startTime:(double)arg4 eventStartTime:(double)arg5 duration:(double)arg6 automatic:(_Bool)arg7 renderer:(id)arg8 animateAtEndOfPreviousBuild:(_Bool)arg9;

@property(readonly, nonatomic) _Bool isActionBuild;

@property(readonly, nonatomic) _Bool isBuildIn;

@property(readonly, nonatomic) _Bool isBuildOut;

@property(readonly, nonatomic) _Bool isDriftBuild;

@property(readonly, nonatomic) _Bool isEmphasisBuild;

@property(readonly, nonatomic) _Bool isMovieStartBuild;

@property(readonly, nonatomic) _Bool isVerticalText;

@property(nonatomic) _Bool isVisibleAtBeginning; // @synthesize isVisibleAtBeginning=mIsVisibleAtBeginning;

@property(nonatomic) _Bool isVisibleAtEnd; // @synthesize isVisibleAtEnd=mIsVisibleAtEnd;

- (void)p_setVisibility;

@property(readonly, nonatomic) KNBuildRenderer *renderer; // @synthesize renderer=mRenderer;

@property(readonly, nonatomic) long long stageIndex; // @synthesize stageIndex=mStageIndex;

@property(readonly, nonatomic) double startTime; // @synthesize startTime=mStartTime;



@end


