/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSString;

@interface FTSDetailPageSearchTask : MMObject {
	NSString* _searchText;
	unsigned long long _bussinessType;
	NSString* _uniqueKey;
	unsigned long _offset;
}
@property(assign, nonatomic) unsigned long offset;
@property(retain, nonatomic) NSString* uniqueKey;
@property(assign, nonatomic) unsigned long long bussinessType;
@property(retain, nonatomic) NSString* searchText;
-(void).cxx_destruct;
-(id)init;
-(void)updateUniqueKey;
@end
