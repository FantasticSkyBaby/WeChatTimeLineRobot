/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface EmoticonTabRecommendData : XXUnknownSuperclass <PBCoding> {
	NSMutableArray* m_itemList;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* m_itemList;
+(id)getSavePath;
+(id)getSaveRootDir;
+(id)Instance;
+(void)initialize;
-(void).cxx_destruct;
-(void)saveToFile;
-(void)removeItemWithProductId:(id)productId;
-(void)addItem:(id)item;
-(id)itemList;
-(id)init;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end

