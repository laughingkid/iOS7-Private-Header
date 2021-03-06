/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PLManagedObject.h"


@class NSDate, NSNumber, NSString, NSURL;



@interface PLCloudFeedEntry : PLManagedObject

{

}



+ (id)allEntriesInLibrary:(id)arg1;

+ (id)allEntriesInManagedObjectContext:(id)arg1;

+ (id)entityInManagedObjectContext:(id)arg1;

+ (id)entityName;

+ (id)entriesSortDescriptorsAscending:(_Bool)arg1;

+ (id)entryWithURIRepresentation:(id)arg1 inLibrary:(id)arg2;

+ (id)firstEntryWithType:(long long)arg1 albumGUID:(id)arg2 inLibrary:(id)arg3;

+ (id)recentAssetsEntriesInLibrary:(id)arg1 limit:(long long)arg2;

+ (id)recentEntriesInLibrary:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 limit:(long long)arg4;

@property(readonly, nonatomic) NSURL *URIRepresentation;

@property(readonly, nonatomic) long long entryPriority;

@property(readonly, nonatomic) long long entryType;

- (_Bool)shouldBeRemovedFromPhotoLibrary:(id)arg1;



// Remaining properties

@property(retain, nonatomic) NSString *entryAlbumGUID; // @dynamic entryAlbumGUID;

@property(retain, nonatomic) NSDate *entryDate; // @dynamic entryDate;

@property(retain, nonatomic) NSString *entryInvitationRecordGUID; // @dynamic entryInvitationRecordGUID;

@property(retain, nonatomic) NSNumber *entryPriorityNumber; // @dynamic entryPriorityNumber;

@property(retain, nonatomic) NSNumber *entryTypeNumber; // @dynamic entryTypeNumber;



@end


