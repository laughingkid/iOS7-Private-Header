/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary, NSString;



__attribute__((visibility("hidden")))

@interface RTFCPZArchive : NSObject

{

    NSMutableDictionary *mEntries;

    id <RTFCPZArchiveInputStream> mInput;

    NSString *mRootName;

}



- (void)dealloc;

- (id)entryWithName:(id)arg1;

- (id)initWithData:(id)arg1;

- (struct RTFCPZEndOfCentralDirectory)readEndOfCentralDirectory;

- (void)readEntries;

- (id)readFilenameFromBuffer:(const char *)arg1 size:(unsigned long long)arg2;

- (id)rootName;

- (const char *)searchForEndOfCentralDirectory;



@end


