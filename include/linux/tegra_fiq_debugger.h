/*
 * linux/arch/arm/mach-tegra/include/mach/tegra_fiq_debugger.h
 *
 * Copyright (C) 2010 Google, Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __MACH_TEGRA_FIQ_DEBUGGER_H
#define __MACH_TEGRA_FIQ_DEBUGGER_H

#ifdef CONFIG_TEGRA_FIQ_DEBUGGER
void tegra_serial_debug_init_irq_mode(unsigned int base, int irq,
			   struct clk *clk, int signal_irq, int wakeup_irq);
#else
static inline void tegra_serial_debug_init_irq_mode(unsigned int base, int irq,
			   struct clk *clk, int signal_irq, int wakeup_irq)
{
}
#endif

#if defined(CONFIG_TEGRA_FIQ_DEBUGGER) && defined(CONFIG_FIQ_GLUE)
void tegra_serial_debug_init(unsigned int base, int fiq,
	struct clk *clk, int signal_irq, int wakeup_irq);
#else
static inline void tegra_serial_debug_init(unsigned int base, int fiq,
	struct clk *clk, int signal_irq, int wakeup_irq)
{
}
#endif

#endif
