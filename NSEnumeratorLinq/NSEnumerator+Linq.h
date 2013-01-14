//
//  NSEnumeratorLinq.h
//  NSEnumeratorLinq
//
//  Created by Антон Буков on 13.01.13.
//  Copyright (c) 2013 Happy Nation Project. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSEnumerator (Linq)
- (NSEnumerator *)concat:(NSEnumerator *)enumerator;
- (NSInteger)count;
- (NSInteger)count:(BOOL (^)(id))predicate;
- (NSEnumerator *)distinct:(id (^)(id))func;
- (NSEnumerator *)distinct;
- (NSEnumerator *)select:(id (^)(id))predicate;
- (NSEnumerator *)select_i:(id (^)(id, NSInteger))predicate;
- (NSEnumerator *)skip:(NSInteger)count;
- (NSEnumerator *)where:(BOOL (^)(id))predicate;
- (NSEnumerator *)where_i:(BOOL (^)(id, NSInteger))predicate;
@end
