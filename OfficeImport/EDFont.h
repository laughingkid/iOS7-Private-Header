/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "EDImmutableObject.h"

#import "NSCopying.h"



@class EDColorReference, EDResources, NSString;



__attribute__((visibility("hidden")))

@interface EDFont : NSObject <NSCopying, EDImmutableObject>

{

    EDResources *mResources;

    NSString *mName;

    EDColorReference *mColorReference;

    int mUnderline;

    int mScript;

    double mHeightInTwips;

    int mCharSet;

    int mFamily;

    unsigned int mWeight;

    _Bool mBold;

    _Bool mItalic;

    _Bool mShadow;

    _Bool mStrike;

    _Bool mOutline;

    _Bool mUnderlineOverridden;

    _Bool mStrikeOverridden;

    _Bool mBoldOverridden;

    _Bool mWeightOverridden;

    _Bool mItalicOverridden;

    _Bool mHeightOverridden;

    _Bool mDoNotModify;

}



+ (id)filterFontName:(id)arg1;

+ (id)fontNameWithFamilyName:(id)arg1 bold:(_Bool)arg2 italic:(_Bool)arg3;

+ (id)fontWithResources:(id)arg1;

+ (id)lassoNameForFontName:(id)arg1 bold:(_Bool)arg2 italic:(_Bool)arg3;

- (int)charSet;

- (id)color;

- (id)colorReference;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (int)family;

- (id)filteredName;

- (double)height;

- (id)initWithResources:(id)arg1;

- (_Bool)isBold;

- (_Bool)isBoldOverridden;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isEqualToFont:(id)arg1;

- (_Bool)isHeightOverridden;

- (_Bool)isItalic;

- (_Bool)isItalicOverridden;

- (_Bool)isOutline;

- (_Bool)isShadow;

- (_Bool)isStrike;

- (_Bool)isStrikeOverridden;

- (_Bool)isUnderlineOverridden;

- (_Bool)isWeightOverridden;

- (id)lassoName;

- (id)name;

- (int)script;

- (void)setBold:(_Bool)arg1;

- (void)setCharSet:(int)arg1;

- (void)setColor:(id)arg1;

- (void)setColorReference:(id)arg1;

- (void)setDoNotModify:(_Bool)arg1;

- (void)setFamily:(int)arg1;

- (void)setHeight:(double)arg1;

- (void)setItalic:(_Bool)arg1;

- (void)setName:(id)arg1;

- (void)setOutline:(_Bool)arg1;

- (void)setScript:(int)arg1;

- (void)setShadow:(_Bool)arg1;

- (void)setStrike:(_Bool)arg1;

- (void)setUnderline:(int)arg1;

- (void)setWeight:(unsigned int)arg1;

- (int)underline;

- (unsigned int)weight;



@end

