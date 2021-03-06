/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CMMapper.h"


@class WDSection;



__attribute__((visibility("hidden")))

@interface WMSectionMapper : CMMapper

{

    WDSection *wdSection;

    float mTopMargin;

    float mLeftMargin;

    _Bool mBreakAtStart;

    _Bool mBreakAtEnd;

    _Bool mIsTitlePage;

}



+ (_Bool)isContentEmpty:(id)arg1;

- (void)MapSectionStyleAt:(id)arg1;

- (id)initWithWDSection:(id)arg1 breakAtStart:(_Bool)arg2 breakAtEnd:(_Bool)arg3 parent:(id)arg4;

- (float)leftMargin;

- (void)mapAt:(id)arg1 withState:(id)arg2;

- (void)mapFooterAt:(id)arg1 withState:(id)arg2;

- (void)mapHeaderAt:(id)arg1 withState:(id)arg2;

- (void)setLeftMargin:(float)arg1;

- (void)setTopMargin:(float)arg1;

- (float)topMargin;



@end


