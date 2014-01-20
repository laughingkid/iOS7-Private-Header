/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DOMStyleSheet.h"


@class DOMCSSRule, DOMCSSRuleList;



__attribute__((visibility("hidden")))

@interface DOMCSSStyleSheet : DOMStyleSheet

{

}



- (int)addRule:(id)arg1 style:(id)arg2 index:(unsigned int)arg3;

@property(readonly) DOMCSSRuleList *cssRules;

- (void)deleteRule:(unsigned int)arg1;

- (unsigned int)insertRule:(id)arg1:(unsigned int)arg2;

- (unsigned int)insertRule:(id)arg1 index:(unsigned int)arg2;

@property(readonly) DOMCSSRule *ownerRule;

- (void)removeRule:(unsigned int)arg1;

@property(readonly) DOMCSSRuleList *rules;



@end

