/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSSStyle.h"


#import "TSSPreset.h"



@class NSString;



__attribute__((visibility("hidden")))

@interface TSWPListStyle : TSSStyle <TSSPreset>

{

}



+ (id)CJKListNameForNumberType:(int)arg1;

+ (id)defaultLabelGeometries;

+ (id)defaultLabelIndents;

+ (int)defaultLabelNumberType;

+ (id)defaultLabelString;

+ (id)defaultMissingBulletImage;

+ (id)defaultPropertyMap;

+ (id)defaultStyleWithContext:(id)arg1;

+ (id)defaultStyleWithContext:(id)arg1 type:(int)arg2;

+ (id)defaultTextIndents;

+ (_Bool)defaultTieredNumber;

+ (int)effectiveTypeForLevel:(unsigned long long)arg1 forPropertyMapping:(id)arg2;

+ (int)firstLabelTypeForPropertyMapping:(id)arg1;

+ (id)harvardStyleWithContext:(id)arg1;

+ (_Bool)isDefaultMissingBulletImage:(id)arg1;

+ (int)labelTypeForLevel:(unsigned long long)arg1 forPropertyMapping:(id)arg2;

+ (id)listStyleWithNumberType:(int)arg1 inStyleSheet:(id)arg2 withNumberedPresetStyle:(id)arg3;

+ (id)numberedlistStyleForPresets:(id)arg1;

+ (id)pDefaultLabelValuesForLabelTypeProperty:(int)arg1;

+ (void)pGetDefaultTextIndentFloats:(double [9])arg1;

+ (id)pLabelTypeArrayForType:(int)arg1;

+ (int)pLabelTypeForLevel:(unsigned long long)arg1 forPropertyMapping:(id)arg2 includeDegenerateLevels:(_Bool)arg3;

+ (id)presetStyleDescriptor;

+ (id)properties;

+ (id)propertiesAllowingNSNull;

+ (id)propertyMapForListNumberType:(int)arg1;

+ (id)stickyOverrideProperties;

- (id)baseStyleForTopicNumbers;

- (int)effectiveTypeForLevel:(unsigned long long)arg1;

- (int)firstLabelType;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(_Bool)arg4;

- (double)labelIndentForLevel:(unsigned long long)arg1;

- (int)labelTypeForLevel:(unsigned long long)arg1;

- (void)loadFromArchive:(const struct ListStyleArchive *)arg1 unarchiver:(id)arg2;

- (id)overridePropertyMapWithValue:(id)arg1 forProperty:(int)arg2 atParagraphLevels:(id)arg3 withContext:(id)arg4;

- (id)pOverrideArrayWithValue:(id)arg1 forProperty:(int)arg2 atParagraphLevels:(id)arg3 withContext:(id)arg4;

@property(readonly, nonatomic) NSString *presetKind;

- (void)saveToArchive:(struct ListStyleArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

- (double)textIndentForLevel:(unsigned long long)arg1 fontSize:(double)arg2;



@end


