/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSPData;



__attribute__((visibility("hidden")))

@interface KNMovieSegment : NSObject

{

    TSPData *mMovieData;

    double mStartTime;

}



- (void)dealloc;

- (id)init;

- (id)initEmptySegmentWithStartTime:(double)arg1;

- (id)initWithContext:(id)arg1 archive:(const struct MovieSegmentArchive *)arg2 unarchiver:(id)arg3;

- (id)initWithMovieData:(id)arg1 startTime:(double)arg2;

@property(readonly, nonatomic, getter=isEmptySegment) _Bool emptySegment;

@property(readonly, nonatomic) TSPData *movieData; // @synthesize movieData=mMovieData;

- (id)movieSegmentByAddingTimeOffset:(double)arg1;

- (void)saveToArchive:(struct MovieSegmentArchive *)arg1 archiver:(id)arg2;

@property(readonly, nonatomic) double startTime; // @synthesize startTime=mStartTime;



@end


