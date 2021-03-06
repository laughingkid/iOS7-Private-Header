/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSKCommand.h"


@class TSSTheme, TSUColor;



__attribute__((visibility("hidden")))

@interface TSSThemeReplaceColorPresetCommand : TSKCommand

{

    TSSTheme *mTheme;

    TSUColor *mColor;

    TSUColor *mOldColor;

    unsigned long long mIndex;

}



@property(readonly, nonatomic) TSUColor *color; // @synthesize color=mColor;

- (void)commit;

- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithTheme:(id)arg1 color:(id)arg2 index:(unsigned long long)arg3 context:(id)arg4;

@property(readonly, nonatomic) TSUColor *oldColor; // @synthesize oldColor=mOldColor;

- (void)p_installColorPreset:(id)arg1;

- (_Bool)process;

- (void)redo;

- (void)saveToArchiver:(id)arg1;

@property(readonly, nonatomic) TSSTheme *theme; // @synthesize theme=mTheme;

- (void)undo;



@end


