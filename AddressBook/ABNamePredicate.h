/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ABPredicate.h"


@class NSArray, NSString;



@interface ABNamePredicate : ABPredicate

{

    void *_addressBook;

    NSString *_name;

    _Bool _matchWholeWords;

    _Bool _matchPersonOrCompanyNamesExclusively;

    _Bool _matchPreferredName;

    void *_tokenizations;

    struct __CFArray *_tokenizationSortKeys;

    NSArray *_groups;

    NSArray *_sources;

}



- (id)_personNameKeys;

- (void)ab_bindStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;

@property(copy, nonatomic) NSString *accountIdentifier;

@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;

- (void)dealloc;

@property(nonatomic) void *group;

@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;

- (id)init;

- (_Bool)isValid;

@property(nonatomic) _Bool matchPersonOrCompanyNamesExclusively; // @synthesize matchPersonOrCompanyNamesExclusively=_matchPersonOrCompanyNamesExclusively;

@property(nonatomic) _Bool matchPreferredName; // @synthesize matchPreferredName=_matchPreferredName;

@property(nonatomic) _Bool matchWholeWords; // @synthesize matchWholeWords=_matchWholeWords;

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

- (id)predicateFormat;

- (id)queryJoinsInCompound:(_Bool)arg1;

- (id)queryWhereString;

@property(nonatomic) void *source;

@property(retain, nonatomic) NSArray *sources; // @synthesize sources=_sources;

- (void *)tokenizations;



@end


