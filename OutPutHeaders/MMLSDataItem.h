/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface MMLSDataItem : XXUnknownSuperclass {
	int fileType;
	NSString* filePath;
	unsigned long fileTime;
	NSString* session;
	NSString* userName;
	unsigned long mesLocalId;
	unsigned long long fileSize;
}
@property(assign, nonatomic) unsigned long mesLocalId;
@property(retain, nonatomic) NSString* userName;
@property(retain, nonatomic) NSString* session;
@property(assign, nonatomic) unsigned long fileTime;
@property(retain, nonatomic) NSString* filePath;
@property(assign, nonatomic) unsigned long long fileSize;
@property(assign, nonatomic) int fileType;
+(BOOL)dataItemCompareItem:(id)item withItem:(id)item2;
-(void).cxx_destruct;
-(id)init;
@end
