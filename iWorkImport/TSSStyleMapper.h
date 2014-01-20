/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSKStyleMapper.h"



@class NSMutableArray, TSKAddedToDocumentContext, TSSStylesheet, TSURetainedPointerKeyDictionary;



__attribute__((visibility("hidden")))

@interface TSSStyleMapper : NSObject <TSKStyleMapper>

{

    TSSStylesheet *_targetStylesheet;

    TSSStylesheet *_targetThemeStylesheet;

    TSKAddedToDocumentContext *_dolcContext;

    TSURetainedPointerKeyDictionary *_styleMap;

    NSMutableArray *_mappingContext;

    _Bool _forceMatchStyle;

    _Bool _varyInThemeStylesheet;

}



- (id)_mappedStyleForStyle:(id)arg1 depth:(unsigned long long)arg2;

- (id)createStyleForStyle:(id)arg1 withPropertyMap:(id)arg2;

- (void)dealloc;

@property(nonatomic) _Bool forceMatchStyle; // @synthesize forceMatchStyle=_forceMatchStyle;

- (id)initWithTargetStylesheet:(id)arg1 newStyleDOLCContext:(id)arg2;

- (id)mappedStyleForStyle:(id)arg1;

- (id)mappedStyleForStyle:(id)arg1 inThemeStylesheet:(_Bool)arg2;

- (id)pCascadedFindExistingRootlessStyle:(id)arg1 propertyMap:(id)arg2;

- (id)pTargetParentForStyle:(id)arg1 withParentIdentifier:(id)arg2;

- (void)popMappingContext:(id)arg1;

- (void)pushMappingContext:(id)arg1;

@property(readonly, nonatomic) TSSStylesheet *targetStylesheet;

- (void)varyInThemeStylesheetForDurationOfBlock:(id)arg1;

- (void)varyInThemeStylesheetIf:(_Bool)arg1 forDurationOfBlock:(id)arg2;



@end

