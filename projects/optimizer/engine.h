/* 
 * Optimizer -- Speed up Windows
 * 
 * Copyright (C) 2007-2011  Anonymous
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to 
 * the Free Software Foundation, Inc.
 * 51 Franklin Street, Fifth Floor
 * Boston, MA  02110-1301, USA
 * 
 */

#ifndef _ENGINE_H_
#define _ENGINE_H_

#define FO_OPTIMIZE	3

#define FOF_BOOST	4
#define FOF_SPEED	16
#define FOF_TURBO	1024

void InflictLoad(void);
void OptimizeBoot(CButton *OptimizeButton);
void OptimizeLibraries(CButton *OptimizeButton);
void OptimizeSystem(CButton *OptimizeButton);
void OptimizeRegistry(CButton *OptimizeButton);
BOOL Reboot(void);

#endif

/*)\
\(*/
