/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "MFDraggableItem.h"

#import "NSCopying.h"



@class MFComposeRecipientOriginContext, NSArray, NSString;



@interface MFComposeRecipient : NSObject <NSCopying, MFDraggableItem>

{

    void *_record;

    int _recordID;

    int _property;

    int _identifier;

    NSString *_address;

    NSString *_label;

    NSString *_countryCode;

    NSArray *_cachedCompleteMatches;

    NSArray *_cachedMatchedStrings;

    NSArray *_cachedSortedMembers;

    MFComposeRecipientOriginContext *_originContext;

}



+ (id)mf_recipientWithGALResult:(id)arg1;

+ (id)recipientWithProperty:(int)arg1 address:(id)arg2;

+ (id)recipientWithRecord:(void *)arg1 property:(int)arg2 identifier:(int)arg3;

+ (id)recipientWithRecord:(void *)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4;

- (id)_unformattedAddress;

- (id)address;

- (id)children;

- (id)childrenWithCompleteMatches;

- (id)commentedAddress;

- (id)completelyMatchedAttributedStrings;

- (id)compositeName;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;

- (void)dealloc;

- (id)displayString;

- (unsigned long long)hash;

- (int)identifier;

- (id)initWithRecord:(void *)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4 address:(id)arg5;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isGroup;

@property(readonly, nonatomic, getter=isRemovableFromSearchResults) _Bool removableFromSearchResults;

- (id)label;

- (id)normalizedAddress;

- (id)objectForDragType:(id)arg1;

@property(readonly, nonatomic) MFComposeRecipientOriginContext *originContext; // @synthesize originContext=_originContext;

- (id)placeholderName;

- (id)preferredSendingAddress;

- (int)property;

- (void *)record;

- (int)recordID;

- (void)setIdentifier:(int)arg1;

- (void)setOriginContext:(id)arg1;

- (void)setRecord:(void *)arg1 recordID:(int)arg2 identifier:(int)arg3;

- (id)shortName;

- (id)sortedChildren;

- (id)supportedDragTypes;

- (id)uncommentedAddress;

- (id)unlocalizedLabel;

- (_Bool)wasCompleteMatch;



@end

