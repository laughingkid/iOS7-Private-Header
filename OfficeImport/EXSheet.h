/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface EXSheet : NSObject

{

}



+ (Class)exSheetClassFromXmlSheetType:(id)arg1 location:(id)arg2;

+ (void)readAllDrawablesWithState:(id)arg1;

+ (void)readCommonSheetElementsFrom:(struct _xmlTextReader *)arg1 state:(id)arg2;

+ (void)readDelayedSheeWithLocation:(id)arg1 sheetXmlType:(id)arg2 state:(id)arg3;

+ (void)readDrawablesWithState:(id)arg1;

+ (void)readFrom:(struct _xmlNode *)arg1 state:(id)arg2;

+ (void)readLegacyDrawablesWithState:(id)arg1;

+ (void)readSheetExtensions:(struct _xmlNode *)arg1 state:(id)arg2;



@end


