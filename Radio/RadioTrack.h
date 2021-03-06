/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "RadioManagedObjectWrapperProtocol.h"



@class NSData, NSDate, NSDictionary, NSManagedObject, NSManagedObjectContext, NSString, NSURL;



@interface RadioTrack : NSObject <RadioManagedObjectWrapperProtocol>

{

    NSManagedObjectContext *_context;

    NSManagedObject *_managedObject;

}



- (void).cxx_destruct;

- (void)_radioModelWasDeletedNotification:(id)arg1;

- (id)actionTextForStyle:(long long)arg1;

@property(nonatomic) NSData *adData;

@property(nonatomic) long long afterPromoClipID;

@property(copy, nonatomic) NSString *album;

@property(nonatomic) long long albumID;

@property(copy, nonatomic) NSURL *albumURL;

@property(copy, nonatomic) NSString *artist;

@property(copy, nonatomic) NSURL *artworkURL;

@property(copy, nonatomic) NSData *artworkURLData;

- (id)artworkURLForSize:(struct CGSize)arg1;

@property(nonatomic) long long beforePromoClipID;

@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;

@property(copy, nonatomic) NSString *copyrightText;

@property(copy, nonatomic) NSDate *dateAdded;

@property(nonatomic) long long dateFetched;

- (void)dealloc;

@property(copy, nonatomic) NSString *debugMessage;

- (id)description;

@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;

@property(nonatomic) double duration;

@property(readonly, nonatomic) NSDictionary *feedbackDictionaryRepresentation;

- (unsigned long long)hash;

@property(nonatomic) _Bool inWishList;

- (id)initWithManagedObject:(id)arg1 context:(id)arg2;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) _Bool isExplicit;

@property(nonatomic) int likeStatus;

@property(readonly, nonatomic) NSManagedObject *managedObject; // @synthesize managedObject=_managedObject;

- (id)objectID;

@property(copy, nonatomic) NSString *offerBuyParameters;

@property(copy, nonatomic) NSString *offerFormattedPrice;

@property(nonatomic) float offerPrice;

@property(nonatomic) long long offerType;

@property(copy, nonatomic) NSURL *previewURL;

@property(copy, nonatomic) NSDictionary *promoContent;

- (void)setActionText:(id)arg1 forStyle:(long long)arg2;

@property(nonatomic) long long shuffleSeed;

@property(nonatomic) long long storeID;

@property(copy, nonatomic) NSString *title;

@property(copy, nonatomic) NSDictionary *trackInfo;

@property(copy, nonatomic) NSDate *wishListDate;



@end


