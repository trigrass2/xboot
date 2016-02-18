/*
 * resource/res-wdog.c
 *
 * Copyright(c) 2007-2016 Jianjun Jiang <8192542@qq.com>
 * Official site: http://xboot.org
 * Mobile phone: +86-18665388956
 * QQ: 8192542
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#include <xboot.h>
#include <bcm2836-wdog.h>

static struct bcm2836_wdog_data_t wdog_data = {
	.phys	= BCM2836_PM_BASE,
};

static struct resource_t res_wdog = {
	.name	= "bcm2836-wdog",
	.id		= -1,
	.data	= &wdog_data,
};

static __init void resource_wdog_init(void)
{
	register_resource(&res_wdog);
}
resource_initcall(resource_wdog_init);
